#ifndef DEC9B4EB_B4D0_45D6_8665_CDDEC5C5F3AB
#define DEC9B4EB_B4D0_45D6_8665_CDDEC5C5F3AB
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector <string> fileVector(string nazwa_pliku)
{
    fstream plik;
    plik.open("p.txt",ios::in);
    vector <string> znaki;
    string temp;
    while(plik>>temp)
    {
        znaki.push_back(temp);
    }
    return znaki;
}

void fileSaveVector(vector <string> saveFrom, string FileName)
{
    fstream file;
    file.open("p.txt",ios::out);
    for(int i(0); i<int(saveFrom.size());i++)
    {
        file << saveFrom[i] << endl;
    }
}

class Osoba
{
    public:
    string imie, nazwisko;
};

#endif /* DEC9B4EB_B4D0_45D6_8665_CDDEC5C5F3AB */
