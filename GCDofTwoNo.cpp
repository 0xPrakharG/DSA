#include <bits/stdc++.h>
using namespace std;

int findMin(int a,int b){
  if(a>b){
    return b;
  }
  else {
    return a;
  }
  return 0;
}

int main(){
  int a,b,ans=1;
  cin >> a;
  cin >> b;
  int min = findMin(a,b);
  for (int i = 1; i <= min; i++){
    if (a%i == 0 && b%i==0){
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
} 