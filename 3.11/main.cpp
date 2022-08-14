        // Zaslanianie nazw
        // 3.11
/*
#include <iostream>

using namespace std;

int k = 33;

int main()
{
    cout << "Jestem w main, k = " << k << "\n";
    {
        int k = 10;
        cout << "po lokalnej definicji k = " << k << endl;
        //cout << "globalne k = " << ::k << endl;       // operator zakresu - '::'
    }

    cout << "Poza blokiem k = " << k << endl;
    return 0;
}
*/


        // Specyfikator - 'const'
        //3.12

#include <iostream>

using namespace std;

int main()
{
    cout << "Wybierz poziom sledzenia programu [1-5]: ";
    int wybor;
    cin >> wybor;
    const int poziom_sledzenia {wybor};
    // od tej pory nikt nie moze zmienic wartosci obiektu poziom_sledzenia

    // Oto proby naruszenia stalosci tego obiektu

    //poziom_sledzenia = 4;
    //poziom_sledzenia;

    return 0;
}
