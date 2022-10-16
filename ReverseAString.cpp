#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
  string newstring = "";
  int  l = s.length()-1;
  while(l>=0){
    newstring = newstring + s[l];
    l--;
  }
  return newstring;
}

int main(){
  string s;
  cin >> s;

  cout << reverse(s) << endl;
  return 0;
}