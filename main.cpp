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

// #include <iostream>

// using namespace std;

// int main() {
//     int k; //, i = 0;
//     while(1) {
//         int v, ans = 0;
//         char c;
//         while(scanf("%d%c", &v, &c) != EOF) {
//             ans += v;
//             if (c == '\n') {
//                 break;
//             }
//         }
//         if (feof(stdin)) {
//             break;
//         }
//         printf("%d\n", ans);
//     }
//     // int n;
//     // scanf("%d", &n);
//     // for (int i = 0;i < n;i++) {
//     //     int n1, n2;
//     //     scanf("%d %d", &n1, &n2);
//     //     printf("%d\n", n1 + n2);
//     // }
//     // while(n--) {
//         // int n1, n2;
//     //     scanf("%d %d", &n1, &n2);
//     //     printf("%d\n", n1 + n2);
//     // }
//     // int n;
//     // while(scanf("%d", &n)) {
//     //     printf("The number is: %d\n", n);
//     // }
// }