//
// Created by LinK on 2021/3/1.
//
#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "InsertionSort.h"
using namespace std;


void mergersort(int arr,int start,int end){

    if (length(arr) > 1){
        return;
    } else{
        int[] left,right = split(arr,start,end);
    }
    merge(left,right);


}
int main(){

    int totalInt = 10;
    int rangL = 1;
    int rangR = 100;
    int *arr1 = SortTestHelper::generateRandomArray(totalInt,rangL,rangR);
    SortTestHelper::printArray(arr1,totalInt);
//    SortTestHelper::testSort("Insertion Sort",insertionSort,arr1,totalInt);
    insertionSort(arr1,totalInt);
    SortTestHelper::printArray(arr1,totalInt);
}