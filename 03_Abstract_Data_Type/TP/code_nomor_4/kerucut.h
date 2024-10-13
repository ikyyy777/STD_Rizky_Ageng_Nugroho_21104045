#ifndef KERUCUT_H
#define KERUCUT_H

#include <cmath>

class Kerucut {
private:
    double jariJari;   // Jari-jari kerucut
    double tinggi;     // Tinggi kerucut

public:
    // Constructor
    Kerucut(double r, double t);

    // Fungsi untuk menghitung volume kerucut
    double hitungVolume();

    // Fungsi untuk menghitung luas permukaan kerucut
    double hitungLuasPermukaan();
};

#endif // KERUCUT_H
