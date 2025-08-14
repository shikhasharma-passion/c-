#include<iostream>
using namespace std;
class p
{
    public:
    int a ,b ;
    public:
    void input()
    {
        cin>>a;
    }
    void process()
    {
        b=a;
    }
    void display()
    {
        cout<<"b="<<b;
    }
};
    int main()
        {
        p a;
        a.input();
        a.process();
        a.display();
        return 0;
        }