#include <iostream>
#include <algorithm>
#include "Student.h"
using namespace std;

template <typename T>
void selectionSort(T arr[],int n){

    for (int i = n ; i > 0 ; i--){
        
        
        int minIndex = i;
        for (int j = 0;j < i; j++){
            if (arr[minIndex] < arr[j])
                minIndex = j;
        }

        swap(arr[minIndex],arr[i]);
        
    }

}

int main(int argc, char const *argv[])
{
    /* code */

    // int a[10] = {1,2,3,4,5,6,10,9,8,7};
    // selectionSort(a,10);
    // for (int i = 0; i< 10;i++){
    //     cout << a[i] << " " ;
    // }

    // float f[7] = {1.0,2.4,0.7,9.8,2.6,3.0,7.8};
    // selectionSort(f,7);
    // for (int i = 0;i < 7;i ++){
    //     cout << f[i] << " ";

    // }
    // cout << endl;
    Student stus[5] = {{"D",90},{"E",60},{"A",30},{"D",30},{"Z",100}};
    selectionSort(stus,5);
    for (int i = 0; i < 5;i++){
        cout << stus[i].score << " ";

    }
    cout << endl;
    
    return 0;
}
