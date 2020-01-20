#include<iostream>
using namespace std;
int main(){
//  cout<<"tannu";
  long long int blue = 15;
  long long int num=21;
  long long int target=1000000000000;
  while(num<target){//using the solution of diophantine equation
    long long int b= 3*blue + 2*num -2;
    long long int n= 4*blue + 3*num -3;

    blue = b;
    num = n;
  }

  cout<<blue;
  return 0;
}
