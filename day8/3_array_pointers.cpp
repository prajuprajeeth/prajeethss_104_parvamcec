#include <iostream>
using namespace std;

int main()
{
    int arr[3] ={10,20,30};
    cout<<"print arr:"<<arr<<endl;
    cout<<"Address of 1 element:"<<&arr[0]<<endl;
    cout<<"value:"<<*(arr+1)<<endl;

    int *ptr = arr;
    cout<<"value using pointer:"<< *(ptr +2)<<endl;
    cout<<"Before:"<< arr[1]<<endl;
    *(arr + 1) = *(arr + 1) * 2;
    cout<<"After:"<< arr[1]<<endl;

    ptr =&arr[1];
    ptr =arr;
    cout<<"value:"<< *ptr << endl;
    cout<<"first element:"<< arr[0] << endl;
    cout<<"first element:"<< *(arr + 0) << endl;
    cout<<"first element:"<< *(ptr + 0) << endl; 
    cout<<"first element:"<< ptr[0] << endl;
    cout<<"first element:"<< 0 [ptr] << endl;
    cout<<"first element:"<< 0 [arr] << endl;

    return 0;
}



















