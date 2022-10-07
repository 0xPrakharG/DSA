#include <bits/stdc++.h>
using namespace std;

int findMax(int a,int b){
  if(a>b){
    return a;
  }
  return b;
}

int main(){
  int a,b;
  cin >> a;
  cin >> b;
  int start = findMax(a,b);
  int end = a*b;
  int ans = start;
  for (int i = start; i<=end; i++){
    if(i%a == 0 && i%b==0){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}