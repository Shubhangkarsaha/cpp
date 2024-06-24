#include <iostream>

using namespace std;

int getsum (int arr[], int n) {
  int sum = 0;
  for (int i=0; i<n; i++) {
    sum += arr[i];
  }

  return sum;
}

int main () {

  int n;
  cin >> n;

  //this is define that a integer pointer create in stack memory which took memory size 8 bit, which is point the base address of arr that stored in heap memory.
  int* arr = new int[n];

  for (int i=0;i<n;i++) {
    cin >> arr[i];
  }

  cout << "Answer: " << getsum(arr, n) << endl;
  
  return 0;
}
