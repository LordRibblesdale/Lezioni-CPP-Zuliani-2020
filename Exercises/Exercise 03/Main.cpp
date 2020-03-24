#include <iostream>
#include <ctime>

using namespace std;

void initializeArray(int*& array, int& size) {
   cout << "Insert array size:";
   cin >> size;

   srand(time(nullptr));

   array = new int[size];

   for (auto i = 0; i < size; i++) {
      array[i] = rand() % 30 +1;
   }
}

void printArray(int* array, int size) {
   for (auto i = 0; i < size; i++) {
      cout << "Element : " << i << " = " << array[i] << endl;
   }

   cout << endl;
}

void printEvenNums(int* array, int size) {
   for (auto i = 0; i < size; i++) {
      if ((array[i] % 2 == 0)) {
         cout << "Even found = " << array[i] << endl;
      }
   }
}


int main() {
   int* array;
   int size;

   initializeArray(array, size);
   printArray(array, size);
   printEvenNums(array, size);

   delete(array);
   return 0;
}
