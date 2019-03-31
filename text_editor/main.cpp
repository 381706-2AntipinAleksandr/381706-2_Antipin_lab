#include <iostream>
#include <cstdio>
#include "Text.h"

using namespace std;

int main()
{
  setlocale(LC_ALL, "RUS");
  TText::SetTreeSize(10000);
  char* str = new char[100];
  char* add = new char[20];
  int pos = 0;
  int len = 0;
  cout << "������� ������: " << endl;
  fgets(str, 100, stdin);
  TText text(str);
  cout << *text.GetRoot();
  //text.GetRoot()->Output();
  cout << "������� ��� � � ����� ����� ��������:" << endl;
  fgets(add, 20, stdin);
  cin >> pos;
  text.Insert(pos, add);
  text.GetRoot()->Output();
  cout << "������� � ������ ����� � ������� �������:" << endl;
  cin >> pos;
  cin >> len;
  text.Delete(pos, len);
  text.GetRoot()->Output();
  text.ClearMemory();
  delete add;
  delete str;
  return 0;
}