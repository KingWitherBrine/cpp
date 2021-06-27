#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("pails.in");
    ofstream fout("pails.out");
    int x, y, m;
    fin >> x >> y >> m;
    int max_n = 0;
    for (int i = 0; i < m+1; i++) {
        for (int j = 0; j < m+1; j++) {
            if (x*i + y*j <= m) {
                if (x*i + y*j > max_n) {
                    max_n = (x*i + y*j);
                }
            }
        }
    }
    fout << max_n << endl;
    return 0;
}