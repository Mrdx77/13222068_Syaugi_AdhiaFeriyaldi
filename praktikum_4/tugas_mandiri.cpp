#include <iostream>
#include <vector>
#include <fstream>

int main() {

    // 1. Inisialisasi Struktur Data
    std::vector<double> sensor;

    // 2. Pengisian Data Awal
    sensor.push_back(100.5);
    sensor.push_back(200.0);
    sensor.push_back(150.5);

    // 3. Proses Kalibrasi
    for (int i = 0; i < sensor.size(); i++) {
        sensor[i] = sensor[i] * 1.1;
    }

    // 4. Penyimpanan ke File Eksternal
    std::ofstream fileOutput("hasil_kalibrasi.txt");

    if (fileOutput.is_open()) {

        // 5. Menulis Hasil ke File
        for (int i = 0; i < sensor.size(); i++) {
            fileOutput << sensor[i] << std::endl;
        }

        fileOutput.close();
        std::cout << "Kalibrasi selesai! Buka file 'hasil_kalibrasi.txt' untuk melihat hasilnya.\n";

    } else {
        std::cout << "Gagal membuka file untuk menulis.\n";
    }

    return 0;
}