#include<iostream>
using namespace std;
class example{
      int a,b;
      public:
      void read()
      {
        a=90;
        b=70;
      }
      friend void display(example obj5);
    };
    void display(example obj2){
        cout<<obj2.a<<obj2.b;

    }
    int main(){
        example obj1;
        obj1.read();
        display (obj1);
        return 0;
    }
