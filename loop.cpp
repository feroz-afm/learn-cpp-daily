#include <iostream>
#include <list>

int main() {
   using namespace std;

   list<int> numbers = {10, 20, 30, 40, 50};

   for (int num : numbers) {
    num = num*2;
      cout << num << " ";
   }
   cout << endl;

   return 0;
}