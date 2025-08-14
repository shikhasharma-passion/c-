#include<iostream>
using namespace std;
int main (){
    // int n=4;
    // for(int i=0;i<=n-1;i++){
    //     for(int j=0;j<=n-1;j++){
    //    cout<<"* ";
    //    }
    //    cout<<endl;
    // }


    // int n=4;
    
    // for(int i=0;i<n;i++){
    //     char ch='A';
    //     for(int j =0;j<n;j++){
    //         cout<<ch;
    //         ch =ch+1;
    //     }
    //     cout<<endl;
    // }

    // int i,j;
    // int n=4;
    // // char ch='A';
    // for(i=n; i>0;i--){
    //     for(j=i+1;j>0;j--){
    //         // char ch='A';
    //         // cout<<ch<<" ";
    //         // ch=ch+1;}
    //         cout<<i;}
    //       cout<<endl;}
    //    return 0;

    // int n = 1;
    // int i ,j;
    // for(i=0;i<n;i++){
    //     for(j=0;j<i;j++){
    //         cout<<n;
    //         n++;
    //         }
    //     cout<<endl;
    // }

    
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int count = 1;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << 'x' << ' ';
            ++count;
        }
        cout << endl;
    }

    return 0;
}



   
    