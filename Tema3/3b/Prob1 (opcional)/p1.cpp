#include <iostream>

using namespace std;

int main() {
    int a = 0;
    string msg = "";
    
    cin >> a;
    msg = " El nombre " + to_string(a);
    
    if (0 > a || a > 10){
        msg = msg + " NO";
    }
    
    cout << msg << " esta en l'nterval" << endl;
    
    return 0;
}   