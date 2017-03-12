#include <iostream>

using namespace std;

class B {
	public :
		virtual void Makan() const = 0;
};

class A : public B {
	public :
		A() {
			el_a = new int [1];
			el_a = 0;
		}

		~A() {
			delete [] el_a;
		}

	private :
		int *el_a;
};
/*class B {
	public :
		B() {
			el_b = new int [1];
			el_b[0] = 0;
		}

		~B() {
			delete [] el_b;
		}

		B(const B& b) {
			el_b = new int [1];
			el_b[0] = b.el_b[0];
		}

		B& operator= (const B& bm) {
			if (this != &bm) {
				el_b = new int [1];
				el_b[0] = bm.el_b[0];
			}
		}

		int GetNilai() {
			return el_b[0];
		}
	private:
		int *el_b;
};

class A {
	public :
		A(int x, int y) : nbrs(x), nkol(y){
			int i;
			matriks = new B *[nbrs];

			for(i = 0; i < nbrs; i++) {
				matriks[i] = new B [nkol];
			}

			int j; 
			for (i = 0; i < nbrs; i ++) {
				for (j = 0; j < nkol; j++)  {
					B matriks[i][j];
				}
			} 
		}

		~A() {
			int i;
			for (i = 0; i < nbrs; i++) {
				delete [] matriks[i];
			}
			delete [] matriks;
		}

		int GetElemenMatriks(int x,int y) {
			return matriks[x][y].GetNilai();
		}

	private :
		B **matriks;
		int nbrs;
		int nkol;
};

int main () {
	A matriksA(3,5);
	int i,j;
	for (i = 0; i < 3; i ++) {
		for (j = 0; j < 5; j++){
			cout << matriksA.GetElemenMatriks(i,j);
		}
		cout << endl;
	}
	return 0;
}*/ 
/*class A {
	public :
		A() : x(0) { }
		A(int y) : x(y) {}
		int GetNilai() {
			return x;
		}
	protected :
		int x;
};

class B : public A {
	public :
		B() : A(3){
			//B::A(3);
		}
};

class C : public B {
	public :
		C() {
			//C::B();
		}
};

int main () {
	B mit;
	//C *sit;
	 
	cout << mit.GetNilai() << endl; 
	//cout << sit->GetNilai() << endl;
	return 0;
}*/