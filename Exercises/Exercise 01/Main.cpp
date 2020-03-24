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


int main() {
    int size = 5;
    int array[size];

    initializeArray(array, size);
    printArray(array, size);

    return 0;
}
