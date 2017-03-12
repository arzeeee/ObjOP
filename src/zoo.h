#ifndef ZOO_H
#define ZOO_H

#include "cell.h"
class Zoo {
	public :
		//ctor dengan parameter
		Zoo(int nbrs, int nkol) ;

		//cctor 
		Zoo(const Zoo& z);

		//dtor
		~Zoo();

		//operator= 
		Zoo& operator=(const Zoo& z);	

		//Print Zoo
		void printZoo();

		//Getter
		int GetElementZoo(int i, int j);

		//Setter
		void SetElementZoo(int i, int j, int k);
	
	private :
		Cell **matriks_sel;	
		const int nbaris;
		const int nkolom;
};

#endif