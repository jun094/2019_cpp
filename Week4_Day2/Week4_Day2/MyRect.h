//#ifndef _MYRECT_H_ // ���� _MYRECT_H_ ��� ������ �����ִ�? -> ������ define ������ ���� ������ endif �ڷ� ����
//#define _MYRECT_H_ 

#pragma once // if,define,endif�� �� �ٿ� �����ϵ��� ����ũ�μ���Ʈ���� ����

class MyRect
{
private:
	int m_x,m_y; // ��� ������ m_�� ���� !!!
	int m_w,m_h;
	void init(); //������ �ʱ�ȭ  (������ pivate���� ����)

public : 
	MyRect(); // default ������
	MyRect(int x, int y); // Ŭ�������� ������ -> ���ú������� ��������� ������������Ѵ�. �Ȱ��� x,y����ص� ������ �ȳ�
	MyRect(int x, int y, int w, int h);
	
	void draw();
	// Set Position
	void setPos(int x, int y);
};

//#endif // ����������