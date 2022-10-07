#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  if (n==0 || n==1){
    cout << "Neither Prime Nor Composite. \n";
    return 0;
  }
  int i = 2;
  while (i<n){
    if(n%i==0){
      cout << "Not Prime. \n";
      return 0;
    }
    i++;
  }
  cout << "Prime Number. \n";
  return 0;
}