#include<iostream>
using namespace std;
int main(){
    int arr[8] = {1, 2, 3, 4, 5,6,7,8};
    int *ptr = arr;
    int evenCount =0, oddCount =0;
    for(int i =0; i< 7; i++){
        if((arr[i]%2==0)){
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout<<"evenCount:"<<evenCount<<endl;
    cout<<"oddCount:"<<oddCount<<endl;
    return 0;
}
