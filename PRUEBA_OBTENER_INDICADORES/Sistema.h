#pragma once
class CSistema
{
private:
	int porcen1, porcen2, porcen3, porcen4;
	CProyecto * objProyecto;


public:
	CSistema();
	~CSistema();

	void set_porcen1(int _porcen1);
	int get_porcen1();

	void set_porcen2(int _porcen2);
	int get_porcen2();

	void set_porcen3(int _porcen3);
	int get_porcen3();

	void set_porcen4(int _porcen4);
	int get_porcen4();

	void CalPorcentaje();

	void MostrarTotal();

	void IngresarCantidad();

};

