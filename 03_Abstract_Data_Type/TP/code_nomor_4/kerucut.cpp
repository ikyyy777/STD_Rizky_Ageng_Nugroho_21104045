#include "kerucut.h"

// Constructor
Kerucut::Kerucut(double r, double t) {
    jariJari = r;
    tinggi = t;
}

// Fungsi untuk menghitung volume kerucut
double Kerucut::hitungVolume() {
    return (1.0 / 3.0) * M_PI * jariJari * jariJari * tinggi;
}

// Fungsi untuk menghitung luas permukaan kerucut
double Kerucut::hitungLuasPermukaan() {
    double sisi = sqrt(jariJari * jariJari + tinggi * tinggi);
    return M_PI * jariJari * (jariJari + sisi);
}
