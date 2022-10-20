// UNDER DEVELOPMENT>>>+++---
// calculating different shapes
#include<iostream>
#include<cmath>

			// class for measuring Rectangles
class Rectangel {
private:
	double len, bre; // input variables for Rectangel length and breadth
	double rArea, rPerimeter, rDiagonal; // result variables
public:
	// default constructor OR default values
	Rectangel() {
		len = 0; bre = 0;
	}
	// temp func test/dev input
	void input(int l, int b){
		len = l; bre = b;
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
		rArea = Ar;
	}
	// function to calculate PEIRMETER
	void perimeter() {
		double Peri;
		Peri = 2 * (len + bre); // p=2(l+b)
		rPerimeter = Peri;
	}
	// function to calculate DIAGONAL
	void diagonal() {
		double Diag;
		Diag = sqrt((pow(len, 2) + pow(bre, 2))); // formula of diagonal
		rDiagonal = Diag;
	}
	// function to disp all results in structured manner
	void disp() {
		std::cout<< "\n\nRectangle Measurements :-";
		std::cout<< "\n Area: "<< rArea;
		std::cout<< "\n Perimeter: "<< rPerimeter;
		std::cout<< "\n Diagonal: "<< rDiagonal;
		
	}
};

			// class for measuring Cuboides
class Cuboid {
private:
	double len, bre, hei; // input variables
	double cuVolume, cuSurfaceArea, cuDiagonal; // result variable
public:
	// default constructor/values
	Cuboid(){
		len=0; bre=0; hei=0;
	}
	// test/dev input
	void input(double l, double b, double h) {
		len = l; bre = b; hei = h;
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
	// function to calculate volume of a Cuboid
	void volume(){
		double vo;
		vo = len * bre * hei;
		cuVolume = vo;
	}
	// function to calculate total surface area
	void surfacearea() {
		double sa;
		sa =  2 * (len*bre + bre*hei + hei*len); // 2(lb+bh+hl) cuboid
		cuSurfaceArea = sa;
	}
	// function to calculate surface area
	void diagonal() {
		double diag;
		diag = sqrt(pow(len,2) + pow(bre,2) + pow(hei,2)); // formula of diagonal
		cuDiagonal = diag;
	}
	// function to disp the results
	void disp() {
		std::cout<< "\n\nCuboid Measurements :-";
		std::cout<< "\n Volume: "<< cuVolume;
		std::cout<< "\n SurfaceArea: "<< cuSurfaceArea;
		std::cout<< "\n Diagonal: "<< cuDiagonal;
	}
};

			// class for measuring cube
class Cube {
protected:
	double Area; // input variable
	double Volume, SurfaceArea, Diagonal; // result variables
public:
	Cube() {
		Area = 0;
	}
	// function to get input form user
	void input() {
		std::cout<<"Enter area: ";
		std::cin>>Area;
	}
		// test input func
	void input(double a){
		Area = a;
	}
	// function to calculate volume
	void volume(){
		double vol;
		vol = pow(Area,3); // a^3
		Volume = vol;
	}
	// function to claculate surface area
	void surfacearea() {
		double sa;
		sa = 6 * pow(Area, 2); // 6a^3
		SurfaceArea = sa;
	}
	// function to calculate diagonal
	void diagonal() {
		double diag;
		diag = Area * sqrt(3);
		Diagonal = diag;
	}
	void disp() {
		std::cout<< "\n\nCube Measurements :-";
		std::cout<< "\n Volume: "<< Volume;
		std::cout<< "\n SurfaceArea: "<< SurfaceArea;
		std::cout<< "\n Diagonal: "<< Diagonal;
	}
};

// function to quickly test for the time of development
void quicktest(){
	system("cls"); // to clear windows command prompt
	//system("clear"); // to clear linux console

	// cube test//
	Cube c;
	c.input(3);
	c.volume();
	c.surfacearea();
	c.diagonal();
	c.disp();


	// Cuboid test //
	Cuboid b;
	b.input(2, 4, 3);
	b.volume();
	b.surfacearea();
	b.diagonal();
	b.disp();
	

	// Rectangel test //
	Rectangel r;
	r.input(5, 2);
	r.area();
	r.perimeter();
	r.diagonal();
	r.disp();
}
int main() {
	
	quicktest();

	return 0;
}