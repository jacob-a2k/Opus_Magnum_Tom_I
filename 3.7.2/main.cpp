        // Stale bedace liczbami calkowitymi
        // 3.7.2
/*
#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    int k = i + 011;    // czyli i + 9
    cout << "k = " << k << endl;

    int m   = 100;      // stala doslowna w zapisie dziesiatkowym
    int n   = 0x100;    // stala doslowna w zapisie szesnastkowym
    int j   = 0100;     // stala doslowna w zapisie osemkowym
    int bin = 0b100;    // stala doslowna w zapisie dwojkowym (C++ 14)
    cout << "Wypisanie ich w postci dziesiatkowej \n m = " << m << ", n = " << n << ", j = " << j << ", bin = " << bin << endl;

    cout << "Suma m + n + j = " << ( m + n + j ) << "\n";
    cout << "Wypisujemy trzy rozne stale: " << 0x22 << ", " << 022 << ", " << 22 << "\n";

    return 0;
}
*/


        // Przyklad uzycia zmiennoprzecinkowych stalych doslownych
        // 3.7.4
/*
#include <iostream>

using namespace std;

int main()
{
    double promien = 1.7;
    double pole = promien * promien * 3.14;
    cout << "Pole kola o promieniu " << promien << " wynosi " << pole;

    promien = 4.1e2;
    pole = promien * promien * 3.14;
    cout << "\nPole kola o promieniu " << promien << " wynosi " << pole;

    return 0;
}
*/


        // 'Regex' - regular expression - wyrazenie regularne
        // 3.7.7

#include <iostream>

using namespace std;

int main()
{
    cout << "Lecimy promem \"Columbia\", tu \\ backslash" << endl;
    cout << R"(Lecimy promem "Columbia", tu \ backslash)" << endl;

    cout << "C:\\trasnport\\nowy_projekt\\projekt1" << endl;
    cout << R"(C:\transport\nowy_projekt\projekt1)" << endl;

    //gdy konieczne jest uzycie znaku nowej lini
    cout << "linia pierwsza\nlinia druga\n";

    cout    << R"(linia raw pierwsza
linia raw druga
)";

    // a gdy w tekscie ma wystapic )" zmieniamy ogranicznik na odpowiedniejszy
    cout << R"ogranicznik(Zawisza"(Czarny)" zawolal)ogranicznik" << endl;
    cout << R"##(Boleslaw "(Krzywousty)" wszedl do komnaty)##" << endl;

    return 0;
}
