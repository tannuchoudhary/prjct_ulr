#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  int ans;
  for(long long int i=1; i<INT_MAX; i++){
    std::string g = std::to_string(2*i);
    std::string t = std::to_string(3*i);
    std::string c = std::to_string(4*i);
    sort(g.begin(), g.end());
    sort(t.begin(), t.end());
    sort(c.begin(), c.end());

    if((g==t)&&(g==c)){
      ans=i;
      break;
    }
  }
  cout<<ans;
  return 0;
}
