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
  { Point vert1, vert2, vert3;	 public:	 // ������ ������ ����������//	 Triang():vert1(), vert2(), vert3(){}	 Triang(){}		// ����������� �����������/*	 Triang(Point& v1, Point& v2, Point& v3):				 vert1(v1), vert2(v2), vert3(v3) {}				������ �����������:			  */	 Triang(Point& v1, Point& v2, Point& v3)	 {  vert1=v1; vert2=v2; vert3=v3; }	 void show()	  {cout << "������� 1 " << setw(10)<< vert1.x			  << setw(10)<< vert1.y << setw(10)<< vert1.z << endl			  << "������� 2 " << setw(10) << vert2.x			  << setw(10)<< vert2.y << setw(10)<< vert2.z << endl			  << "������� 3 " << setw(10) << vert3.x			  << setw(10)<< vert3.y << setw(10)<< vert3.z  << endl;	  }	};void main(void){  Point A;	Point B=A; // ������������� ����� ����������� �����������	Point C(10.6,25.9);	Triang abc(A,B,C);	abc.show();}/*  ���������:������� 1     0      0      0������� 2     0      0      0������� 3  10.6   25.9      0*/

