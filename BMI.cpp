#include <iostream>
using namespace std;

float bb, tb;   

float BMI(float bb, float tb) {
    return bb / (tb * tb);
}

int main() {
    cout << "-- Selamat Datang Mahasiswa Kelas C 2025 --" << endl;
    cout << "Masukan Berat Badan (kg) : ";
    cin >> bb;
    cout << "Masukan Tinggi Badan (m) : ";
    cin >> tb;

}
