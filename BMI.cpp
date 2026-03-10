#include <iostream>
using namespace std;

float bb, tb;   

float BMI(float bb, float tb) {
    return bb / (tb * tb);
}



int main() {
    cout << endl;
    cout << "--- Selamat Datang Mahasiswa Kelas C 2025 ---" << endl;
    cout << "Masukan Berat Badan (kg) : ";
    cin >> bb;
    cout << "Masukan Tinggi Badan (m) : ";
    cin >> tb;

    cout << endl;
    cout << "--- HASIL ---" << endl;
    cout << "BMI anda : " << BMI(bb, tb) << endl;
        if (BMI(bb, tb) < 18.5) {
            cout << "Status : Berat Badan Kurang" << endl;
        } else if (BMI(bb, tb) < 25) {
            cout << "Status : Berat Badan Normal" << endl;
        } else if (BMI(bb, tb) < 30) {
            cout << "Status : Berat Badan Berlebih" << endl;
        } else {
            cout << "Status : Obesitas" << endl;
        }
}