#include<iostream>
using namespace std;
class Example{
    public:
    int a,b,c;

};
int main(){
    Example ex;
    cin>>ex.a>>ex.b;
    cout<<ex.a<<"   "<<ex.b<<endl;
    ex.c=ex.a+ex.b;
    cout<<"sum"<<ex.c;
    return 0;
}