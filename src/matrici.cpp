
#include "matrici.hpp"
#include <iostream>
#include <vector>


namespace dolomiti::interview::cl{

 Matrice::Matrice(int c, int r)  {
        righe =r;
        colonne = c;
        elementi.resize(r, std::vector<int>(c));
      
    }

 
    
    void Matrice::leggiElementi() {
        std::cout << "Inserisci gli elementi della matrice"  << std::endl;
        for (int i = 0; i < righe; i++) {
            for (int j = 0; j < colonne; j++) {
                std::cin >> elementi[i][j];
            }
        }
    }

   
   
void Matrice::stampa() {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            std::cout << elementi[i][j] << " ";
        }
        std::cout << std::endl;
    }
}




    Matrice operator+(const Matrice& m1, const Matrice& m2) {
        if (m1.righe != m2.righe || m1.colonne != m2.colonne) {
            throw std::runtime_error("Dimensioni delle matrici non compatibili per l'addizione");
        }

        Matrice risultato(m1.colonne, m1.righe);
        for (int i = 0; i < m1.righe; i++) {
            for (int j = 0; j < m1.colonne; j++) {
                risultato.elementi[i][j] = m1.elementi[i][j] + m2.elementi[i][j];
            }
        }
        return risultato;
    }

    Matrice operator-(const Matrice& m1, const Matrice& m2) {
        if (m1.righe != m2.righe || m1.colonne != m2.colonne) {
            throw std::runtime_error("Dimensioni delle matrici non compatibili per la sottrazione");
        }

        Matrice risultato(m1.colonne, m1.righe);
        for (int i = 0; i < m1.righe; i++) {
            for (int j = 0; j < m1.colonne; j++) {
                risultato.elementi[i][j] = m1.elementi[i][j] - m2.elementi[i][j];
            }
        }
        return risultato;
    }




    Matrice operator*(const Matrice& m1, const Matrice& m2){
        if(m1.righe != m2.righe || m1.colonne != m2.colonne){
             throw std::runtime_error("Dimensioni delle matrici non compatibili per la moltiplicazione");

        }

        Matrice risultato(m1.colonne, m1.righe);
        for(int i = 0; i< m1.righe; i++){
            
            for(int j = 0; j< m1.colonne; j++){
                risultato.elementi[i][j] = 0;

                for(int k = 0; k<m1.colonne; k++){
                    risultato.elementi[i][j]= risultato.elementi[i][j] + ( m1.elementi[i][k]* m2.elementi[k][j]);
                }
            }
        }
    
        return risultato;
    }
 
std::ostream& operator<<(std::ostream& output, const Matrice& m) {
    for (int i = 0; i < m.righe; i++) {
        for (int j = 0; j < m.colonne; j++) {
            output << m.elementi[i][j] << " ";
        }
        output << std::endl;
    }
    return output;

}

bool Matrice::controlloMatrice(const Matrice& m2) {
    return colonne == m2.righe;
}

}

