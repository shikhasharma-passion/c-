#include<iostream>
using namespace std;
class addition
{
    int a,b, add;
    public:
    void input(int m , int n)
    {
        a=m;
        b=n;
    }
    int process()
    {
        add=a+b;
        return add;
    }
    // void display()
    // {
    //   cout<<"sum"<<add;
    // }

};
    int main()
        {
         int k,l,p;
         cin>>k>>l;
         addition obj;
         obj.input(k,l);
         p=obj.process();
         cout<<p;
         return 0;
        }
