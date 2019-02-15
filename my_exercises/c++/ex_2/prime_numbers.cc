#include <iostream>

int main () 
{   int n{100};
    int* primes{new int[n]};        // creates the array that will contain the prime numbers
    int k=0;
    for (int i{2}; i < n; ++i){      // scrolls the numbers from 2 to 100 
        for (int j{2}; j<i; j++)    // scrolls all the numbers before i
        {
            if (i % j == 0)         //checks if any of the numbers before i is a divisor
                break;              //if so, it interrupts the cycle
            else if(j+1 == i){      //if the cycle is not interrupted and the next number is equal to i 
                primes[k] = i;      // then that number is a prime number and it is saved in the array 
                k++;
            }
        }   
    }
    
    for (int i{0}; i < k; ++i) std::cout << primes[i] <<" ";
    delete[] primes;
    return 0;
}