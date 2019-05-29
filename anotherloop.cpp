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

   // For each in array
   int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   for (auto x : v)  // for each x in v
      cout << x << '\n';
   for (auto x : {3, 5, 7, 9, 11, 13})
      cout << x << '\n';

   // Increment function
   void increment() {
     int m[] = {0, 2, 4, 6, 8, 10};
     for (auto& x : m)  //reference to each m, increment by 1
       ++x;
   }


}
