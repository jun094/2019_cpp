#pragma once
#include <iostream> 
#include <iomanip> 

class ClassOperator
{
private:
	float m_x;
	float m_y,m_z;
public:
	ClassOperator(void);
	ClassOperator(float a, float b, float c);
	~ClassOperator(void);

	void show();
	
	//a. /(b)
	ClassOperator operator/(ClassOperator div);
	ClassOperator operator*(ClassOperator mul);

	// temp. /(4)
	ClassOperator operator/(float n);

	// a. ++()
	ClassOperator operator++();
	// b. ++(int)
	ClassOperator operator++(int n);
	// c = a+=b ,  a. +=(b)
	ClassOperator operator+=(ClassOperator b);
	// a. ==(b)
	bool operator==(ClassOperator b);
	
	friend ClassOperator operator+(ClassOperator l, ClassOperator r);
	friend ClassOperator operator-(ClassOperator l, ClassOperator r);
	friend ClassOperator operator*(float n,ClassOperator r);
};

ClassOperator operator+(ClassOperator l, ClassOperator r);
ClassOperator operator-(ClassOperator l, ClassOperator r);
// 3*a
ClassOperator operator*(float n,ClassOperator r);