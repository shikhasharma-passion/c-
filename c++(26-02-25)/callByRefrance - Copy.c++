#include<iostream>
#include<climits>
using namespace std;
// void changeArr(int arr[],int size){
//     cout<<"in function\n";
//     for(int i=0; i<size; i++){
//         arr[i]=2*arr[i];
//     }
// }
// int main (){
//     int arr[]={1,2,3};
//     changeArr(arr,3);
//     cout<<"in main\n";
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<"";
//     }
//     cout<<endl;








         void changearr(int arr[],int size){
            cout<<"in function\n";
            for(int i=0;i<size;i++){
                arr[i]=2*arr[i];
            }
         }
         int main(){
            int size=5;
            int arr[]={4,8,9,8,6};
            changearr(arr,5);
            cout<<"in main\n";
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
                }
            cout<<endl;
            return 0;}
