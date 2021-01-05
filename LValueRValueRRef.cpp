//#include<iostream>
//int Add(int x, int y) {
//	return x + y;
//}
//
//int& Transform(int& x) {
//	x = x * x;
//	return x;
//}
//
//void Print(int& x) {
//	std::cout << "Print(int& x)" << std::endl;
//}
//
//void Print(const int& x) {
//	std::cout << "Print(const int& x)" << std::endl;
//}
//
////void Print(int&& x) {
////	std::cout << "Print(int&& x)" << std::endl;
////}
//int main() {
//	// x, y and Z are l-values and 5, 10 & 8 are r values
//	int x = 5;
//	int y = 10;
//	int z = 8;
//
//	//Expression returns r-value
//	int result = (x + y) * z;
//
//	//Expression returns l-value
//	++x = 6;
//
//	//R-value reference
//	int &&r1 = 10;
//	int &&r2 = Add(3, 2);
//
//	//int x = 0;
//	//int&& r3 = x; //cannnot assign r-value reference to l-value
//
//	int& ref = Transform(x);
//	const int& ref2 = 3; // l-value reference may point to r-value if its a const
//
//	int var = 10;
//	Print(var); // void Print(int& x)
//
//	Print(12); // void Print(const int& x) if r-value ref function not available
//	Print(12); // It will give call and priority to void Print(int&& x) over void Print(const int& x)
//
//	return 0;
//}