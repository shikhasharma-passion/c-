#include<iostream>
using namespace std;
class Addargu{
    int a,b,c;
    public:
    void input(int x,int y){
        a=x;
        b=y;
    }
    int process(){
        
        c=a+b;
        return c;
    }
    

};
     int main(){
        Addargu ar;
        int m,n,p;
        cin>>m>>n;
        ar.input(m,n);
        p=ar.process();
        cout<<p;
        return 0;

     }