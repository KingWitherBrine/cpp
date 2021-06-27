#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("diamond.in");
    ofstream fout("diamond.out");
    int n, k;
    fin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
        int temp;
        fin >> temp;
        nums.push_back (temp);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        int temp_count = 0;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (nums[j]-nums[i]) {
                    temp_count += 1;
                }
            }
        }
        count = max(count, temp_count);
    }
    fout << count << endl;
}