// ConsoleApplication3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"Complex.h"

using namespace arith;
using namespace std;

int main()
{
    Complex z(3, 0);



    //z.init(double re , double img)

    cout << "Z =";




    z.afficher();

    cout << endl;




    Complex z1(6,0);

    cout << "Z1 =";



    z1.afficher();



    cout << endl;




    cout << "le module de Z :" << z.module() << endl;



    cout << "le module de Z1 :" << z1.module() << endl;



    Complex a;



    a = z.conjugue();




    cout << "le conju de Z = ";
    z.afficher();
    cout << " est : ";
    a.afficher();

    cout << endl;



    a = z1.conjugue();


    cout << "le conju de Z1 = ";
    z1.afficher();
    cout << " est : ";
    a.afficher();



    cout << endl;

    Complex sum;
    sum = z.add(z1);
    cout << "la somme est ";
    sum.afficher();

    cout << endl;
    cout << endl;

    Complex sub;
    sub = z.sub(z1);
    cout << "la soustraction est ";
    sub.afficher();

    cout << endl;

   
    Complex pro;
    pro = z.pro(z1);
    cout << "la multiplication est ";
    pro.afficher();

    cout << endl;

    Complex div;
    div = z.div(z1);
    cout << "la division est ";
    div.afficher();

    cout << endl;
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
