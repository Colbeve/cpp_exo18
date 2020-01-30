#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

/*
Exercice 18
Ecrire un algorithme qui permet de jouer au jeu « Ciseau, Pierre, Papier ».
On demande en premier à l’utilisateur son choix, et l’ordinateur affiche au hasard une des 3 possibilités.
On affiche ensuite qui a gagné.
*/

int main()
{
    srand(time(0)); //seed random number generator, generateur de nombre aleatoire

    string choixh, choixm;
    int choixc;

    cout << "h fait ton choix: ciseau, pierre, papier?" << endl;
    cin >> choixh;

    choixc = rand() % 3 + 1;
    if (choixc == 1){
        choixm = "ciseau";
    }
    if (choixc == 2){
        choixm = "pierre";
    }
    if (choixc == 3){
        choixm = "papier";
    }
    cout << choixm << endl;
    if (choixh == choixm){
        cout << "Match NULL" << endl;
    } else {
        if (choixh == "ciseau"){
            if (choixm == "pierre"){
                cout << "vous avez perdu ! L'ordinateur a gagne." << endl;
            } else {
                cout << "vous avez gagne ! L'ordinateur a perdu." << endl;
        }
    }
        if (choixh == "pierre"){
            if (choixm == "papier"){
                cout << "vous avez perdu ! L'ordinateur a gagne." << endl;
            } else {
                cout << "vous avez gagne ! L'ordinateur a perdu." << endl;
        }
    }
        if (choixh == "papier"){
            if (choixm == "ciseau"){
                cout << "vous avez perdu ! L'ordinateur a gagne." << endl;
            } else {
                cout << "vous avez gagne ! L'ordinateur a perdu." << endl;
            }
        }
    }
    return 0;
}
