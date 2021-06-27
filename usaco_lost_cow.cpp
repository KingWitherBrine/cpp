// The following code is written by Noah Chen
// Copyright Noah Chen 1/16/2020
// This document may be reproduced for educational purposes only

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ifstream fin("lostcow.in");
    ofstream fout("lostcow.out");
    int x, y; 
    fin >> x >> y;
    bool is_add = true;
    int count = 0;
    int i = 0;
    while (true) {
        if (is_add) {
            if (x <= y && y <= x + pow(2,i)) {
                count += y - x;
                fout << count << endl;  
                break;
            }
        } else {
            if (x - pow(2, i) <= y && y <= x) {
                count += x - y;
                fout << count << endl;
                break;
            }
        }
        count += pow(2, (i+1));
        is_add = !is_add;
        i += 1;
        }
    return 0;
}