// PRUEBA_OBTENER_INDICADORES.cpp: archivo de proyecto principal.

#include "stdafx.h"



int main()
{
	CSistema * objSistema = new CSistema();

	int porcen1, porcen2, porcen3, porcen4;

	cout << "\nIngrese el porcentaje 1: ";
	cin >> porcen1;
	objSistema->set_porcen1(porcen1);

	cout << "\nIngrese el porcentaje 2: ";
	cin >> porcen2;
	objSistema->set_porcen2(porcen2);

	cout << "\nIngrese el porcentaje 3: ";
	cin >> porcen3;
	objSistema->set_porcen3(porcen3);

	cout << "\nIngrese el porcentaje 4: ";
	cin >> porcen4;
	objSistema->set_porcen4(porcen4);

	objSistema->IngresarCantidad();

	objSistema->CalPorcentaje();

	objSistema->MostrarTotal();

	_getch();
    return 0;
}
