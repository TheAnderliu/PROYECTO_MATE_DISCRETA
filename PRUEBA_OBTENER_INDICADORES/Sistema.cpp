#include "stdafx.h"


CSistema::CSistema(){
	porcen1 = 0;
	porcen2 = 0;
	porcen3 = 0;
	porcen4 = 0;
	objProyecto = new CProyecto();

}

CSistema::~CSistema(){}

void CSistema::set_porcen1(int _porcen1){

	porcen1 = _porcen1;

}

int CSistema::get_porcen1(){
	return porcen1;
}

void CSistema::set_porcen2(int _porcen2){

	porcen2 = _porcen2;

}

int CSistema::get_porcen2(){

	return porcen2;
}

void CSistema::set_porcen3(int _porcen3){

	porcen3 = _porcen3;

}

int CSistema::get_porcen3(){

	return porcen3;
}

void CSistema::set_porcen4(int _porcen4){

	porcen4 = _porcen4;


}

int CSistema::get_porcen4(){


	return porcen4;

}

void CSistema::CalPorcentaje(){
	float resul1=0.0, resul2=0.0, resul3=0.0, resul4=0.0;

	resul1 = float(porcen1)*((objProyecto->get_cantIndic1()) / 100.0);
	objProyecto->set_resul1(resul1);

	resul2 = float(porcen2)*((objProyecto->get_cantIndic2()) / 100.0);
	objProyecto->set_resul2(resul2);

	resul3 = float(porcen3)*((objProyecto->get_cantIndic3()) / 100.0);
	objProyecto->set_resul3(resul3);

	resul4 = float(porcen4)*((objProyecto->get_cantIndic4()) / 100.0);
	objProyecto->set_resul4(resul4);

	objProyecto->CalResulTotal();

}

void CSistema::MostrarTotal(){

		cout << "\nNombre de la empresa: "<<objProyecto->get_nombre();
	float resulTotal = 0.0, res1=0.0, res2=0.0, res3=0.0, res4=0.0;


	resulTotal=objProyecto->get_resulTotal();
	cout<<"\nEl resultado de la suma de sus porcentajes es: "<<resulTotal;

	res1 = objProyecto->get_resul1();
	res2 = objProyecto->get_resul2();
	res3 = objProyecto->get_resul3();
	res4 = objProyecto->get_resul4();

	cout << "\nEl resultado de la suma de sus porcentajes 1 es: " << res1;
	cout << "\nEl resultado de la suma de sus porcentajes 2 es: " << res2;
	cout << "\nEl resultado de la suma de sus porcentajes 3 es: " << res3;
	cout << "\nEl resultado de la suma de sus porcentajes 4es: " << res4;




}

void CSistema::IngresarCantidad(){

	float cant1, cant2, cant3, cant4;
	string nombre;

	cout << "\nIngrese el nombre del proyecto: ";
	cin >> nombre;
	objProyecto->set_nombre(nombre);


	cout << "\nIngrese la cantidad 1: ";
	cin >> cant1;
	objProyecto->set_cantIndic1(cant1);

	cout << "\nIngrese la cantidad 2: ";
	cin >> cant2;
	objProyecto->set_cantIndic2(cant2);

	cout << "\nIngrese la cantidad 3: ";
	cin >> cant3;
	objProyecto->set_cantIndic3(cant3);

	cout << "\nIngrese la cantidad 4: ";
	cin >> cant4;
	objProyecto->set_cantIndic4(cant4);


}