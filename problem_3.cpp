#include<iostream>
using namespace std;
int main(){
  long long int n, i;
  int a[10000], k=0;
  cin>>n;
  while(n%2==0){
    cout<<"2"<<" ";
    n=n/2;
  }
  for(int i=3; i<n; i++){
    while(n%i == 0){
      cout<<i<<" ";
      n = n/i;
    }
  }
  if(n>2){
    cout<<n;
  }
  
  
/*  for(i=2; i<=n; i++){
  if(n%i == 0){
    a[k] = i;
    n = n/i;
    k++;
  }
 }
 for(int j=0; j<k; j++){
   cout<<a[j]<<" ";
 }
 if(n!=1)
 cout<<n;*/
 
 
 return 0;
}
