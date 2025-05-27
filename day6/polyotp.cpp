#include <iostream>
using namespace std;

class message
{
public
    void sendmessage(string email,string message)
    {
        cout<<"Email sent successfully"<<endl;
        cout<<"email:"<<email<<endl;
        cout<<"message:"<<message<<endl;
    }
    void sendmessage(long long ph, int otp)
    {
        cout<<"OTP sent successfully"<<endl;
        cout<<"phone number:"<<ph<<endl;
        cout<<"OTP:"<<otp<<endl;
    }
};
int main()
{
    message m;
    m.sendmessage("prajeethss104@gmail.com","Hello");
    m.sendmessage(919876543210,123456);
    return 0;
}
