#include<iostream>
using namespace std;
class SI{
    int p,r,t,si;
    public:
    void input(int a,int b,int c){
        p=a;
        r=b;
        t=c;
 }  
    void process(){
        si=p*r*t/100;

    }
    void display(){
        cout<<si;
    }
};
     int main(){
        SI s;
        s.input(7000,3,10);
        s.process();
        s.display();
        return 0;
     }