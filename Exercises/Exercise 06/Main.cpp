#include <iostream>
#include <ctime>

using namespace std;

void initializeArray(int*& array, int& size) {
   cout << "Insert array size:";
   cin >> size;

   array = new int[size];

   for (auto i = 0; i < size; i++) {
      array[i] = i;
   }
}

void printEvenNums(const int* array, int size) {
   int count = 0;

   for (auto i = 0; i < size; i++) {
      if ((array[i] % 2 == 0)) {
         count++;
      }
   }

   cout << "Number of even numbers: " << count << endl << endl;
}

void printArray(int* array, int size) {
   cout << "Elements: ";
   for (auto i = 0; i < size; i++) {
      if (i != 0) {
         cout << ", ";
      }
      cout << array[i];
   }

   cout << ";" << endl;

   printEvenNums(array, size);
}

void setDimension(int*& array, int& size, int dim) {
   delete(array);
   array = new int[dim];

   for (auto i = 0; i < dim; i++) {
      if (i < size) {
         array[i] = i;
      } else {
         array[i] = i+1;
      }
   }

   size = dim;
}

int askDimension() {
   int dim = 0;

   cout << "Insert new array size:";
   cin >> dim;

   return dim;
}

int main() {
   int* array;
   int size;

   initializeArray(array, size);
   printArray(array, size);

   setDimension(array, size, askDimension());
   printArray(array, size);

   delete(array);
   return 0;
}
