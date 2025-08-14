#include<iostream>
using namespace std;
class hee
{
    int a,b,c;
    void input()
    {
        cin>>a>>b;

    }
    void process()
    {
        c= a+b;
    }
    void display()
    {
        cout<<c;
    }
    public:
    void all()
    {
        input();
        process();
        display();
    }
};
    
    int main()
    {
        hee obj;
        obj.all();
        return 0;
    }