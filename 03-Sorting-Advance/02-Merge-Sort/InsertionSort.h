//
// Created by LinK on 2021/3/1.
//

#ifndef ALGORITHM_INSERTIONSORT_H
#define ALGORITHM_INSERTIONSORT_H

#include <iostream>
#include <algorithm>

template<class T>
void insertionSort(T arr[],int n){

    for (int i=1;i<n;i++){

//        for (int j=i;j>0;j--){
//            if (arr[j-1] > arr[j]) {
//                swap(arr[j - 1], arr[j]);
//            }else{
//                break;
//            }
//        }

        T e = arr[i];
        int j ;
        for(j = i;j>0 && arr[j-1] > e;j--){
                arr[j] = arr[j-1];
        }
        arr[j] = e;
    }
}
#endif //ALGORITHM_INSERTIONSORT_H
