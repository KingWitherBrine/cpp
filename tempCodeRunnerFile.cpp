#include <iostream>

using namespace std;

int main() {
  bool w, v;
  scanf("%d%d", &w, &v);
  bool var = !w or v;
  if (var == 1) {
    cout << "True" << endl;
  } else {
    cout << "False" << endl;
  }
  return 0;
}