#include <iostream>

using namespace std;

int main () {

  int n;
  cin >> n;

  //this is define that a integer pointer create in stack memory which took memory size 8 bit, which is point the base address of arr that stored in heap memory.
  int* arr = new int[n];

  for (int i=0;i<n;i++) {
    cin >> arr[i];
  }
  
  return 0;
}
