#include <iostream>
#include <vector>

#define NOAH 2

using namespace std;

int main() {
    long n; 
    cin >> n;
    vector<unsigned long long> results;
    results.push_back (n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            if (n < 0) {
                n *= -1;
            }
            results.push_back (n);
        }
        else {
            n = n * 3;
            n = n + 1;
            if (n < 0) {
                n *= -1;
            }
            results.push_back (n);
        }
    }
    for (auto it = results.begin(); it != results.end(); ++it)
        cout << ' ' << *it;
    // cout << NOAH << endl;
    return 0;
}
