/* triangle.cpp    Borland C++ 4.5      EasyWin
			(c) Copyright 1998 by ������ �.�.
							��������� ����������
� ������������ ��������� �� ��������-���������������� ����������������
			  ������. ������������� ������ ����������� �������.
����������������� ������� (FRIEND)- ������ � ������ ������ ������ Point
*/

#include <math.h>
//#include <iostream.h>
#include <iomanip.h>

class Triang;

class Point
 { double x;   // private - �� ���������
	double y;
	double z;
	public:     // !!!!!!!! ������� m-������� ��� ��������� ������ !!!!!!!!!!!!
		// ����������� (������������� ������ - ������ ������)
	Point(double xVal=0, double yVal=0, double zVal=0)
	  {x=xVal; y=yVal; z=zVal;}

	void show()  // ��������
	 {cout << "\n     ���������� �����:\n"
			 <<"x = " << x << "   y = " << y << endl;}
	friend Triang;	 // ��� ������� � ������ Triang - �����������������
  };

class Triang
  { Point vert1, vert2, vert3;
