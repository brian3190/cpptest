#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int a;
   int b;
   string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
   cin >> a >> b;

   if ((a<=9) && (b<=9)){
       for (int i=a; i<10; i++){
           cout << arr[i-1] << endl;
       }
   } else if (a<=9){
       for (int i=a; i<10; i++){
           cout << arr[i-1] << endl;
       }
       for (int i=a; i<(b+1); i++){
           if (i%2==0){
               cout << "even" << endl;
           } else {
               cout << "odd" << endl;
           }
       }
   } else if (a>9){
       for (int i=a; i<(b+1); i++){
           if (i%2==0){
               cout << "even" << endl;
           } else {
               cout << "odd" << endl;
           }
       }
   }
   return 0;
}
