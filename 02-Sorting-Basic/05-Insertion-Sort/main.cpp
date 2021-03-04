#include <iostream>
#include "SortTestHelper.h"
#include "SelectionSort.h"

using namespace std;

template <typename T>
void insertionSort(T arr[],int n ){
    
    for (int i = 0; i < n; i++)
    {
            // for( int j = i ; j > 0 ; j-- )
            //     if( arr[j] < arr[j-1] )
            //         swap( arr[j] , arr[j-1] );
            //     else
            //         break;

            for (int j = i;j>0 & arr[j] < arr[j-1];j--){
                swap(arr[j],arr[j-1]);
            }
    }
    

}
int main(int argc, char const *argv[])
{   
    int n = 20000;
    int *arr1 = SortTestHelper::generateRandomArray(n,0,n);
    int *arr2 = SortTestHelper::copyIntArray(arr1,n);
    
    SortTestHelper::testSort("InsertSort",selectionSort,arr2,n);
    SortTestHelper::testSort("SelectSort",selectionSort,arr1,n);

    delete arr2;
    delete arr1;
    
    return 0;
}
