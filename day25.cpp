#include<iostream>
#include<vector>
using namespace std;

int main () {
      vector<int> digits = {10, 20, 30, 40, 50};

 
   for (int& num : digits) {
      num *= 2; // Double each number
   }

   for (int num : digits) {
      cout << num << " ";
   }
   cout << endl;
    return 0;
 }