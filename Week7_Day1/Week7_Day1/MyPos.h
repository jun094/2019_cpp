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

	// friend�����ڸ� �����ν� m_x,m_y,m_z�� private���� ��� operator�Լ����� ����� ��������
	// ���� + �����ڴ� �ٸ� ������� �ẻ�ٸ�?
	MyPos operator+(const MyPos & r); // ���ڴ� 1�� , ������ �ƴ϶� ����Լ���.
	bool operator == (const MyPos &r); // ���������Ҷ� !!!!!!!!!!!!!!  �߿�!!!!!!!!!!!!!!!!!!
	//��������ڿ� �ٸ�����...
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

// �ֳ׵��� �����Լ���
//MyPos operator+ (const MyPos & l,const MyPos & r);
MyPos operator- (const MyPos & l, const MyPos & r);
MyPos operator* (const float & l, const MyPos & r);
MyPos operator/ (const MyPos & l, const float & r);