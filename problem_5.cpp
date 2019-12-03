#include<iostream>
using namespace std;
int main(){
  int suc=0, num=20;
  while(suc != 1){

    for(int i=1; i<=20; i++){
      if(num%i==0)
      suc=1;
      else {
      suc=0;
      num++;
      break;
     }
    }
  }
  cout<<num;
  return 0;
}
