#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

string pilihan;
int wordCount, mode, sameCount, palindromValue;
char username [99], password [99], palindrom[99];
bool status, maksimalUsername, minimalPassword, sortingCapital, sortingNumber, sameIssue, palindromIssue;

int signUp() {
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :     Proses pembuatan account baru     :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

  cout << "  =>  Masukkan Username  :  "; cin >> username;
  cout << "  =>  Masukkan Password  :  "; cin >> password;
  cout << endl;

  // maksimal karakter untuk username
  if (strlen(username) <= 20) {
    maksimalUsername = true;
  } else {
    maksimalUsername = false;
  }

  // minimal karakter untuk password
  if (strlen(password) >= 6 && strlen(password) <= 8) {
    minimalPassword = true;
  } else {
    minimalPassword = false;
  }

  // karakter pertama berupa huruf kapital
  if (isupper(password[0])) {
    sortingCapital = true;
  } else {
    sortingCapital = false;
  }

  // password harus mengandung angka
  wordCount = strlen(password);
  for (int i = 0; i < wordCount; i++) {
    if (isdigit(password[i])) {
      mode = 1;
    }
  }

  if (mode == 1) {
    sortingNumber = true;
  } else {
    sortingNumber = false;
  }

  // password tidak boleh sama dengan username
  sameCount = strcmp(username, password);

  if (sameCount != 0) {
    sameIssue = true;
  } else {
    sameIssue = false;
  }

  // password tidak bersifat palindrom 
  strcpy(palindrom, password);
  strrev(palindrom);

  palindromValue = strcmp(password, palindrom);

  if (palindromValue != 0) {
    palindromIssue = true;
  } else {
    palindromIssue = false;
  }

  // kondisi pengisian status password layak atau tidak
  if (minimalPassword == true && sortingCapital == true && sortingNumber == true && sameIssue == true && palindromIssue == true) {
    status = true;
  } else {
    status = false;
  }

  cout << "========================================================" << endl << endl;

  if (status == true) {
    cout << "  [V] Horeee!!! Selamat account berhasil dibuat" << endl << endl;
    cout << "  =>  Username Anda  =  " << username << endl;
    cout << "  =>  Password Anda  =  " << password << endl;
  } if (maksimalUsername == false) {
    cout << "  [X] Username maksimal 20 karakter" << endl;
  } if (minimalPassword == false) {
    cout << "  [X] Password harus berupa 6-8 karakter" << endl;
  } if (sortingCapital == false) {
    cout << "  [X] Masukkan karakter pertama, berupa huruf kapital" << endl;
  } if (sortingNumber == false) {
    cout << "  [X] Password harus mengandung angka" << endl;
  } if (sameIssue == false) {
    cout << "  [X] Password yang anda masukkan sama dengan Username" << endl;
  } if (palindromIssue == false) {
    cout << "  [X] Password bersifat (palindrom)" << endl;
  }

  cout << endl << "========================================================" << endl << endl;

  if (status == true) {
    cout << "========================================================" << endl << endl;
    cout << "  Melanjutkan pembuatan account ? (y/n)  :  "; cin >> (pilihan);
    cout << endl;
    cout << "========================================================" << endl << endl;

    if (pilihan == "y" || pilihan == "Y") {
      signUp();
    } else {
      cout << "";
    }

  } else {
    signUp();
  }

}

int account() {
  cout << endl << endl;
  cout << "========================================================" << endl << endl;
  cout << "  Melanjutkan pembuatan account ? (y/n)  :  "; cin >> (pilihan);
  cout << endl;
  cout << "========================================================";

  if (pilihan == "y" || pilihan == "Y") {
    cout << endl << endl;
    signUp();
  } else if (pilihan == "n" || pilihan == "N") {
    cout << endl << endl;
  }
  else {
    cout << endl << endl;
    cout << " Pilihan yang anda masukkan salah.";
    account();
  }
}

int main() {
  cout << "========================================================" << endl;
  cout << "----------- Program Login (Sorting Password) -----------" << endl;
  cout << "========================================================" << endl << endl;

  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl;
  cout << "       :      Peraturan pembuatan account      :        " << endl;
  cout << "        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~         " << endl << endl;

  cout << "  Username requirements :" << endl << endl;
  cout << "  1. Username harus kurang dari 20 karakter" << endl;
  cout << "  2. Username boleh karakter apa saja" << endl << endl;

  cout << "  Password requirements :" << endl << endl;
  cout << "  1. Password harus 6-8 karakter" << endl;
  cout << "  2. Karakter pertama berupa huruf kapital" << endl;
  cout << "  3. Password harus mengandung angka" << endl;
  cout << "  4. Password tidak sama dengan username" << endl;
  cout << "  5. Password tidak bersifat (palindrom)";

  account();

  cout << "========================================================" << endl;
  cout << "------------------- Program Selesai --------------------" << endl;
  cout << "========================================================" << endl << endl;
  cout << "  => source code by : Faizahel Joasa Ariesta" << endl;
  cout << "  => website portofolio : " << endl;
  cout << "     https://portofolio.faizaheljoasa.repl.co" << endl << endl;
  cout << " #2023JadiAsdosProdas #2023LaptopBaru";
  return 0;
}
