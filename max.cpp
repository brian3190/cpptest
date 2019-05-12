#include <iostream>
#include <cstdio>
using namespace std;

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
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
