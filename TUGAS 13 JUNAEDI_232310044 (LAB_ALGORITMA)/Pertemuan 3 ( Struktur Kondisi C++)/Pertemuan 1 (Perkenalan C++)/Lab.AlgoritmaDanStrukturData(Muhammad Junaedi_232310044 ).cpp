#include <iostream>
using namespace std;

int main() {
    string a, b;
    int e = 20, f = 200, g = 725;
    int manggis = 0, kelapa = 0;
    int durian, nangka, semangka;
    int q, r, t;
    int y, u, i;
    int yui;

    cout << "Masukkan NPM Anda:";
    cin >> a;
    cin.ignore(); // Gunakan cin.ignore() untuk membersihkan karakter newline yang tertinggal di buffer.

    cout << "Masukkan Nama Anda:";
    getline(cin, b);

    cout << "Nilai e adalah 20, f adalah 200, dan g adalah 725. Berapa hasil dari penjumlahan e, f, dan g: ";
    int efg;
    cin >> efg;
    int result1 = e + f + g;
    cout << "Hasil: " << result1 << endl;

    manggis -= 30;
    kelapa = 70;
    int kelapamanggis;
    cout << "Hasil: " << (kelapa + manggis) << endl;

    cout << "Masukkan nilai kelapamanggis: ";
    cin >> kelapamanggis;
    int result2 = manggis + kelapa;
    cout << "Hasil: " << result2 << endl;

    r -= 75;
    int s = 35;
    t = 100;
    cout << "Nilai " << s << "+" << r << "+" << t << ": ";
    cin >> q;
    int result4 = q + r + t;
    cout << "Hasil: " << result4 << endl;

    y = 123;
    u = 456;
    i = 789;
    cout << "Nilai 123+456+789: " << y + u + i << endl;

    cout << "Masukkan nilai yui: ";
    cin >> yui;
    int result5 = y + u + i + yui;
    cout << "Hasil: " << result5 << endl;

    return 0;
}

