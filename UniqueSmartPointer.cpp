/*
Unique smart pointer:

*/
#include"Integer.h"
#include<iostream>
#include<memory>
class IntPtr {
	Integer* m_p;
public:
	IntPtr(Integer* p) : m_p(p) {

	}

	~IntPtr() {
		delete m_p;
	}
	Integer* operator->() {
		return m_p;
	}
	Integer& operator*() {
		return *m_p;
	}
};

void CreateInteger() {
	std::unique_ptr<Integer> p(new Integer);

	p->SetValue(4);
	std::cout << "Value of p = " << p->GetValue() << std::endl;
	
}

int main() {
	CreateInteger();
	return 0;
}