#include<iostream>
using namespace std;
class Calculator{
    private:
    int a,b,c;
    private:
    void input()
    {
        cin>>a>>b;
    }
    void process(){
        c=a+b;
    }
    void display(){
        cout<<c;
    }
    public:
    void all(){
        input();
        process();
        display();
    }
};
    int main(){
        Calculator m;
        m.all();
    return 0;


}