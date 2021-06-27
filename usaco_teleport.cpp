#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
    ifstream fin("teleport.in");
    int a, b, x, y;
    fin >> a >> b >> x >> y;
    int a_b [2] = {a, b};
    int x_y [2] = {x, y};
    int new_a_b [2] = {min(a, b), max(a, b)};
    int new_x_y [2] = {min(x, y), max(x, y)};
    a = new_a_b [0];
    b = new_a_b [1];
    x = new_x_y [0];
    y = new_x_y [1];
    ofstream fout("teleport.out");
    if (y < a || x > b|| b-a < abs(a-x) || b-a < abs(b-y)) {
        fout << b-a;
    } else {
        fout << abs(x-a) + abs(y-b); 
    }
    return 0;
}   