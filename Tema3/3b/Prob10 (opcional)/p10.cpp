#include <iostream>

using namespace std;

int main(){
    int anyNeix = 0;
    int anys = 0;
    cin >> anyNeix;

    anys = 2025 - anyNeix;

    cout << "Tens " << anys << " anys" << endl;

    if (16 <= anys && anys < 67){
        cout << "Estas en edat de treballar." << endl;
    }
}