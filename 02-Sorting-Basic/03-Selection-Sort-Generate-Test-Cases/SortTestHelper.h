#include <iostream>
#include <ctime>
#include <cassert>

using namespace std;

namespace SortTestHelper{

    // 生成(rangL,rangR)之间的随机数
    int *generateRandomArray(int n,int rangL,int rangR){
        
        assert(rangL < rangR);
        int *arr = new int[n];
        srand(time(NULL));
        
        for (int i = 0; i < n; i++){
            arr[i] = rand() % (rangR - rangL + 1) + rangL;
        }

        return arr;
    }

    // 打印数组内容
    template<typename T>
    void printArray(T arr[],int n){

        for (int i = 0;i< n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;

    }

}