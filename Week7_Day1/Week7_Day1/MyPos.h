#pragma once
class MyPos
{
private:
	float m_x,m_y,m_z;

public:
	MyPos(void);
	MyPos(float x, float y, float z);
	~MyPos(void);

	void print();

	// friend연산자를 씀으로써 m_x,m_y,m_z를 private으로 묶어도 operator함수에서 사용이 가능해짐
	// 만약 + 연산자는 다른 방식으로 써본다면?
	MyPos operator+(const MyPos & r); // 인자는 1개 , 전역이 아니라 멤버함수임.
	bool operator == (const MyPos &r); // 깊은복사할때 !!!!!!!!!!!!!!  중요!!!!!!!!!!!!!!!!!!
	//복사생성자와 다른것은...
	MyPos & operator=(const MyPos & r)
	{
		m_x = r.m_x;
		m_y = r.m_y;
		m_z = r.m_z;
		return *this;
	}
	float & operator[](int index)
	{
		if(index == 0) return m_x;
		if(index == 1) return m_y;
		if(index == 2) return m_z;
		return m_x;
	}
	MyPos & operator+=(const MyPos & r)
	{
		m_x += r.m_x;
		m_y += r.m_y;
		m_z += r.m_z;
		return *this;
	}


	//friend MyPos operator+ (const MyPos & l,const MyPos & r);
	friend MyPos operator- (const MyPos & l, const MyPos & r);
	friend MyPos operator* (const float & l, const MyPos & r);
	friend MyPos operator/ (const MyPos & l, const float & r);
};

// 애네들은 전역함수임
//MyPos operator+ (const MyPos & l,const MyPos & r);
MyPos operator- (const MyPos & l, const MyPos & r);
MyPos operator* (const float & l, const MyPos & r);
MyPos operator/ (const MyPos & l, const float & r);