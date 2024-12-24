// Transgerbeur.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std; 

float longueur() {

}
enum EEtat { vide, palette,  rouleau };
union UContenu {
    SPalette paletteCasier;
    SRouleau rouleauCasier; 
};
struct SPalette {
    int poids;
    char reference[20];

};
struct SRouleau
{
    float longueur; 
    int numero; 
};
struct SCasier {
    int px;
    int py;
    UContenu contenu;
    EEtat etat;
};

int main()
{
    SRouleau ro1 = { 10.5, 552 };

    SPalette pa1; 
    pa1.poids = 101.2;
    strcpy_s(pa1.reference, "ref1");

    EEtat etatC1 = EEtat::vide;

    UContenu cont = { pa1 }; 
    cont.rouleauCasier = ro1; 

    SCasier c1;
    c1.contenu = cont; 
    c1.etat = rouleau;
    c1.px = 2; 
    c1.py = 3; 

    SCasier c2;
    c2.contenu.rouleauCasier = ro1;
    c2.etat = EEtat::rouleau;  // L'état devient "rouleau" car on a affecté un rouleau
    c2.px = 4;
    c2.py = 5; 


    SCasier tabCasier[9];
    tabCasier[0] = c1;  // Casier c1 à l'indice 0
    tabCasier[2] = c2;  // Casier c2 à l'indice 2
    int numero;
    SCasier tabCasier[9];

   // utilisation de sizeof :
    cout << "Taille de ro1 (SRouleau) : " << sizeof(ro1) << " octets" << endl;
    cout << "Taille de pa1 (SPalette) : " << sizeof(pa1) << " octets" << endl;
    cout << "Taille de c1 (SCasier) : " << sizeof(c1) << " octets" << endl;
    cout << "Taille de c2 (SCasier) : " << sizeof(c2) << " octets" << endl;
    cout << "Taille de UContenu : " << sizeof(UContenu) << " octets" << endl;
    cout << "Taille de EEtat : " << sizeof(EEtat) << " octets" << endl;
}



// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
