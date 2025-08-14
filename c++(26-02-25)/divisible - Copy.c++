#include<iostream>
using namespace std;
int main(){
    // int num,i;
    
    // for(i=1000; i<5000; i++){
    //     if(i%13==0 && i%21==0 && i%27==0){
    //         cout<<i<<" ";
    //     }
    //    }
    //    cout<<endl;

    int num;
    cin>>num;
    int sum=0;
    for(int i=0;i<num;num=num/10){
        int rem =num%10;
        cout<<rem;
        cout<<endl;
        sum=sum+rem;
        
    }

    cout<<"sum ="<<sum<<endl;
    cout<<"thanku for your attention";
    
    return 0;
}