#include "stdafx.h"



CProyecto::CProyecto(){
	cantIndic1 = 0;
	cantIndic2 = 0; 
	cantIndic3 = 0; 
	cantIndic4 = 0;
	resul1 = 0;
	resul2 = 0;
	resul3 = 0;
	resul4 = 0;
	resulTotal=0;

}

CProyecto::~CProyecto(){}

void CProyecto::set_cantIndic1(float _cantIndic1){

	cantIndic1 = _cantIndic1;
}

float CProyecto::get_cantIndic1(){

	return cantIndic1;
}

void CProyecto::set_cantIndic2(float _cantIndic2){

	cantIndic2 = _cantIndic2;
}

float CProyecto::get_cantIndic2(){

	return cantIndic2;

}

void CProyecto::set_cantIndic3(float _cantIndic3){

	cantIndic3 = _cantIndic3;

}

float CProyecto::get_cantIndic3(){

	return cantIndic3;
}

void CProyecto::set_cantIndic4(float _cantIndic4){

	cantIndic4 = _cantIndic4;
}

float CProyecto::get_cantIndic4(){
	return cantIndic4;
}

float CProyecto::get_resulTotal(){

	return resulTotal;

}

void CProyecto::set_resul1(float _resul1){


	resul1 = _resul1;

}

float CProyecto::get_resul1(){

	return resul1;

}

void CProyecto::set_resul2(float _resul2){

	resul2 = _resul2;
}

float CProyecto::get_resul2(){

	return resul2;
}

void CProyecto::set_resul3(float _resul3){

	resul3 = _resul3;
}

float CProyecto::get_resul3(){

	return resul3;

}

void CProyecto::set_resul4(float _resul4){

	resul4 = _resul4;

}

float CProyecto::get_resul4(){
	return resul4;
}


void CProyecto::CalResulTotal(){

	resulTotal = resul1 + resul2 + resul3 + resul4;
}


void CProyecto::set_nombre(string _nombre){

	nombre = _nombre;

}

string CProyecto::get_nombre(){

	return nombre;

}