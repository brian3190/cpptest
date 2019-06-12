#include <iostream>
#include <vector>

using namespace std;

void remDup(int arr[], int n)
{
  vector<int> v(arr, arr + n);
  vector<int>::iterator it;

  sort(v.begin(), v.end());

  it = unique(v.begin(), v.end());

  v.resize(distance(v.begin(), it));

  cout << "After removing duplicates:" << endl;
  for (it = v.begin(); it != v.end(); ++it){
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{
  int arr[] = { 1, 2, 5, 1, 7, 2, 4, 2 };

  int n = sizeof(arr) / sizeof(arr[0]);

  //Print array
  cout << "Before removing duplicates:" << endl;
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;

  //Remove duplicates
  remDup(arr, n);

  return 0;
}
