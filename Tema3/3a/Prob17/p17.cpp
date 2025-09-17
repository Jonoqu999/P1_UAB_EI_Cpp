#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    int mil = num/1000;
    mil = mil%10;

    cout << "Les unitats de miler del nombre " << num << " son " << mil << endl;

    return 0;
}