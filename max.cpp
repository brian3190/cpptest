#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

// Beginner implementation
int max_of_four(int a, int b, int c, int d){
    int x = a;
    for (int i=0; i<4; i++){
      if (b > x){
        x = b;
      } else if (c > x){
        x = c;
      } else if (d > x){
        x = d;
      }
    }
    return x;
}

int main() {
    int a, b, c, d;
    cout << "Please key in 4 numbers:\n";
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    cout << "\n";

    vector<int> vec = { 2, 3, 4, 5, 3000};

    cout << *max_element(vec.begin(), vec.end());

    return 0;
}
