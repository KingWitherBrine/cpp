#include <iostream>

using namespace std;

int area(int x1, int y1, int x2, int y2) {
    return (x2 - x1) * (y2 - y1);
}

int intersect(int num1, int num2){
    int x1, y1, x2, y2 = num1;
    int x3, y3, x4, y4 = num2;
    int a1 = max(x1, x3);
    int b1 = max(y1, y3);
    int a2 = min(x2, x4); 
    int b2 = min(y2, y4);
    if(a2 < a1 or b2 < b1) {
        cout << 0 << endl;
    } else {
        area(a1, b1, a2, b2);
    }
    return 0 ;
}

int point_in_rectangle(int x, int y, int x1, int y1, int x2, int y2) {
    return (x2 > x > x1 and y2 > y > y1);
}

int main() {
    vector b1;
    cin << b1;
    vector b2;
    cin << b2;
    int x1, y1, x2, y2 = b1;
    int x3, y3, x4, y4 = b2;
    int area_b1 = area(x1, y1, x2, y2);
    int count = 0;
    if (point_in_rectangle(x1, y1, x3, y3, x4, y4)) {
        count += 1;
    }
    if (point_in_rectangle(x1, y2, x3, y3, x4, y4)) {
        count += 1;
    }
    if (point_in_rectangle(x2, y1, x3, y3, x4, y4)) {
        count += 1;
    }
    if (point_in_rectangle(x2, y2, x3, y3, x4, y4)) {
        count += 1;
    }
    if (count > 1) {
        cout << area_b1 - intersect(b1, b2) << endl;
    } else {
    cout << area_b1 << endl;
    }
    return 0;
}