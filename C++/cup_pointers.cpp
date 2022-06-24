//Small project explaining the use of pointers and reference using the traditional cups

#include <iostream>

class Taza {

	int m_capacidad = 0;

public:

	Taza() {
		std::cout << "Taza creada" << std::endl;
	}

	~Taza() {
		std::cout << "Taza destruida" << std::endl;
	}
	
	void Llenar() {
		m_capacidad++;
	}

	void Vaciar() {
		m_capacidad = 0;
	}

	void GetCapacidad() const {
		std::cout << m_capacidad << std::endl;
	}
};

void LlenarPtr(Taza *taza, int veces) {

	for (int i = 0; i < veces; i++)
		taza->Llenar();

	std::cout << "Funcion: taza puntero: ";
	taza->GetCapacidad();
}

void LlenarRef(Taza &taza, int veces) {

	for (int i = 0; i < veces; i++)
		taza.Llenar();

	std::cout << "Funcion: taza referencia: ";
	taza.GetCapacidad();
}

void LlenarCopia(Taza taza, int veces) {

	for (int i = 0; i < veces; i++)
		taza.Llenar();

	std::cout << "Funcion: taza copia: ";
	taza.GetCapacidad();
}

int main() {

	Taza tazaOriginal;
	Taza tazaRef;
	Taza *tazaPtr = new Taza();

	int var = 1;
	int* intPtr = &var;
	
	std::cout << "var: " << var << std::endl;
	std::cout << "intPtr: " << intPtr << std::endl;
	std::cout << "*intPtr: " << *intPtr << std::endl;
	
	LlenarCopia(tazaOriginal, 5); //igual que LlenarCopia(*tazaPtr);
	
	LlenarRef(tazaRef, 8);
	LlenarPtr(tazaPtr, 10); //igual que LlenarPtr(&tazaOriginal);

	std::cout << "Main: taza original: ";
	tazaOriginal.GetCapacidad();
	
	std::cout << "Main: taza referencia: ";
	tazaRef.GetCapacidad();
	
	std::cout << "Main: taza puntero: ";
	tazaPtr->GetCapacidad();

	delete tazaPtr;
}