#include <iostream>

using namespace std;

int main(){
    float x,y;
    bool res;

    cin >> x >> y;

    res = (0 <= x) & (x <= 10) & (0 <= y) & (y <= 10);

    cout << (1 && 1) << res << endl;

    return 0;
}