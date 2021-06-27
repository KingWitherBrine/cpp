#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n1, n2, n3, n4, n5, n6, n7;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;
    // int n1 = 2, n2 = 2, n3 =  11, n4 =  4, n5 =  9, n6 = 7, n7 = 9;
    int nums[] = {n1, n2, n3, n4, n5, n6, n7};
    int max_num = 0;
    // find max num
    for (int i = 0; i < 7; i++){
        if (nums[i] > nums[max_num]){
            max_num = i;
        }
    }
    // find min num and change to 2 ** 31 01
    int a = 0;
    for (int i = 0; i < 7; i++){
        if (nums[i] < nums[a]){
            a = i;
        }
    }
    int b = 0;
    for (int i = 0; i < 7; i++){
        if (nums[i] < nums[b]){
            b = i;
        }
    }
    cout << nums[a] << " " << nums[b] << " " << nums[max_num] - nums[a] - nums[b] << endl;
    return 0;
} 