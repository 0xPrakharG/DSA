#include <bits/stdc++.h>
using namespace std;

int avgOfElements(int arr[], int n){
  int sum = 0;
  float avg;
  for (int i = 0; i < n; i++){
    sum+=arr[i];
  }
  avg = sum/n;
  return avg;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << avgOfElements(arr,n) << endl;
}