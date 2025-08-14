#include<iostream>
using namespace std;
class prt
{
    int p,r,t,si;
    public:
    void input (int pri,int rat,int tim)
    {
        p=pri;
        r=rat;
        t=tim;
    }
    void process()
    {
        cout<<"formula for si = p*r*t/100"<<endl;
        si = p*r*t/100;
    }
    void display()
    {
       cout<<"simple intrest = "<<si;
    }
        

}; 

   int main()
   {
    prt obj;
    obj.input(5000,3,10);
    obj.process();
    obj.display();
    return 0;
   }
         
         