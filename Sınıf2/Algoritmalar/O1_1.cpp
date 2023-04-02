#include <fstream>
#include <iostream>
#include <string>

int strParser(std::string &str) {
    std::string _str;

    int i = 0;

    while (str[++i] != '/')
        ;

    while (str[i++] != '\0')
        _str += str[i];

    return atoi(_str.c_str());
}

int main() {
    std::ifstream fs("deneme.txt");
    int arr[81][81]{0};
    std::string _str;
    std::string _str_vec[81];
    int prev, mode, node_id, giris = 0, cikis = 0, _temp = 0;

    while (!fs.eof()) {
        fs >> _str;

        prev = strParser(_str);

        if (_str == "->") {
            fs >> _str;
            arr[prev - 1][strParser(_str)] = 1;
        }
    }

    std::cout << "0-Cikis\n"
              << "1-Komşuluk listesini listele\n"
              << "2-Sehir plakasina göre o sehir düğümünün giris ve cikis derecelerini hesaplayarak ekrana yazdiriniz\n"
              << "3-Toplam kenar sayisini hesapla\n"
              << "4-Kullanıcıdan istenen plakadan hangi sehirlere gidildigini yazdir\n"
              << "5-Kullanıcıdan istenen plakadan hangi sehirlerden gelindigini yazdir\n"
              << "\n"
              << "Yapilacak islemi secin" << std::endl;

    std::cin >> mode;

    switch (mode) {
        case 0:  // Cikis
            std::cout << "Cikis Yapiliyor..." << std::endl;
            break;

        case 1:  // Komşuluk listesinin içeriğini listeleyiniz
            for (int i = 0; i < 81; i++) {
                std::cout << i + 1 << " : ";

                for (int j = 0; j < 81; j++)
                    std::cout << arr[i][j] << " ";

                std::cout << std::endl;
            }
            break;

        case 2:  // Kullanıcıdan alınacak şehir plakasına göre o şehir düğümünün giriş ve çıkış derecelerini hesaplayarak ekrana yazdırınız.
            std::cout << "Sehir nosu girin> ";
            std::cin >> node_id;

            for (int j = 0; j < 81; j++) {
                if (arr[node_id - 1][j] == 1)
                    cikis++;
            }

            for (int i = 0; i < 81; i++) {
                if (arr[i][node_id] == 1)
                    giris++;
            }

            std::cout << "Giris: " << giris << " Cikis: " << cikis << std::endl;
            break;

        case 3:  // Graftaki toplam kenar sayısını hesaplayarak ekrana yazdırınız.
            for (int i = 0; i < 81; i++) {
                for (int j = 0; j < 81; j++) {
                    if (arr[i][j] == 1)
                        _temp++;
                }
            }

            std::cout << "Graftaki toplam kenar sayısı: " << _temp << std::endl;
            break;

        case 4:  // Kullanıcıdan istenen plakadan hangi şehirlere gidildiğini yazdırınız
            std::cout << "Sehir nosu girin> ";
            std::cin >> node_id;

            std::cout << "Gidilebilecek sehirler: ";

            for (int i = 0; i < 81; i++) {
                if (arr[node_id - 1][i] == 1)
                    std::cout << i << " ";
            }

            std::cout << std::endl;
            break;

        case 5:  // Kullanıcıdan istenen plakadan hangi şehirlerden gelindiğini yazdırınız.
            std::cout << "Sehir nosu girin> ";
            std::cin >> node_id;

            std::cout << "Secilen sehire gelinebilecek sehirler: ";

            for (int j = 0; j < 81; j++) {
                if (arr[j][node_id] == 1)
                    std::cout << j + 1 << " ";
            }

            std::cout << std::endl;
            break;

        default:
            std::cout << "Gecersiz islem!!!" << std::endl;
            break;
    }

    return 0;
}
