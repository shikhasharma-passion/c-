#include<iostream>
#include<limits.h>
using namespace std ;
int main(){

    // int num[4]={22,44,55,-33};
    // // int size=4;
    // int smallest = INT_MAX;
    // int largest = INT_MIN;

    // for(int i=0;i<4;i++){
    //     smallest=min(num[i],smallest);
    //     largest=max(num[i],largest);

    // }

    // cout<<"smallest="<<smallest<<endl;
    
    // cout<<"largest="<<largest<<endl;
    
    int n=4;
    for(int i =0;i<n;i++){
        //spaces
        for(int j =0; j<(n-i-1); j++){
            cout<<"  ";
            }
            cout<<"*";
            if(i!=0){
               for(int j=0; j<(2*i)-1; j++){
                
                    cout<<"  ";
                }
                cout<<"*";
            }
            cout<<endl;
        }
    return 0;

    }
