#ifndef DEC9B4EB_B4D0_45D6_8665_CDDEC5C5F3AB
#define DEC9B4EB_B4D0_45D6_8665_CDDEC5C5F3AB
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

string text(string nazwa_pliku)
{
    fstream plik;
    plik.open("p.txt",ios::in);
    vector <string> znaki;
    string temp;
    while(plik>>temp)
    {
        znaki.push_back(temp);
    }
}

#endif /* DEC9B4EB_B4D0_45D6_8665_CDDEC5C5F3AB */
