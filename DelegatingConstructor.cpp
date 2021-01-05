///*
//Delegating Constructor:
//1. Allows a constructor to invoke another constructor
//2. Replacement for common initialization
//3. Reduces duplicate initialization code in multiple constructor
//
//class ClassName{
//	ClassName():ClassName(val1, val2){}
//	ClassName(arg1, arg2){
//		//initialization code
//	}
//}
//*/
//#include<iostream>
//class Car {
//	int speed;
//	int passengers;
//	int fuel;
//	static int totalCount;
//public:
//	Car() : Car(0){
//		std::cout << "In car() constructor" << std::endl;
//	}
//	Car(int iFuel) : Car(iFuel, 0) {
//		std::cout << "In Car(int iFuel) constructor" << std::endl;
//	}
//	Car(int iFuel, int pass) {
//		std::cout << "In Car(int iFuel, int pass) constructor" << std::endl;
//		++totalCount;
//		fuel = iFuel;
//		passengers = pass;
//		speed = 0;
//	}
//	~Car() {
//
//	}
//	void print() {
//		std::cout << "Speed:" << speed << " " << "Passengers:" << passengers << " " << "Fuel:" << fuel << std::endl;
//	}
//};
//
//int Car::totalCount = 0;
//
//int main() {
//	Car c1;
//
//	Car c2(1);
//
//	Car c3(2, 3);
//
//	return 0;
//}