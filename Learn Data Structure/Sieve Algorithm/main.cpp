#include <iostream>
#include <cstring>

using namespace std;

const int MAX_N = 100;

// Array to store the prime numbers
int primes[MAX_N];

// Array to store whether each number is prime
bool is_prime[MAX_N];

int main() {
    // Set all numbers to be prime initially
    memset(is_prime, true, sizeof(is_prime));
    // Set 0 and 1 to not be prime
    is_prime[0] = false;
    is_prime[1] = false;

    // Loop through the numbers from 2 to MAX_N
    int num_primes = 0;
    for (int i = 2; i <= MAX_N; i++) {
        // If the number is prime, add it to the list of prime numbers
        // and mark all of its multiples as non-prime
        if (is_prime[i]) {
            primes[num_primes] = i;
            num_primes++;
            for (int j = i * 2; j <= MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // Print the list of prime numbers
    for (int i = 0; i < num_primes; i++) {
        cout << primes[i] << " ";
    }
    cout << endl;

    return 0;
}