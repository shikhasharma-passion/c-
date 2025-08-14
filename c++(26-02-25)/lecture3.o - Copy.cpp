#include<iostream>
using namespace std;
   int main(){
//     int i = 1;
//     int n = 10;
//     do{
//         cout<<i<<" ";
//         i++;
//     }
//     while(i<=n);
//     cout<<i<<endl;
  int i;
  int n=8;
  bool isPrime = true;
  for(i=2;i<=n-1;i++){
    if(n%i==0){
      isPrime = false;
      break;
    }

  }
  if(isPrime==true){
    cout<<"prime";}
  else{
      cout<<"non prime";
  }  
   return 0;
  }