#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nilai[4];
};

int main() {
    int mahasiswa[5][4];
    float rata2[5]{0};

    for (int i = 0; i < 5; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        for (int j = 0; j < 4; j++) {
            cout << "Nilai " << j + 1 << " : ";
            cin >> mahasiswa[i][j];
            cout << endl;
            rata2[i] += mahasiswa[i][j];
        }
        cout << endl;
        rata2[i] = rata2[i]/4;
    }
    
    int maks = 0;
    int min = 101;
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (rata2[i] >= 75) {
            count++;
        }

        if (rata2[i] > maks) {
            maks = rata2[i];
        }

        if (rata2[i] < min) {
            min = rata2[i];
        }
    }
    cout << "Nilai Maks: " << maks << endl;
    cout << "Nilai Min: " << min << endl;
    cout << "Lewat KKM: " << count << endl;
    return 0;
}