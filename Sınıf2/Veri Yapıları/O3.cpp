#include <iostream>
#include <string>

using namespace std;

typedef struct {
    int ogr_no;
    char ad[20];
    int notu;
} Ogrenci;

Ogrenci veri_liste[10] = {NULL};

int hash_tablo[10][2] = {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1},
                         {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}};

int alfa(int next) {
    int charlie = hash_tablo[next][1];

    if(hash_tablo[charlie][1] == -1) {
        return charlie;
    } else {
        return alfa(charlie);
    }
}

int ekle(Ogrenci& data) {
    int index = data.notu % 10;

    if(hash_tablo[index][0] == -1) {
        veri_liste[index] = data;
        hash_tablo[index][0] = data.notu;

        return 1;

    } else {
        if(hash_tablo[index][1] == -1) {
            for(int i = 0; i < 10; i++) {
                if(hash_tablo[i][0] == -1) {
                    hash_tablo[i][0] = data.notu;
                    hash_tablo[index][1] = i;
                    veri_liste[i] = data;

                    return 1;
                }
            }

            return -1;

        } else {
            for(int i = 0; i < 10; i++) {
                if(hash_tablo[i][0] == -1) {
                    hash_tablo[i][0] = data.notu;
                    hash_tablo[alfa(index)][1] = i;
                    veri_liste[i] = data;

                    return 1;
                }
            }

            return -1;
        }
    }

    return 0;
}

int arama(int next, int data, int adim) {
    int charlie = hash_tablo[next][1];

    if(hash_tablo[next][0] == data) {
        return 1;
    } else if(hash_tablo[charlie][0] == data) {
        return adim;
    } else if(hash_tablo[charlie][1] == -1) {
        return -1;
    } else {
        return arama(charlie, data, ++adim);
    }
}

int main() {
    int cmd = 1, aramaint;
    Ogrenci ogrenci;

    while(cmd) {
        cout << "Select the operation from list:" << endl;
        cout << "   0 - quit\n";
        cout << "   1 - add\n";
        cout << "   2 - search\n";
        cout << "   3 - print" << endl;

        cin >> cmd;

        switch(cmd) {
        case 1:
            cout << "\nAdd with the pattern << ogr_no ad notu >>" << endl;
            cin >> ogrenci.ogr_no >> ogrenci.ad >> ogrenci.notu;

            if(ekle(ogrenci) == 1)
                cout << "Add command succesfully executed\n" << endl;
            else if(ekle(ogrenci) == -1)
                cout << "Error, table is full\n" << endl;
            else
                cout << "An error occured\n" << endl;

            break;

        case 2:
            cout << "Type the grade for search" << endl;
            cin >> aramaint;

            if(arama(aramaint % 10, aramaint, 2) == -1)
                cout << "Girilen deger bulunamadi" << endl;
            else
                cout << "Girilen " << aramaint << " degerine " << arama(aramaint % 10, aramaint, 2) << " adimda ulasildi."
                     << endl;

            break;

        case 3:
            cout << "\n" << endl;
            for(int i = 0; i < 10; i++) {
                cout << hash_tablo[i][0] << " " << hash_tablo[i][1] << endl;
            }

            break;

        case 0:
            cout << "\nQuiting" << endl;

            return 0;

        default:
            cout << "\nOperation not found" << endl;
        }
    }

    return 0;
}
