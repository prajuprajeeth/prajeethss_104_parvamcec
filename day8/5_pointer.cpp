#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int roll_num;
};
int main(){
    int a= 10;
    student s1;

    int *a1=new int;
    *a1= 20;
    cout<<"The value in a1:"<< *a1<<endl;

    delete a1;
    return 0;

}