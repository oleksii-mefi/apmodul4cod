#include <iostream>
using namespace std;
bool doSegmentsIntersect(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    int det = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
    int det1 = (x1 - x3) * (y2 - y1) - (y1 - y3) * (x2 - x1);
    int det2 = (x1 - x4) * (y2 - y1) - (y1 - y4) * (x2 - x1);

    if (det == 0) {
        if (det1 == 0 && det2 == 0) {
            return true; 
        }
        return false; 
    }
    if (det1 * det2 >= 0) {
        return false; 
    }
    return true;
}
int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cout << "Введіть координати відрізка AB: ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Введіть координати відрізка CD: ";
    cin >> x3 >> y3 >> x4 >> y4;
    if (doSegmentsIntersect(x1, y1, x2, y2, x3, y3, x4, y4)) {
        cout << "Відрізки перетинаються" << endl;
    } else {
        cout << "Відрізки не перетинаються" << endl;
    }
    return 0;
}
