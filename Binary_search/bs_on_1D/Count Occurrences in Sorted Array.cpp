#include <iostream>

using namespace std;

int binary(int arr[], int n, int x) {
  int s = 0;
  int e = n - 1;

  while (s <= e) {
    int m = (s + e) / 2;

    if (arr[m] == x) {
      return m;
    } else if (arr[m] < x) {
      s = m + 1;
    } else {
      e = m - 1;
    }
  }
  return -1;
}

int count(int arr[], int n, int x) {
  // code here
  // get the index of X in array
  int idx = binary(arr, n, x);

  // if X does not exist return 0;
  if (idx == -1) {
    return 0;
  }

  int k = 1;
  int left = idx - 1;

  // check left half for X
  while (left >= 0 && arr[left] == x) {
    k++;
    left--;
  }
  // check right half for X
  int right = idx + 1;
  while (right < n && arr[right] == x) {
    k++;
    right++;
  }

  return k;
}

int main() {
  int n = 7;
  int x = 3;
  int arr[] = {2,2,3,3,3,3,4};
    
  int ans = count(arr, n, x);
  cout <<x<<" occurs "<<ans<<" times in the array" << endl;
}
