#include <iostream>
using namespace std;

int main()
{
    double arr[5];
    cout << "enter the value of array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the " << i + 1 << "Element:" << endl;
        cin >> arr[i];
    }
    cout << "Array elements are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << "Element:" << arr[i] << endl;
    }
    return 0;
    
    
}