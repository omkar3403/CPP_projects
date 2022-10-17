#include<iostream>

class Rec{
protected:
	int len, bre;
	long int rarea,rperimeter;
public:
	rec(){}
	void rinput() {
		std::cout<<"Enter lenght: ";
		std::cin>>len;
		std::cout<<"Enter breadth: ";
		std::cin>>bre;
	}
	int area(){
		int x;
		x = len * bre;
		this-> rarea = x;
		return x;
	}
	int perimeter() {
		int y;
		y = 2 *(len + bre);
		this-> rperimeter = y;
		return y;
	}
	void show(){
		std::cout <<std::endl <<"Rectangle Area and Perimeter" <<std::endl;
		std::cout <<"area: " <<rarea <<std::endl;
		std::cout <<"perimeter: " <<rperimeter <<std::endl;
	}
	
};
class Box : public Rec {
protected:
	int hei, rvolume;
public:
	void binput() {
		rinput();
		std::cout<<"Enter hight:";
		std::cin>>hei;
	}
	void volume(){
		int v;
		v = len * bre * hei;
		rvolume = v;
	}
	void show(){
		std::cout<<std::endl;
		std::cout<<"volume: "<<rvolume;
	}

};

int main() {
	Rec r0;
	r0.rinput();
	r0.area();
	r0.perimeter();
	r0.show();
	/*
	Box b0;
	b0.binput();
	b0.volume();
	b0.show(); */
	return 0;
}