#include <iostream>
using namespace std;

bool is_symmetric(long arr[101][101], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j] != arr[n-i-1][n-j-1]) {
        return false;
      }
    }
  }

  return true;
}

int main()
{
  int t, n;
  char jack1;
  long arr[101][101];

  cin >> t;

  for (int  z= 1; z <= t; z++) {
    cin >> jack1 >> jack1 >> n;

    bool jack = true;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> arr[i][j];
        if (arr[i][j] < 0) {
          jack = false;
        }
      }
    }

    cout << "Test #" <<z << ": ";

    if (jack && is_symmetric(arr, n)) {
      cout << "Symmetric." << endl;
    } else {
      cout << "Non-symmetric." << endl;
    }
  }

  return 0;
}
