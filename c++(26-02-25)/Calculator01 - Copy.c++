#include<iostream>
using namespace std;
class Calculator1{
    private:
    int a,b,c,add,sub;
    public:
    void input(){
        cin>>a>>b;
    }
    void addd(){
    //    int add;
       add=a+b;
    }
    void subb(){
        // int sub;
        sub= a-b;
    }
    void addDis(){
        cout<<add<<endl;
    }
    void subDis(){
        cout<<sub;
    }
    
};
    int main (){
        Calculator1 ss;
        ss.input();
        ss.addd();
        ss.subb();
        ss.addDis();
        ss.subDis();
        return 0;

    }




