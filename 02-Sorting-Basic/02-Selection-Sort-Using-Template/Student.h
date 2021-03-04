#include <iostream>
using namespace std;
#include <string>
struct Student
{
    
    /* data */
    string name;
    int score;
    
    bool operator<(const Student& otherStudent){
        return score != otherStudent.score ?
               score > otherStudent.score : name < otherStudent.name;
    }

    friend ostream& operator<<(ostream &os, const Student &student){

        os<<"Student: "<<student.name<<" "<<student.score<<endl;
        return os;
    }
};
