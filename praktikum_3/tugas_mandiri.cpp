#include <iostream>

class RekeningBank {
private:
    double saldo;

public:
    RekeningBank(double saldo_awal) {
        saldo = saldo_awal;
    }

    void setor(double jumlah) {
        saldo += jumlah;
        std::cout << "Setor berhasil" << std::endl;
        std::cout << "Saldo sekarang: " << saldo << std::endl;
    }

    void tarik(double jumlah) {
        if (jumlah > saldo) {
            std::cout << "Penarikan Gagal" << std::endl;
        } else {
            saldo -= jumlah;
            std::cout << "Penarikan berhasil" << std::endl;
            std::cout << "Sisa saldo: " << saldo << std::endl;
        }
    }
};

int main() {
    RekeningBank rekening1(1000.0);

    rekening1.setor(500.0);     
    rekening1.tarik(300.0);     
    rekening1.tarik(1500.0);    

    return 0;
}