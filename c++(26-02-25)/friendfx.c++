#include<iostream>
using namespace std;
class friendfx
{
    int a,b,sum;
    public:
    void input()
    {
        cin>>a>>b;
    }
    void process()
    {
        sum=a+b;
    }
    // void display()
    // {
    //     cout<<"sum"<<sum;
    // }
    friend void display (friendfx ab);
};
    void display (friendfx obj)
    {
        cout <<obj.sum;
    }
    
    int main()
    {
        friendfx obj1;
        obj1.input();
        obj1.process();
        display (obj1);
        return 0;

    }