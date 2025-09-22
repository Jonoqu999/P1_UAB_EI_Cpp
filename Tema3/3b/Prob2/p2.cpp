#include <iostream>

using namespace std;

int main(){
    int hh,mm,ss = 0;
    string lmh,lmm,lms = "";
    char c;
    
    cin >> hh >> c >> mm >> c >> ss;

    ss++;

    if (ss >= 60){
        ss -= 60;
        mm++;
    }

    if (ss < 10){
            lms = "0";
        }

    if (mm >= 60){
        mm -= 60;
        hh++;
    }

    if (mm < 10){
            lmm = "0";
        }

    if (hh >= 24){
        hh -= 24;
    }

    if (hh < 10){
            lmh = "0";
        }

    cout << lmh << hh << ":" << lmm << mm << ":" << lms << ss << endl;

    return 0;
}