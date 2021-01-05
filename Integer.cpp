#include"Integer.h"


Integer::Integer() {
	cout << "Integer()" << endl;
	m_pInt = new int(0);
}

Integer::Integer(int value) {
	cout << "Integer(int)" << endl;
	m_pInt = new int(value);
}

Integer::Integer(const Integer& obj) {
	cout << "Integer(const Integer& obj)" << endl;
	m_pInt = new int(*(obj.m_pInt));
}

Integer::Integer(Integer&& obj)
{
	cout << "Integer(Integer&& obj)" << endl;
	m_pInt = obj.m_pInt;
	obj.m_pInt = nullptr;
}

int Integer::GetValue() const {
	return *m_pInt;
}

void Integer::SetValue(int value) {
	*m_pInt = value;
}

Integer::~Integer() {
	cout << "~Integer()" << endl;
	delete m_pInt;
	m_pInt = NULL;
}