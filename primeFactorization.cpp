#include <bits/stdc++.h>
using namespace std;

int isPrime(int n){
  for (int i = 2; i < n; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

int primeFactorization(int n){
  for (int i = 2; i<=n;i++){
    if(isPrime(i)){
      int x = i;
      while(n%x==0){
        cout << i << " ";
        x = x * i;
      }
    }
  }
  cout << "\n";
  return 0;
}

int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  primeFactorization(n);
  return 0;
}