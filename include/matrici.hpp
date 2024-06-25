#ifndef MATRICI_HPP
#define MATRICI_HPP

#include <iostream>
#include <vector>

namespace dolomiti::interview::cl{

	class Matrice{

	public: 
		Matrice(int righe, int colonne);
		void leggiElementi();
		void stampa();
        

	
	    friend Matrice operator+(const Matrice& m1, const Matrice& m2);
  		friend Matrice operator-(const Matrice& m1, const Matrice& m2);
  		friend Matrice operator*(const Matrice& m1, const Matrice& m2);
		friend std::ostream& operator<<(std::ostream& output, const Matrice& m);

        bool controlloMatrice(const Matrice& m2)
		


	private:
 		int righe;
    	int colonne;
    	std::vector<std::vector<int>> elementi;

	};

}

#endif