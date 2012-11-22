/* triangle.cpp    Borland C++ 4.5      EasyWin
			(c) Copyright 1998 by Голубь Н.Г.
							Авторское приложение
к Методическим указаниям по объектно-ориентированному программированию
			  Классы. Инициализация членов абстрактных классов.
Привилегированные функции (FRIEND)- доступ к личным данным класса Point
*/

#include <math.h>
//#include <iostream.h>
#include <iomanip.h>

class Triang;

class Point
 { double x;   // private - по умолчанию
	double y;
	double z;
	public:     // !!!!!!!! Открыты m-функции для обработки данных !!!!!!!!!!!!
		// конструктор (инициализация данных - членов класса)
	Point(double xVal=0, double yVal=0, double zVal=0)
	  {x=xVal; y=yVal; z=zVal;}

	void show()  // просмотр
	 {cout << "\n     Координаты точек:\n"
			 <<"x = " << x << "   y = " << y << endl;}
	friend Triang;	 // Все функции в классе Triang - привилегированные
  };

class Triang
  { Point vert1, vert2, vert3;	 public:	 // Пустой список аргумунтов//	 Triang():vert1(), vert2(), vert3(){}	 Triang(){}		// Конструктор копирования/*	 Triang(Point& v1, Point& v2, Point& v3):				 vert1(v1), vert2(v2), vert3(v3) {}				Записи равнозначны:			  */	 Triang(Point& v1, Point& v2, Point& v3)	 {  vert1=v1; vert2=v2; vert3=v3; }	 void show()	  {cout << "Вершина 1 " << setw(10)<< vert1.x			  << setw(10)<< vert1.y << setw(10)<< vert1.z << endl			  << "Вершина 2 " << setw(10) << vert2.x			  << setw(10)<< vert2.y << setw(10)<< vert2.z << endl			  << "Вершина 3 " << setw(10) << vert3.x			  << setw(10)<< vert3.y << setw(10)<< vert3.z  << endl;	  }	};void main(void){  Point A;	Point B=A; // инициализация через конструктор копирования	Point C(10.6,25.9);	Triang abc(A,B,C);	abc.show();}/*  Результат:Вершина 1     0      0      0Вершина 2     0      0      0Вершина 3  10.6   25.9      0*/

