#include <iostream>

using namespace std;

void swap(int*& a, int *& b) {
   int* tmp = a;
   a = b;
   b = tmp;
}

void print(int*& a, int *& b) {
   cout << "First: " << *a << endl;
   cout << "Second: " << *b << endl;
}

int main() {
   int v = 11037;
   int n = 5555;
   int* pv = &v;
   int* pn = &n;

   print(pv, pn);

   swap(pv, pn);

   print(pv, pn);

   return 0;
}