//������� �̸��� class��� �����ϰ� (���)
// #pragma once
#ifndef _CIRCLE_H_  // 2. �� ���ǵǾ� �ִٸ� endif�� ����" (�̸��� "_class��_H_" �� ���)
#define _CIRCLE_H_  // 1. "_CIRCLE_H_ �� ���ǵǾ� ���� �ʴٸ�(ifndef).. define�ض�" 

class Circle{

private:  // �ȹ�ȭ��� ( ���� ���� ) -> Ŭ���� �������� ���
	float r; 
	int x,y; 
	int num;

public : // ���� ȭ���
	Circle();
	Circle(int _x, int _y, float _r);
	~Circle(); // < �Ҹ��� >
			   // ������ �޸𸮰� ������ �� -> return 0�� ������ �޸� ����
			   // default ������ ó�� �ȸ���� �⺻ ������ / ������ �ݵ�� ȣ���
			   // �� Ŭ������ ���� �Ѱ� 
			   // �뵵 : ���� �޸𸮷� ������ �Ҵ�Ǹ� �ݵ�� �޸𸮸� ���־���� -> �Ҹ��ڰ� �޸𸮸� ����������

	void draw();


	float getR()	{ return r; }
	float getX()	{ return x; }
	float getY()	{ return y; }

	void setX(int _x)	
	{ 
		if(_x<-100) _x = -100;
		if(_x>100) _x = 100; 
		x = _x; 
	}
	void setY(int _y)	{ y = _y; }
};

#endif