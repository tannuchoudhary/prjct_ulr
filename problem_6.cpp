#include<iostream>
using namespace std;
int main(){
  int sum_sqr = 0, sqr, sqr_sum, total=0, ans;
  for(int i=1; i<=100; i++){
    total = total + i;
    sqr = i*i;
    sum_sqr = sum_sqr+sqr;
  }
  sqr_sum = total*total;
  ans = sqr_sum-sum_sqr;
  cout<<ans;
  return 0;
}
