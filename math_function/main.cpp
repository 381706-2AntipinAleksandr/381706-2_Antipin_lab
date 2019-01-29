#include <iostream>
#include "Polinom.h"
#include "Polish_record.h"

//#define POLINOM

int main()
{
  setlocale(LC_ALL, "RUS");
#ifdef POLINOM
  std::cout << "������������ ��������� ���������� � ����������:\n";
  Polinom P;
  unsigned int B[]{ 3, 2, 1 };
  unsigned int A[]{ 1, 2, 3 };
  Monom C(3, B, 2);
  Monom D(3, A, 3);
  P.InstFirst(C);
  P.InstFirst(D);
  Polinom Po;
  Po.InstFirst(D);
  Po.InstFirst(C);
  Polinom rez;
  rez = P + Po;
  std::cout << P << "+\n" << Po << "=\n";
  std::cout << rez;
  std::cout << "��������� �������� �������������:\n";
#else
  std::cout << "������������ ��������� ����������� �� ������ �������� �������� ������:\n";
  std::cout << "������� �������������� ��������� ��� ��������:\n����� ��������� ����������� ����� ��������� ���� =\n";
  char* string = new char[100];
  std::cin >> string;
  Calculator calculator(string);
  std::cout << "��������� ����������: " << calculator.Calculate();
#endif
  return 0;
}
