#include<iostream>
using namespace std;

class Integer {
	int* m_pInt;
public:
	Integer();
	Integer(int value);
	Integer(const Integer& obj);
	Integer(Integer&& obj); //r-value reference

	int GetValue() const;
	void SetValue(int value);
	~Integer();
}; 
