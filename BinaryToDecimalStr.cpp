#include<bits/stdc++.h>
using namespace std;

void binaryToDecimal(string s){
  int base = 1;
  int ans = 0;
  int size = s.length()-1;

  for(int i = size; i >= 0; i--){
    ans = ans + ((int)(s[i]-'0')*base);
    base = base * 2;
  }
  cout << ans << endl;
}

int main(){
  string s;
  cin >> s;
  binaryToDecimal(s);
  return 0;
}