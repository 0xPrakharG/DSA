#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector< vector<int> > arr(n, vector<int> (n, 0));
  vector< vector<int> > ans(n, vector<int> (n, 0));
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cin >> arr[i][j];
    }
  }
  cout << "Original matrix: \n";
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << "Transposed matrix: \n";
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      ans[i][j] = arr[j][i];
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}