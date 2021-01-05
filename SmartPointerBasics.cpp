///*
//Using Smart Pointers, we can make pointers to work in a way that we don’t need to explicitly call delete. A smart pointer is a wrapper class over a pointer with an operator like * and -> overloaded. The objects of smart pointer class look like a pointer but can do many things that a normal pointer can’t like automatic destruction (yes, we don’t have to explicitly use delete), reference counting and more.
////The idea is to take a class with a pointer, destructor and overloaded operators like * and ->. Since the destructor is automatically called when an object goes out of scope, the dynamically allocated memory would automatically be deleted (or reference count can be decremented).
//*/
//
//#include"Integer.h"
//#include<iostream>
//
//class IntPtr {
//	Integer* m_p;
//public:
//	IntPtr(Integer* p) : m_p(p) {
//
//	}
//
//	~IntPtr() {
//		delete m_p;
//	}
//	Integer* operator->() {
//		return m_p;
//	}
//	Integer& operator*() {
//		return *m_p;
//	}
//};
//
//void CreateInteger() {
//	//Integer* p = new Integer;
//	IntPtr p(new Integer);
//	p->SetValue(4);
//	std::cout << "Value of p = " << p->GetValue() << std::endl;
//	// memory leak as we are not deleting the memory allocated for p.
//	// delete p; // this will free the memory allocate dynamically.
//}
//
//int main() {
//	CreateInteger();
//	return 0;
//}