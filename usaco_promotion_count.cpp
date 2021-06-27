#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream fin("promote.in");
    int b_b, b_a;
    fin >> b_b >> b_a;
    int s_b, s_a;
    fin >> s_b >> s_a;
    int g_b, g_a;
    fin >> g_b >> g_a;
    int p_b, p_a;
    fin >> p_b >> p_a;
    int plat_result = p_a - p_b;
    int gold_result = g_a - g_b + plat_result;
    int silv_result = s_a - s_b + gold_result;
    ofstream fout("promote.out");
    fout << silv_result << endl;
    fout << gold_result << endl;
    fout << plat_result << endl;
    return 0;
}