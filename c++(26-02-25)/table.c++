#include<iostream>
// #include<iomanip>
using namespace std;
int main (){
    int i;
    int num;
    cout<<"enter =  ";
    cin>>num;
    cout<<"table of"<<num<<":\n\n";
    for(i=1;i<=10;i++){
        cout<<num<<" * "<< i<<" = "<< i*num ;
        cout <<endl;
    }
    
    return 0;
}