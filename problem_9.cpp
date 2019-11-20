#include<iostream>
using namespace std;
int main(){
  long int a, b, c, i, j, k;
  for(i=1; i<=998; i++){
    for(j=1; j<=998; j++){
      for(k=1; k<=998; k++){
        if((i+j+k) ==1000){
          if(i<j && j<k){
            if((i*i) + (j*j) == (k*k)){
              cout<<i<<" "<<j<<" "<<k<<" "<<endl;
                cout<<i*j*k;
            }
          }
        }
      }
    }
  }

  return 0;
}
