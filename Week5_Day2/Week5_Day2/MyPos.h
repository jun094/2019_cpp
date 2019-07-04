#pragma once

// 자신의 x,y,z좌표를 기억하는 클래스
class MyPos
{
private:
	float m_x,m_y,m_z;

public:
	MyPos(void);
	MyPos(float x, float y, float z);
	~MyPos(void);

	void draw();

	// cpp에 있는 함수에서 멤버변수 접근하기 위해 getter를 만들어줌
	float getX() { return m_x; }
	float getY() { return m_y; }
	float getZ() { return m_z; }

	void setX(float x) { m_x = x; }
	void setY(float y) { m_y = y; }
	void setZ(float z) { m_z = z; }

	// 원점과의 거리를 구하는 함수
	float length();
};

// class를 줄떄 이런 함수들도 같이 보낸다 -> 그러나 함수 구현은 여기서 하면 안됨 -> 헤더파일에는 이름만 존재해야함
// 여기도 구현이 있고 cpp에도 있으면 중복이 되버림
MyPos addPos(MyPos l, MyPos r); // a~b 거리 구하기 (왼쪽좌표 + 오른쪽 좌표)

MyPos subPos(MyPos l, MyPos r); // a~b 거리 구하기 (왼쪽좌표 - 오른쪽 좌표)

float getDist(MyPos l, MyPos r); // a~b 거리 차이 구하기