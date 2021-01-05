///*
//1. Convenient way of initializing class members with values during declaration
//
//class ClassName {
// <type><var_name1> {<initializer>};
// <type><var_name2> = <initializer>;
//
// 2. Ensures the members are initialized with valid values
// 3. Can be used to initialize any type
// 4. Compiler automatically generates initialization code
// 5. Initialization in a user defined constructor takes precedence
//};
//*/
//#include<iostream>
//class Car {
//	int speed{ 0 };
//	int passengers{ 0 };
//	int fuel{ 0 };
//	int arr[5] = { 1,2,3 };
//	int* ptr= &speed; // assigned to null
//	//auto i; // auto is not allowed here.
//public:
//	Car() {
//
//	}
//	Car(int iFuel) {
//		fuel = iFuel;
//	}
//	Car(int iFuel, int* p) {
//		fuel = iFuel;
//		ptr = p;
//	}
//
//	void print() {
//		std::cout << "Speed:" << speed << " " << "Passengers:" << passengers << " " << "Fuel:" << fuel << "Ptr:" << *ptr << std::endl;
//	}
//
//};
//
//int main() {
//	Car c1;
//	c1.print();
//	
//	Car c2(12);
//	c2.print();
//
//	int x = 10;
//	Car c3(56, &x);
//	c3.print();
//
//	return 0;
//}