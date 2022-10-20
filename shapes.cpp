// UNDER DEVELOPMENT>>>+++---
// calculating different shapes
#include<iostream>
#include<cmath>
// class for measuring Rectangles
class Rectangel {
private:
	double len, bre; // input variables for Rectangel length and breadth
	double Area, Perimeter, Diagonal; // result variables
public:
	// default constructor OR default values
	Rectangel() {
		len = 0; bre = 0;
	}
	// temp func test/dev input
	void input(int l, int b){
		len = l; bre = b;
		std::cout<<"RECTANGLE:"<<std::endl;
		std::cout<< " len: "<< len<< std::endl<< " bre: "<< bre<< std::endl;
	}
	// function to get input from user
	void input() {
		std::cout<< "Enter length: "; 
		std::cin>>len;
		std::cout<< "Enter breadth: ";
		std::cin>>bre;
	}
	// function to calculate AREA
	void area() {
		double Ar;
		Ar = len * bre; // a=l+b
		Area = Ar;
	}
	// function to calculate PEIRMETER
	void perimeter() {
		double Peri;
		Peri = 2 * (len + bre); // p=2(l+b)
		Perimeter = Peri;
	}
	// function to calculate DIAGONAL
	void diagonal() {
		double Diag;
		Diag = sqrt((pow(len, 2) + pow(bre, 2))); // formula of diagonal
		Diagonal = Diag;
	}
	// function to show all results in structured manner
	void show() {
		std::cout<< "Rectangle Measurements :-";
		std::cout<< "\n Area: "<< Area;
		std::cout<< "\n Perimeter: "<< Perimeter;
		std::cout<< "\n Diagonal: "<< Diagonal;
		
	}
};
// class for measuring boxes
class Box {
private:
	double len, bre, hei; // input variables
	double Volume, TotalSurfaceArea; // result variable
public:
	// default constructor/values
	Box(){
		len=0; bre=0; hei=0;
	}
	// function to get input form user
	void input() {
		std::cout<< "Enter len: ";
		std::cin>>len;
		std::cout<< "Enter bre: ";
		std::cin>>bre;
		std::cout<< "Enter hei: ";
		std::cin>>hei;
	}
	// function to calculate volume of a box
	void volume(){
		double vo;
		vo = len * bre * hei;
		Volume = vo;
	}
	// function to calculate total surface area
	void totalsurfacearea() {
		double tsa;
		tsa =  2 * (len*bre + bre*hei + hei*len); // 2(lb+bh+hl) cueboid
		TotalSurfaceArea = tsa;
	}
	// function to calculate surface area
	void surfacearea() {
		
	}
	// function to show the results
	void show() {
		std::cout<<Volume;
	}
};
// function to quickly test for the time of development
void quicktest(){
	
	// Box test //
	Box b;
	b.input();
	//b.volume();

	// Rectangel test //
	Rectangel r;
	r.input(5, 2);
	r.area();
	r.perimeter();
	r.diagonal();
	r.show();
}
int main() {
	
	quicktest();

	return 0;
}