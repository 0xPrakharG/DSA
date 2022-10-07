#include <bits/stdc++.h>
using namespace std;

int sumOfElements(int arr[], int n){
  int sum = 0;
  for (int i = 0; i < n; i++){
    sum+=arr[i];
  }
  return sum;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << sumOfElements(arr,n) << endl;
}