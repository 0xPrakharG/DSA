#include <bits/stdc++.h>
using namespace std;

// int main(){
//   int n,i,j;
//   cin >> n;
//   for (i = 1; i <= n; i++){
//     for(j = 1; j <= n-i; j++){
//       cout << " ";
//     }
//     for (int k = j; k <= n; k++){
//       cout << "*";
//     }
//     cout << endl;
//   }
//   return 0;
// }

int main(){
  int i = 1;
  int n;
  cin >> n;
  while(i<=n){
    int j = 1;
    while (j<=n-i){
      cout << " ";
      j++;
    }
    while (j<=n){
      cout << "*";
      j++;
    }
    cout << "\n";
    i++;
  }
  return 0;
}