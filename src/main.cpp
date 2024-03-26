#include <iostream>
#include <fstream>
#include <vector>
#include "include/Pliki.h"

using namespace std;

int main()
{   
    vector<string> myV={"ala", "ma", "kota"};
    fileSaveVector(myV, "p.txt");
}