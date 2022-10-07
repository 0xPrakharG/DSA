#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[],int n){
  int count = 0;
  bool isDistinct = true;
  for(int i = 0; i < n; i++){
    isDistinct = true;
    for (int j = i-1; j >= 0; j--){
      if(arr[j] == arr[i]){
        isDistinct = false;
        break;
      }
    }
    if (isDistinct == true){
      count++;
    }
  }
  return count;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << countDistinct(arr,n) << endl;
}