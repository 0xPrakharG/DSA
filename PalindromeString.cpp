#include<bits/stdc++.h>
using namespace std;

int palindrome(string s){
  string newstring = "";
  int l = s.length()-1;
  if(s[l] != s[0]){
    cout << "No";
  }
  else{
    while(l >= 0){
      newstring += s[l];
      l--;
    }
    if(newstring == s){
      cout << "Yes";
    }
    else{
      cout << "No";
    }
  }
  cout << endl;
  return 0;
}

int main(){
  string s;
  cin >> s;
  palindrome(s);
}