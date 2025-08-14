
#include<iostream>
#include <climits> // For INT_MAX
using namespace std ;
int main(){
    // int arr[6]={5,6,5,33,44};
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;;
    // cout<<arr[2]<<endl;;
    // cout<<arr[3]<<endl;;
    // cout<<arr[4]<<endl;;
    // cout<<arr[5]<<endl;;
    // cout<<arr[6]<<endl;;

    // int arr[]={56,7776,5554,6566,4545};
    // int size=5;
    // cout<<sizeof (arr)/sizeof (int);

    // int size =7;
    // int marks[size];
    // for(int i=0;i<size;i++){
    //     cin>>marks[i];
    //     // cout<<endl;
    // }
    // for(int i=0;i<size;i++){
    //     cout<<marks[i]<<" ";
    // }

    // int nums[]={87,99,80,56,66,34};
    // int size =6;
    // int smallest= INT_MAX;
    // int largest= INT_MIN;
    // for(int i=0;i<size ;i++){
    //     if(nums[i]<smallest){
    //         smallest = nums[i];
    //     }
    //     if(nums[i]>largest){
    //         largest = nums[i];
    //     }
    // }
    // cout<<"smallest="<<smallest <<endl;
    // cout<<"largest="<<largest <<endl;

    int size=6;
    int marks[]={33,22,55,44,6,77};
    int smallest =INT_MAX;
    
    // for (int i=0;i<size;i++){
    //     cin>>marks[i];}
    // for (int i=0;i<size;i++){
    //     cout <<marks[i]<<"";}
    //     cout <<endl;

    int smallestIndex ;
    for(int i=0; i<size; i++){
        if(marks [i] < smallest) {
        smallest = marks[i];
        smallestIndex = i;
        }}
        cout <<smallestIndex;
        

    return 0;

    }



  

