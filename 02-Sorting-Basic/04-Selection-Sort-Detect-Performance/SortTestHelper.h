#include <iostream>
#include <ctime>
#include <cassert>
#include <string>
using namespace std;

namespace SortTestHelper{

    // 随机生成(rangeL,rangeR)之间的随机数
    int* generateRandomArray(int n,int rangeL,int rangeR){

        assert (rangeL < rangeR);

        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            arr[i] = rand() % (rangeR - rangeL + 1) + rangeL;
        }
        return arr;

    }

    // 打印数组
    template <typename T>
    void printArray(T arr[],int n){
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[n-i] << " ";
            /* code */
        }
        cout << endl;
    }
    // 判断数组是否有序 升序
    template <typename T>
    bool isSorted(T arr,int n){
        for (int i = 0; i < n - 1 ; i++)
        {
            /* code */
            if (arr[i] > arr[i+1])
                return false;
        }

        return true;
    }

    // 测试算法的正确性和时间性能
    template <typename T>
    void testSort(const string &sortName,void(*sort)(T[],int),T arr[],int n){
        clock_t StartTime = clock();
        sort(arr,n);
        clock_t endTime = clock();

        assert(isSorted(arr,n));

        cout << sortName << ": " << double(endTime - StartTime) / CLOCKS_PER_SEC << " s" << endl;

    }
}
