#pragma once
#include <iostream>

class Monom
{
protected:
	int n;//������
	double c;//�����������
	unsigned int* power;//�������
	Monom* NextMonom;//��������� �����
public:
	Monom()
	{}
	Monom(int _n, unsigned int* _power, double _c);
	Monom(const Monom& monom);
	~Monom();
	int GetN();//������� ������
	double GetC();//������� �����������
	unsigned int* GetPower();//������� ��������� �� �������
	Monom* GetNextMonom();//������� ��������� �� ��������� �����
	void SetN(int _n);//�������� ������
	void SetC(double _c);//�������� �����������
	void SetPower(unsigned int* _power);//�������� �������
	void SetNextMonom(Monom* monom);//�������� ��������� �� ��������� �����
	Monom& operator=(const Monom& monom);
	Monom operator+(const Monom& monom);
	Monom operator-(const Monom& monom);
	Monom operator*(const Monom& monom);
	bool operator==(const Monom& monom);
	bool operator>(const Monom& monom);
	bool operator<(const Monom& monom);
	friend std::ostream& operator<<(std::ostream& os, Monom& monom);
};

