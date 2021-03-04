//
// Created by LinK on 2021/3/1.
//

#ifndef ALGORITHM_SORTTESTHELPER_H
#define ALGORITHM_SORTTESTHELPER_H

#include <iostream>
#include <string>
#include <ctime>
#include <algorithm>
#include <cassert>

using namespace std;

namespace SortTestHelper{

    int *generateRandomArray(int n,int rang_l,int rang_r){
        int *arr = new int [n];
        srand(time(NULL));

        for (int i=0;i<n;i++){
            arr[i] = rand() % (rang_r - rang_l + 1) + rang_l;
        }
        return arr;
    }

    int *generateNearlyOrderedArray(int n ,int swapTime){

        int *arr = new int [n];
        for (int i =0;i<n;i++){
            arr[i] = i;
        }

        srand(time(NULL));

        for (int i =0;i<swapTime;i++){

            int posX = rand() % n;
            int posY = rand() % n;

            swap(arr[posX],arr[posY]);
        }
        return arr;
    }

    int *copyIntArray(int arr[],int n){
        int *copyArr = new int[n];
        copy(arr,arr+n,copyArr);

        return copyArr;
    }

    template <typename T>
    void  printArray(T arr[],int n){

        for (int i = 0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    template<typename T>
    bool isSorted(T arr[],int n){

        for(int i=0;i < n-1;i++){
            if (arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;
    }

    // 测试sort排序算法排序arr数组所得到结果的正确性和算法运行时间
    template<typename T>
    void testSort(const string &sortName, void (*sort)(T[], int), T arr[], int n) {

        clock_t startTime = clock();
        sort(arr, n);
        clock_t endTime = clock();
        cout << sortName << " : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s"<<endl;

        assert(isSorted(arr, n));

        return;
    }
}
#endif //ALGORITHM_SORTTESTHELPER_H
