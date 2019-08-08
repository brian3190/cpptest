#include <string>
#include <vector>
#include <iostream>
using namespace std;

void calc_LIS(vector<int>& D){
    vector< vector<int> > L(D.size());
    L[0].push_back(D[0]);

    for(int i=1; i<D.size(); i++){
        for(int j=0; j<i; j++){
            if( (D[j] < D[i]) && (L[i].size() < L[j].size()) ){
                L[i] = L[j];
            }
        }
        L[i].push_back(D[i]);
    }

    for (auto x: L){
      cout << x << endl;
    }
}

int main(){
  int a[] = {3, 2, 6, 4, 5, 1};
  vector<int> arr(a, a + sizeof(a)/sizeof(a[10]));

  cout << "Data In:" << endl;

  calc_LIS(arr);

  return 0;
}
