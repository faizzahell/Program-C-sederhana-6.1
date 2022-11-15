#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

float A, B, C, diskriminan, X1, X2;

int diskriminanRumus() {
  diskriminan = (B * B) - (4 * A * C);
}

int resultsProgram() {
  if (diskriminan > 0) {
    X1 = (-B + sqrt(diskriminan)) / (2 * A);
    X2 = (-B - sqrt(diskriminan)) / (2 * A);

    cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
    cout << "       :     Hasil Program Persamaan Kuadrat    :        " << endl;
    cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

    cout << "  Nilai dari X1 adalah  :  " << X1 << endl;
    cout << "  Nilai dari X2 adalah  :  " << X2 << endl << endl;

  } else if (diskriminan == 0) {
    X1 = X2 = (-B + sqrt(diskriminan)) / (2 * A);

    cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
    cout << "       :     Hasil Program Persamaan Kuadrat    :        " << endl;
    cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

    cout << "  Nilai dari X1 dan X2 sama  :  " << X1 << endl << endl;
  } else {

    cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
    cout << "       :     Hasil Program Persamaan Kuadrat    :        " << endl;
    cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

    cout << "  Nilai dari X1 dan X2 bersifat imajiner" << endl << endl;
  }
}

int main() {
  cout << "=========================================================" << endl;
  cout << "---------------- Program Persamaan Kuadrat --------------" << endl;
  cout << "=========================================================" << endl << endl;

  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :      List Hasil Yang akan Dihitung     :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

  cout << "  1. Menghitung nilai dari X1" << endl;
  cout << "  2. Menghitung nilai dari X2" << endl << endl;

  cout << "  Dari Fungsi Kuadrat  :  Ax2 + Bx + C = 0" << endl << endl;

  cout << "=========================================================" << endl;
  cout << "----------- Masukkan Input Variable A, B, dan C ---------" << endl;
  cout << "=========================================================" << endl << endl;

  cout << "  Masukkan nilai dari A : "; cin >> A;
  cout << "  Masukkan nilai dari B : "; cin >> B;
  cout << "  Masukkan nilai dari C : "; cin >> C;
  cout << endl;

  diskriminanRumus();
  resultsProgram();

  cout << "=========================================================" << endl;
  cout << "-------------------- Program Selesai --------------------" << endl;
  cout << "=========================================================" << endl;

  return 0;
}
