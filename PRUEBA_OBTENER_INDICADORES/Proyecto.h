#pragma once
class CProyecto
{
private:
	float cantIndic1, cantIndic2, cantIndic3, cantIndic4;
	float resul1, resul2, resul3, resul4, resulTotal;
	string nombre;

public:
	CProyecto();
	~CProyecto();
	void set_cantIndic1(float _cantIndic1);
	float get_cantIndic1();

	void set_cantIndic2(float _cantIndic2);
	float get_cantIndic2();

	void set_cantIndic3(float _cantIndic3);
	float get_cantIndic3();

	void set_cantIndic4(float _cantIndic4);
	float get_cantIndic4();

	float get_resulTotal();

	void set_resul1(float _resul1);
	float get_resul1();

	void set_resul2(float _resul2);
	float get_resul2();

	void set_resul3(float _resul3);
	float get_resul3();

	void set_resul4(float _resul4);
	float get_resul4();

	void CalResulTotal();

	void set_nombre(string _nombre);
	string get_nombre();
};

