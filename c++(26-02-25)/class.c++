#include<iostream>
using namespace std;
class addition
{
    int a,b,c;
    public:
    void input()
    {   

        cout <<"enter value of a =";
        cin>>a;
        
        cout <<"enter value of b=";
        cin>>b;
        cout<<"a="<<a<<" "<<"b="<<b;
       
        cout<<endl;
    }
    void process()
    {   
        cout<<"formula for addtion is a+b"<<endl;
        c = a+b;
    }

    void display()
    {
        cout<<"sum="<<" "<<c;
    }
};
   
   int main()
   {
    addition o;
    o.input();
    o.process();
    o.display();

    return 0;
   }