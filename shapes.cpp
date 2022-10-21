// UNDER DEVELOPMENT>>>+++---
// program to calculate different shapes
#include <iostream>
#include <cmath>
using namespace std;
const double Pi = 3.14159;

// class for measuring Rectangles
class Rectangel
{
protected:
	double len, bre;					 // input variables for Rectangel length and breadth
	double rArea, rPerimeter, rDiagonal; // result variables
public:
	// default constructor OR default values
	Rectangel()
	{
		len = 0;
		bre = 0;
	}

	// function to get input from user
	void input()
	{
		cout << "Enter length: ";
		cin >> len;
		cout << "Enter breadth: ";
		cin >> bre;
	}
	// function to calculate AREA
	void area()
	{
		double Ar;
		Ar = len * bre; // a=l+b
		rArea = Ar;
	}
	// function to calculate PEIRMETER
	void perimeter()
	{
		double Peri;
		Peri = 2 * (len + bre); // p=2(l+b)
		rPerimeter = Peri;
	}
	// function to calculate DIAGONAL
	void diagonal()
	{
		double Diag;
		Diag = sqrt((pow(len, 2) + pow(bre, 2))); // formula of diagonal
		rDiagonal = Diag;
	}
	// function to disp all results in structured manner
	void disp()
	{
		cout << "\nRectangle Measurements :-";
		cout << "\n Area: " << rArea;
		cout << "\n Perimeter: " << rPerimeter;
		cout << "\n Diagonal: " << rDiagonal;
		cout << endl;
	}
};

// class for measuring squares
class Square
{
protected:
	double len;						  // input variable
	double Area, Perimeter, Diagonal; // result variable
public:
	Square()
	{
		len = 0;
	}
	// function to get user input
	void input()
	{
		cout << "Enter length: ";
		cin >> len;
	}
	
	// function to calculate area
	void area()
	{
		double a;
		a = pow(len, 2); // a^2
		Area = a;
	}
	// function to calculate perimeter
	void perimeter()
	{
		double p;
		p = 4 * len; // 4*a
		Perimeter = p;
	}
	// function to claculate diagonal
	void diagonal()
	{
		double diag;
		diag = len * sqrt(2); // diagonal formula
		Diagonal = diag;
	}
	// function to display result
	void disp()
	{
		cout << "\nSquare Measurements :-";
		cout << "\n Area: " << Area;
		cout << "\n Perimeter: " << Perimeter;
		cout << "\n Diagonal: " << Diagonal;
		cout << endl;
	}
};

// class for measuring cricle
class Circle
{
protected:
	double radius;				// input variable
	double Area, Circumference; // result variables
public:
	// default value/constructor
	Circle()
	{
		radius = 0;
	}
	
	// function to get input form user
	void input()
	{
		cout << "Enter radius: ";
		cin >> radius;
	}
	// faunction to calculate area
	void area()
	{
		double a;
		a = Pi * pow(radius, 2);
		Area = a;
	}
	// function to claculate
	void circumference()
	{
		double cir;
		cir = 2 * Pi * radius;
		Circumference = cir;
	}
	// function to display results
	void disp()
	{
		cout << "\nCircle Measurements :-";
		cout << "\n Area: " << Area;
		cout << "\n Circumference: " << Circumference;
		cout << endl;
	}
};

// class for measuring Cuboides
class Cuboid
{
protected:
	double len, bre, hei;						// input variables
	double cuVolume, cuSurfaceArea, cuDiagonal; // result variable
public:
	// default constructor/values
	Cuboid()
	{
		len = 0;
		bre = 0;
		hei = 0;
	}
	
	// function to get input form user
	void input()
	{
		cout << "Enter len: ";
		cin >> len;
		cout << "Enter bre: ";
		cin >> bre;
		cout << "Enter hei: ";
		cin >> hei;
	}
	// function to calculate volume of a Cuboid
	void volume()
	{
		double vo;
		vo = len * bre * hei;
		cuVolume = vo;
	}
	// function to calculate total surface area
	void surfacearea()
	{
		double sa;
		sa = 2 * (len * bre + bre * hei + hei * len); // 2(lb+bh+hl) cuboid
		cuSurfaceArea = sa;
	}
	// function to calculate surface area
	void diagonal()
	{
		double diag;
		diag = sqrt(pow(len, 2) + pow(bre, 2) + pow(hei, 2)); // formula of diagonal
		cuDiagonal = diag;
	}
	// function to disp the results
	void disp()
	{
		cout << "\nCuboid Measurements :-";
		cout << "\n Volume: " << cuVolume;
		cout << "\n SurfaceArea: " << cuSurfaceArea;
		cout << "\n Diagonal: " << cuDiagonal;
		cout << endl;
	}
};

// class for measuring cube
class Cube
{
protected:
	double Area;						  // input variable
	double Volume, SurfaceArea, Diagonal; // result variables
public:
	Cube()
	{
		Area = 0;
	}
	// function to get input form user
	void input()
	{
		cout << "Enter area: ";
		cin >> Area;
	}
	
	// function to calculate volume
	void volume()
	{
		double vol;
		vol = pow(Area, 3); // a^3
		Volume = vol;
	}
	// function to claculate surface area
	void surfacearea()
	{
		double sa;
		sa = 6 * pow(Area, 2); // 6a^3
		SurfaceArea = sa;
	}
	// function to calculate diagonal
	void diagonal()
	{
		double diag;
		diag = Area * sqrt(3);
		Diagonal = diag;
	}
	void disp()
	{
		cout << "\nCube Measurements :-";
		cout << "\n Volume: " << Volume;
		cout << "\n SurfaceArea: " << SurfaceArea;
		cout << "\n Diagonal: " << Diagonal;
		cout << endl;
	}
};

// class to measure sphere
class Sphere
{
protected:
	double radius;				// input variable
	double SurfaceArea, Volume; // result variable
public:
	// default value/constructor
	Sphere()
	{
		radius = 0;
	}
	
	// function to get input from user
	void input()
	{
		cout << "Enter radius: ";
		cin >> radius;
	}
	// function to calculate volume
	void volume()
	{
		double vol;
		vol = 4 / 3 * Pi * pow(radius, 3); // 4/3*Pi*pow(r,3)
		Volume = vol;
	}
	// function to claculate surface area
	void surface()
	{
		double sa;
		sa = 4 * Pi * pow(radius, 2); // 4*Pi*r^2
		SurfaceArea = sa;
	}
	// function to display results
	void disp()
	{
		cout << "\nSphere Measurements :-";
		cout << "\n Volume: " << Volume;
		cout << "\n SurfaceArea: " << SurfaceArea;
		cout << endl;
	}
};

// function to quickly test for the time of development
void Shapes()
{
	system("cls");		// to clear windows command prompt
	// system("clear"); // to clear linux console
	int ch;				// input variable
	do
	{
		system("cls");
		cout << "|-----------------------|" << endl;
		cout << "| 0.exit                |" << endl;
		cout << "| 1.Square  2.Rectangel |" << endl;
		cout << "| 3.Circle  4.Cube      |" << endl;
		cout << "| 5.Cuboid  6.Sphere    |" << endl;
		cout << "|-----------------------|"	<< endl;
		cout << "Enter Number To Select:- ";
		cin >> ch;

		if (ch == 1)
		{
			system("cls");
			// test Square //
			Square sq;
			sq.input();
			sq.area();
			sq.perimeter();
			sq.diagonal();
			sq.disp();
			system("pause");
		}

		else if (ch == 2)
		{
			system("cls");
			// test Rectangel //
			Rectangel r;
			r.input();
			r.area();
			r.perimeter();
			r.diagonal();
			r.disp();
			system("pause");
		}
		else if(ch == 3)
		{
			system("cls");
			// test circle //
			Circle cir;
			cir.input();
			cir.area();
			cir.circumference();
			cir.disp();
			system("pause");
		}
		else if(ch == 4)
		{
			system("cls");
			// test Cube //
			Cube c;
			c.input();
			c.volume();
			c.surfacearea();
			c.diagonal();
			c.disp();
			system("pause");
		}
		else if(ch == 5)
		{
			system("cls");
			// test Cuboid //
			Cuboid b;
			b.input();
			b.volume();
			b.surfacearea();
			b.diagonal();
			b.disp();
			system("pause");
		}
		else if(ch == 6)
		{
			system("cls");
			// test Sphere //
			Sphere sp;
			sp.input();
			sp.volume();
			sp.surface();
			sp.disp();
			system("pause");
		}
		else if(ch == 0)
		{
			system("cls");
			exit(1);
		}
	} while (true);
	
	// system("pause"); // to keep the command prompt open after execution
}
int main()
{
	Shapes();
	return 0;
}