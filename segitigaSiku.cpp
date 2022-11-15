#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

float alas, tinggi, Beta, Alfa, sisiMiring, luas, radianAlfa, radianBeta;
float phi = 3.14;

int sisiMiringSegitiga() {
  sisiMiring = sqrt((pow(alas, 2)) + ((pow(tinggi, 2))));
}

int luasSegitiga() {
  luas = alas * tinggi / 2;
}

int besarSudutAlfa() {
  radianAlfa = asin(tinggi / sisiMiring);
  Alfa = (radianAlfa / phi) * 180;
}

int besarSudutBeta() {
  radianBeta = asin(alas / sisiMiring);
  Beta = (radianBeta / phi) * 180;
}

int main() {
  cout << "=========================================================" << endl;
  cout << "---------- Program Menghitung Segitiga Siku-Siku --------" << endl;
  cout << "=========================================================" << endl << endl;

  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :      List Hasil Yang akan Dihitung     :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

  cout << "  1. Sisi miring segitiga" << endl;
  cout << "  2. Besar sudut alfa segitiga" << endl;
  cout << "  3. Besar sudut beta segitiga" << endl;
  cout << "  4. Luas segitiga" << endl << endl;

  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :  Ilustrasi Kondisi Segitiga Siku-Siku  :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

  cout << "                  |\\        " << endl;
  cout << "                  |B\\        " << endl;
  cout << "                  |  \\        " << endl;
  cout << "                  |   \\        " << endl;
  cout << "                y |    \\ r      " << endl;
  cout << "                  |     \\        " << endl;
  cout << "                  |      \\        " << endl;
  cout << "                  |     A \\        " << endl;
  cout << "                  |________\\        " << endl;
  cout << "                      X              " << endl << endl;

  cout << "=========================================================" << endl;
  cout << "--------- Masukkan Input Alas dan Tinggi Segitiga -------" << endl;
  cout << "=========================================================" << endl << endl;

  cout << "  Masukkan panjang alas (cm)   :  "; cin >> alas;
  cout << "  Masukkan panjang tinggi (cm) :  "; cin >> tinggi;
  cout << endl;

  sisiMiringSegitiga();
  luasSegitiga();
  besarSudutAlfa();
  besarSudutBeta();

  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :    Hasil Program Segitiga Siku-Siku    :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

  cout << "  Sisi miring segitiga       :  " << sisiMiring << " cm" << endl;
  cout << "  Besar sudut alfa segitiga  :  " << Alfa << " derajat" << endl;
  cout << "  Besar sudut beta segitiga  :  " << Beta << " derajat" << endl;
  cout << "  Luas segitiga              :  " << luas << " cm2" << endl << endl;

  cout << "========================================================" << endl;
  cout << "------------------- Program Selesai --------------------" << endl;
  cout << "========================================================" << endl;

  return 0; 
}
