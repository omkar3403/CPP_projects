// calculating different shapes
#include<iostream>
#include<cmath>
class Rectangel {
	private:
		double len, bre;
		double Area, Perimeter, Diagonal;
	public:
		Rectangel() {
			len = 0; bre = 0;
		}
		void input() {
			std::cout<< "Enter length: "; 
			std::cin>>len;
			std::cout<< "Enter breadth: ";
			std::cin>>bre;
		}
		void area() {
			double Ar;
			Ar = len * bre;
			Area = Ar;
		}
		void perimeter() {
			double Peri;
			Peri = 2 * (len + bre);
			Perimeter = Peri;
		}
		void diagonal() {
			double Diag;
			Diag = sqrt((pow(len, 2) + pow(bre, 2)));
			Diagonal = Diag;
		}
		void show() {
			std::cout<< "Rectangle Measurements :-";
			std::cout<< "\n Area: "<< Area;
			std::cout<< "\n Perimeter: "<< Perimeter;
			std::cout<< "\n Diagonal: "<< Diagonal;
			
		}
};

void quicktest(){
	
	Rectangel r;
	r.input();
	r.area();
	r.perimeter();
	r.diagonal();
	r.show();

}
int main() {
	
	quicktest();

	return 0;
}