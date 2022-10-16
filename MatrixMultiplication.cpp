#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector< vector<int> > arr1(n, vector<int> (n,0));
  vector< vector<int> > arr2(n, vector<int> (n,0));
  vector< vector<int> > ans(n, vector<int> (n,0));

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> arr1[i][j];
    }
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> arr2[i][j];
    }
  }
  for (int i = 0; i < n; i++){
    for (int j = 0;  j < n; j++){
      ans[i][j] = 0;
      for (int k = 0; k < n; k++){
        ans[i][j] = ans[i][j] + (arr1[i][k] * arr2[k][j]);
      }
    }
  }
  cout << "Result: \n";
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}