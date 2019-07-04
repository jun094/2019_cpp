#pragma once

// �ڽ��� x,y,z��ǥ�� ����ϴ� Ŭ����
class MyPos
{
private:
	float m_x,m_y,m_z;

public:
	MyPos(void);
	MyPos(float x, float y, float z);
	~MyPos(void);

	void draw();

	// cpp�� �ִ� �Լ����� ������� �����ϱ� ���� getter�� �������
	float getX() { return m_x; }
	float getY() { return m_y; }
	float getZ() { return m_z; }

	void setX(float x) { m_x = x; }
	void setY(float y) { m_y = y; }
	void setZ(float z) { m_z = z; }

	// �������� �Ÿ��� ���ϴ� �Լ�
	float length();
};

// class�� �ً� �̷� �Լ��鵵 ���� ������ -> �׷��� �Լ� ������ ���⼭ �ϸ� �ȵ� -> ������Ͽ��� �̸��� �����ؾ���
// ���⵵ ������ �ְ� cpp���� ������ �ߺ��� �ǹ���
MyPos addPos(MyPos l, MyPos r); // a~b �Ÿ� ���ϱ� (������ǥ + ������ ��ǥ)

MyPos subPos(MyPos l, MyPos r); // a~b �Ÿ� ���ϱ� (������ǥ - ������ ��ǥ)

float getDist(MyPos l, MyPos r); // a~b �Ÿ� ���� ���ϱ�