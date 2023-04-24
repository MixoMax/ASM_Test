//is even function using intel x86 assembly

#include <iostream>
#include <ctime>
using namespace std;


bool is_even(int n) {
    return n & 1 == 0;
}

bool is_even_asm(int n) {

}




int main() {
    int n = 7;

    double start = clock();

    if (is_even(n)) {
        cout << "n is even" << endl;
    } else {
        cout << "n is odd" << endl;
    }

    double end = clock();
    double time_ms = (end - start) / CLOCKS_PER_SEC * 1000;
    cout << "Time taken: " << time_ms << " ms" << endl;
}