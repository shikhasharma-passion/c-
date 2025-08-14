#include<iostream>
using namespace std ;
class Nested{
    int a,b,c;
    private:
    void input(int x,int y){
        a=x;
        b=y;
    }
    int process(){
        c=a+b;
        return c;
    }
    void print(){
        cout<<c;
    }
    public:
    void all(){
        int e,f;
        cin>>e>>f;
        input(e,f);
        process();
        print();
    }


};
    int main(){
        Nested m;
        m.all();
        return 0;
    }