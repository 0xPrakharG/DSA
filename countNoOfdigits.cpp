#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,count=0;
  cin>>n;
  while(n>10){
    n=n/10;
    count+=1;
  }
  count+=1;
  cout << count << endl;
  return 0;
}