#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> numbers = {1, 2, 3, 4};

   for (int num : numbers) {
      cout << num << " ";
   }
   return 0;
}