#include <iostream>

using namespace std;

int main(){
    int num = 0;
    cin >> num;

    if (num > 0){
        cout << "Positiu" << endl;
    } else if (num < 0) {
        cout << "Negatiu" << endl;
    } else {
        cout << "Zero" << endl;
    }
    
    return 0;
}