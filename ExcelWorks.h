// ������ � �������� �������������. ADD_H � ��� ������������ ���������� ��� (������ ������������ ��� ������������� �����)
#ifndef ADD_H
#define ADD_H
#include <string>
using namespace std;
// � ��� ��� ���������� ������������� �����
void GiveElem(string faleName, int& returnElem, int x, int y); // singl integer
void GiveElem(string faleName, int* returnElem, int x1, int y1, int x2, int y2);
void GiveElem(string faleName, double& returnElem, int x, int y); // single double
void GiveElem(string faleName, double* returnElem, int x1, int y1, int x2, int y2);
void GiveElem(string faleName, string& returnElem, int x, int y); // singl string
void GiveElem(string faleName, string* returnElem, int x1, int y1, int x2, int y2);
// ����������� ���������� �������������
#endif