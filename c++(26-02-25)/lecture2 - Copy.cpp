// #include<iostream>
// using namespace std;
// int main(){
    // cout<<"apna college\n";
    // cout<<"shikha"<<endl;
    // int a=5;
    // int age=34 ;
    // char grade = 'a';
    // cout<<grade<<endl;
    // float pi=3.14f;
    // bool isSafe=false;

    // cout<< isSafe<<endl;

   //implicit  
    // char grade='a';
    // int value=grade;
    // cout<<value<<endl;

    // eplicit
    // float a=44.66;
    // int b=a;
    // cout<<b<<endl;


//    input in c++ 
    // int age ,agee;
    // cout<<"enter the age=";
    // cin>>age;
    // cout<<"entered age is ="<<age<<endl;
    // cout<<"enter agee =";
    // cin>>agee;
    // cout<<"enter agee="<<agee<<endl;
//       return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"enter the age=";
//     cin>>age;
//     cout<<"you entered age="<<age<<endl;
    
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    // int a, b ;
    // cout<<"enter a=";
    // cin>>a;
    // cout<<"enter b=";
    // cin>>b;
    // int sum =a+b;
    // cout<<"sum\t"<<sum<<endl;
    // int diff=a-b;
    // cout<<"diff\t"<<diff<<endl;
    // int prod =a*b;
    // cout<<"prod\t"<<prod<<endl;
    // int div =a/b;
    // cout<<"diff\t"<<diff<<endl;
    // int mod =a%b;
    // cout<<"mod\t"<<mod<<endl;


//     int i = 1;
//     int n = 20;
//     int oddSum = 0;

//     while(i <= n) {
//         if(i % 2 != 0) {
//             oddSum += i;
//         }
//         i++;  // Increment should be inside the loop
//     }

//     cout << oddSum << endl;
//     return 0;
// }
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