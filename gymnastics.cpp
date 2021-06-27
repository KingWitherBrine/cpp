#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream fin("gymnastics.in");
    ofstream fout("gymnastics.out");
    int k, n;
    fin >> k >> n;
    vector<vector<int> > nums(k, vector<int>(n));;
    for (int i = 0; i < k; i++) {
        vector<int> temp_nums;
        for (int j = 0; j < n; j++) {
            fin >> nums[i][j];
        }
    }
    cout << nums << endl;
    return 0;
}