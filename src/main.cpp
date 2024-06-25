#include <iostream>
#include <vector>
#include "matrici.hpp"

using Matrice = dolomiti::interview::cl::Matrice;

int main() {

   /* try {
        Matrice m1(1, 1);
        Matrice m2(2, 2);
        auto m = m1+m2;
    }
    catch (std::exception& ex) {
        std::cout << "ERROR: " << ex.what() << std::endl;
        // GESTIONE ERRORE
        return 0;
    }*/

    int righe, colonne;

    std::cout << "Inserisci il numero di righe delle matrici: ";
    std::cin >> righe;
    std::cout << "Inserisci il numero di colonne delle matrici: ";
    std::cin >> colonne;



    Matrice matrice1(righe, colonne);
    Matrice matrice2(righe, colonne);

    matrice1.leggiElementi();
    matrice2.leggiElementi();




     try {
         Matrice somma = matrice1 + matrice2;
        Matrice sottrazione = matrice1 - matrice2;
      

        if (matrice1.controlloMatrice(matrice2)) {
            Matrice prodotto = matrice1 * matrice2;
            std::cout << "Prodotto delle matrici:" << std::endl;
            std::cout << prodotto;
        } else {
            std::cout << "Le dimensioni delle matrici non sono compatibili per la moltiplicazione" << std::endl;
        }


        std::cout << "Somma delle matrici:" << std::endl;
        std::cout << somma;

        std::cout << "Sottrazione delle matrici:" << std::endl;
        std::cout << sottrazione;


    } 
     catch (std::exception& ex) {
        std::cout << "ERROR: " << ex.what() << std::endl;
        // GESTIONE ERRORE
        return 0;
    }

    return 0;
}

