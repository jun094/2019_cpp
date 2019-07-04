#pragma once
class MyPos
{
private:
	int m_x,m_y,m_z;
public:
	MyPos(void);
	MyPos(int x,int y,int z);
	~MyPos(void);

	void draw();
	
	int getX() { return m_x; };
	int getY() { return m_y; };
	int getZ() { return m_z; };
	void setX(int x) { m_x = x; }
	void setY(int y) { m_y = y; }
	void setZ(int z) { m_z = z; }

	friend MyPos addPos(MyPos a,MyPos b);
};

MyPos addPos(MyPos a,MyPos b); 
MyPos distPos(MyPos a,MyPos b); 
float dist(MyPos d);