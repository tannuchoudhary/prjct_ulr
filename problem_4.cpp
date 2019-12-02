#include<iostream>
using namespace std;
int palindrome(int);
int palindrome(int num){
  int a[10], i =0, suc;
  while(num!=0){
    a[i] = num%10;
    num = num/10;
    i++;
  }
  for(int k=0; k<i; k++){
    if(a[k] == a[(i-1)-k])
    suc = 1;
    else{
      suc = 0;
      break;
    }
  }
    return suc;
}
int main(){
  int i, j, k, suc, sol, max=0;
  for(i=100; i<999; i++){
    for(j=100; j<999; j++){
      sol = i*j;
      if(sol>max){
    suc =  palindrome(sol);
    if(suc==1){
        max=sol;
      }
    }
    }
  }
cout<<max;

  return 0;
}
