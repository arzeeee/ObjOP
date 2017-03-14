#ifndef ZOO_H
#define ZOO_H

#include "cell.h"
class Zoo {
	public :
		//ctor tanpa parameter
		Zoo();
		//ctor dengan parameter
		Zoo(int nbrs, int nkol) ;

		//cctor 
		Zoo(const Zoo& z);

		//dtor
		~Zoo();

		//operator= 
		Zoo& operator=(const Zoo& z);	

		//Print Zoo
		void printZoo(int nbrs, int nkol);

		//Getter
		int GetElementZoo(int i, int j);

		//Setter
		void SetElementZoo(int i, int j, int k);
	
		const int nbaris;
		const int nkolom;
	private :
		Cell **matriks_sel;	
		
};

#endif