#include<iostream>
using namespace std;
    class sum
    {
    public: 
        int add(int a,int b)
        {
            return a+b;
        }
         int add(int a,int b,int c){
             return a+b+c;
    }
};
int main(){
    sum s;
    cout<<s.add(10,20)<<endl;
    cout<<s.add(10,20,30)<<endl;
    return 0;
}


    
