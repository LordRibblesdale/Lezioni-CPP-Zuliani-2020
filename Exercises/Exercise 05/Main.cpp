#include <iostream>
#include <cmath>

namespace pog {
    int finoA;

    void initialiseArray(bool* array) {
       int size = finoA - 2;

       for (auto i = 0; i < size; i++) {
          array[i] = true;
       }
    }

    void setPrimes(bool* array) {
       double max = sqrt(finoA - 2);

       for (auto i = 2; i < max; i++) {
          if (array[i]) {
             for (int j = i*i; j < finoA - 2; j += i) {
                array[j] = false;
             }
          }
       }
    }

    void printPrimes(const bool* array) {
       for (auto i = 0; i < finoA - 2; i++) {
          if (array[i]) {
             std::cout << "Prime number: " << i << std::endl;
          }
       }
    }

    void numeriPrimi() {
       int num = 2;
       bool primes[finoA - num];

       initialiseArray(primes);
       setPrimes(primes);
       printPrimes(primes);
    }
}

int main() {
   std::cout << "Insert end value:";
   std::cin >> pog::finoA;

   pog::numeriPrimi();

   return 0;
}
