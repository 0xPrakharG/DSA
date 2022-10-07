#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int i=1;
  cin >> n;
  while(n >= 1){
    i *= n;
    n--;
  }
  cout << i << endl;
  return 0;
}