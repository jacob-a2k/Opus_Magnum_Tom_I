         // Zastosowanie instrukcji skladanych
         // Instrukcja warunkowa 'if', 'else if', 'else'
/*
#include <iostream>

using namespace std;

int main()
{
    int wys, punkty_karne;

    cout << "Na jakiej wysokosci lecimy?[ w metrach ]: ";
    cin >> wys;
    // rozwazamy syrtuacje
    if( wys < 500 ){
        cout << "\n" << wys << " metrow to za nisko!\n";
        punkty_karne = 1;
    }
    else{
        cout << "\nNa wysokosci " << wys << " metrow jestes juz bezpieczny\n";
        punkty_karne = 0;
    }
        // ocena wynikow
    cout << "Masz " << punkty_karne << " punktow karnych\n";
    if(punkty_karne)
        cout << "Popraw sie!";

    return 0;
}
*/


        // Petla while
/*
#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout << "Ile gwiazdek ma miec kapitan? : ";
    cin >> ile;

    cout << "No to narysuj wszystkie " << ile << ": ";
    while(ile){
        cout << "*";
        ile = ile - 1;
    }
    //dowod, ze mial prawo przerwac petle
    cout << "\nTeraz zmienna ile ma wartosc " << ile;

}
*/


        // Pela do...while
/*
#include <iostream>

using namespace std;

int main()
{
    char litera;
    do{
        cout << "Napisz jakas litere: ";
        cin >> litera;
        cout << "\nNapisales: " << litera << "\n";
    }while( litera != 'K');

    cout << "Skoro napisales K to konczymy!";

}
*/



        // Petla for

#include <iostream>

using namespace std;

int main()
{
    cout << "Stewardzie, ilu leci pasazerow?\n";

    int ile;
    cin >> ile;

    int i;
    for( i = 1; i <= ile; i = i + 1){
        cout << " Pasazer nr " << i << " prosze zapiac pasy!\n";
    }
    cout << "Skoro wszyscy juz zapieli, to ladujemy.";

}


