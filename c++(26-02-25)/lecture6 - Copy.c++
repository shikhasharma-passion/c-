//

    // int decToBinary(int decnum){
    //     int ans=0;
    //     int pow=1;
    //     while(decnum>0){
    //         int rem = decnum%2;
    //         decnum=decnum/2;
    //         ans=ans+(rem*pow);
    //         pow=pow*10;
    //     }
    //     return ans;
    // }

    // int main(){
    //     int decnum=50;
    //     for(int i=1;i<=10;i++){
    //         cout<<decToBinary(i)<<endl;
    //     }
    // return 0;
    // }










      #include<iostream>
      using namespace std;
      int decToBinary(int binNum){
        int ans=0,pow=1;
        // int binNum;
        while(binNum>0){
            int rem=binNum%2;
            binNum=binNum/2;
            ans+=(rem*pow);
            pow*=10;
        

        }
        return ans;
        

    }
      int main(){
        int binNum;
        
        for(int i=1;i<=10;i++){
            cout<<decToBinary(i)<<endl;}
      return 0;
      }

                
       
