#include<iostream>
using namespace std;
class allthree
{
    int a,b,add;
    // public:
    void input(int m,int n)
    {
     a=m;
     b=n;   
    }
    int process()
    {
        add=a+b;
        return add;
    }
    void print()
    {
      cout<<process();
    }
    public :
    void all(int m , int n)
    {
        input(m,n);
        process();
        print();
    }

};
     int main()
     {
        allthree obj;
        int k,l,sum;
        cin>>k>>l;
        obj.all(k,l);
        return 0;


     }