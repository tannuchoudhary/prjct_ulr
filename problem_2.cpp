#include<iostream>
using namespace std;
int main(){
int a[1000], i, sum_e=0;
a[0]= 1;
a[1]= 2;
cout<<a[0]<<" "<<a[1]<<" ";
for(i=0; i<40; i++){
//(a[i+2]%2 == 0)
  a[i+2] = a[i] + a[i+1];
  if(a[i+2]>40000000)
  break;
  cout<<a[i+2]<<"   ";
  if(a[i]%2==0 && a[i]<=4000000){
    sum_e += a[i];
  }

}
cout<<endl;
 cout<<sum_e;
  return 0;
}
