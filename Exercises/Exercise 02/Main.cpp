#include <iostream>
#include <ctime>

using namespace std;

void initializeArray(int* array, int size) {
   srand(time(nullptr));

   for (auto i = 0; i < size; i++) {
      array[i] = rand() % 30 +1;
   }
}

void printArray(int* array, int size) {
   for (auto i = 0; i < size; i++) {
      cout << "Element : " << i << " = " << array[i] << endl;
   }
}

void printMinMax(int* array, int size) {
   int min = 30;  //TODO è possibile più generico?
   int max = 0;

   for (auto i = 0; i < size; i++) {
      if (array[i] < min) {
         min = array[i];
      }

      if (array[i] > max) {
         max = array[i];
      }
   }

   cout << "Minimum = " << min << endl;
   cout << "Maximum = " << max << endl;
}


int main() {
   int size = 5;
   int array[size];

   initializeArray(array, size);
   printArray(array, size);
   printMinMax(array, size);

   return 0;
}
