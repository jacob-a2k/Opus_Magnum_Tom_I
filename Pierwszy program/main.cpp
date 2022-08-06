        // Pierwszy program

/*
#include <iostream>

using namespace std;

int main()
{
    cout << "Witamy na pokladzie " << endl;
    return 0;
}
*/


        // Drugi program

#include <iostream>

using namespace std;

int main()
{
    int stopy;
    double metry;
    double przelicznik = 0.3;       // inicjalizacja

    cout << " Podaj wysokosc w stopach: ";
    cin >> stopy;       // przyjecie danej z klawiatury

    metry = stopy * przelicznik;        // wlasciwe przeliczenia

    cout << "\n";

    cout << stopy << " stop - to jest: " << metry << " metrow\n";
}
