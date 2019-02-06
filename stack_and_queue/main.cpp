#include "Stack.h"
#include "Queue.h"
#include "Multystack.h"
#include "Stack_on_List.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
//#define stack
//#define queue
#define multystack
//#define stacklist

using namespace std;

int main()
{
  setlocale(LC_ALL, "RUS");
#ifdef stack
  Stack<int> st(100);
  std::cout << "������������ ������� �����:" << std::endl;
  for (int i = 0; i < 100; i++)
  {
    st.Put(i);
    std::cout << "� ���� ��������: " << i << std::endl;
  }
  for (int i = 0; i < 100; i++)
    std::cout << "�� ����� �����: " << st.Get() << std::endl;
#endif
#ifdef queue
  Queue<int> qu(100);
  std::cout << "������������ ������� �������:" << std::endl;
  for (int i = 0; i < 100; i++)
  {
    qu.Put(i);
    std::cout << "� ������� ��������: " << i << std::endl;
  }
  for (int i = 0; i < 100; i++)
    std::cout << "�� ������� �����: " << qu.Get() << std::endl;
#endif
#ifdef multystack
  Multystack<int> mst(4, 100);
  int ms, val = 0;
  std::cout << "������������ ������� N ������:" << std::endl;
  for (ms = 0; ms < 40; ms++)
  {
    mst.Put(0, ms);
    val++;
  }
  for (ms = 40; ms < 70; ms++)
  {
    mst.Put(1, ms);
    val++;
  }
  for (ms = 70; ms < 90; ms++)
  {
    mst.Put(2, ms);
    val++;
  }
  for (ms = 90; ms < 100; ms++)
  {
    mst.Put(3, ms);
    val++;
  }
  cout << "����� ������ - " << val << ", ����������� - " << mst.GetResizeCount() << endl;
#endif
#ifdef stacklist
  tStackList<int> sl;
  std::cout << "������������ ������� �����, ����������� �� ������:" << std::endl;
  for (int i = 0; i < 100; i++)
  {
    sl.Put(i);
    std::cout << "� ���� ��������: " << i << std::endl;
  }
  for (int i = 0; i < 100; i++)
    std::cout << "�� ����� �����: " << sl.Get() << std::endl;
#endif
  return 0;
}