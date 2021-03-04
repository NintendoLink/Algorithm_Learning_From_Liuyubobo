#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include<algorithm>

using namespace std;

void myPrint(int val){
    cout << val << endl;
}

int main(int argc, char const *argv[])
{
    map<string,int> myMap;
    myMap.insert(pair<string,int>("st",1));
    myMap["zhangsan"] = 15;

    // cout << "afdssa" << endl;
    // myMap.find("fasdf");
    map<string,int>::iterator it = myMap.begin();

    // cout << it->first << endl;   
    // cout << it->second << endl; 
    
    // for(auto &p : myMap){
    //     cout << p.first << p.second << endl;

    // }

    // for (auto &&p : myMap)
    // {
    //     cout << p.first << p.second << endl;
        
    // }
    map<string,int>::iterator iter = myMap.find("st");
    
    cout << iter->second;
    
    return 0 ;
}
