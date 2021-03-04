#include <iostream>
using namespace std;
#include "algorithm"
void selectionSort(int arr[],int n){
    
    for (int i = n-1 ; i >=0 ; i--){
        int minIndex = i;

        for (int j = 0 ; j < i - 1 ;j++){
            if (arr[j] > arr[minIndex])
                minIndex = j;
        }
        swap(arr[i],arr[minIndex]);

    }
}
// void swap(int &a,int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main(){
    int arr[] = {5,4,3,2,1};
    selectionSort(arr,5);
    for (int i = 0;i<5;i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;

}