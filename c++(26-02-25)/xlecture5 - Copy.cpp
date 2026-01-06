#include<iostream>
using namespace std;
int numIsPrime(int n){
    bool isPrime = true;
    bool isNotPrime = false;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<isNotPrime;
        }else{
            cout<<isPrime;
        } 
      }
      return isPrime;
    }
    int main(){
        cout <<numIsPrime(9)<<endl;

     // int num(){
     //    cout<<"hlo shikha\n";
     //    return 3;
     // }

     // int main(){
        
     //    cout<<num<<endl;
     
        return 0;
    }
