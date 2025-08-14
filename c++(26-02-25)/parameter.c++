#include<iostream>
using namespace std ;
class para
{
    int a ,b,add;
    public:
    void input(int m,int n)
    {
        a=m;
        b=n;
    }
    void process()
    {
       add=a+b;
    }
    void display()
    {
        cout<<add;
    }
};

   int main()
   {
     para obj;
     int k,p;
     cin>>k;
     cin>>p;
     obj.input(k,p);
     obj.process();
     obj.display();
     return 0;
   }