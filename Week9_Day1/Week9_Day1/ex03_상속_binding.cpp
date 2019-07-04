#include<iostream>
#include<string>

using namespace std;

class MyShape
{
public:
	float x,y;
	string color;

	MyShape()
	{
		x=0;y=0;color="black";
	}
	MyShape(float _x, float _y, string _c)
	{
		x=_x;y=_y;color="black";
	}

	virtual void draw() 
	{ 
		// virtual : �����Լ�
		// �ִ� ������ �Ⱦ����� ��ü�� �Ͼ���ϱ� �������� ���� !!
		// �̰� �߿� ! �׸��� ������ ������ش� !!
	}

	//virtual void draw() = 0; // �̰� ������°� �ƴ϶� ���°Ŵ�!
							   // �߻����� -> �߻���(abstract function)
							   // �߻��Լ�(draw)�� �ݵ�� �� Ŭ�������� ���������ѵ�� �ǵ��� ���� �� �ִ�.!!!!!!!
							   // �ᱹ draw�� �ſ� �߿���, �̰� �ݵ�� ���������� ��� �ǹ���.
							   // �߻��Լ��� �����ϴ� Ŭ����(MyShape) �� �߻�Ŭ������ 
	//virtual void mousePicking() = 0;
};

class MyLine : public MyShape 
{
	// �̷��� draw�� ���� �Լ������� virtual void draw() = 0; ��� �ϸ� ������ ���� Ŭ������ �ȴ�. 
};
class MyRect : public MyShape 
{
public:
	float w,h;
	
	MyRect() 
		
	{ 
		w=0; h=0; 
	}
	MyRect(float _x, float _y, float _w, float _h, string _c)
		:MyShape(_x,_y,_c)
	{
		w = _w; h = _h; 
	}
	void draw() 
	{ 
		cout<<"rect: ( " << x << "," << y << " ) " << color<< " ["<<w<<","<<h<<"] "<<endl; 
	}
};

class MyCircle : public MyShape
{
public:
	float r;
	MyCircle() { r=0;}
	MyCircle(float _x,float _y,float _r,string _c)
		:MyShape(_x,_y,_c)
	{
		r = _r;
	}

	void draw() 
	{ 
		cout<<"circle: ( " << x << "," << y << " ) " << color<< " <"<<r<<"> "<<endl; 
	}
};

int main()
{
	//// ����2
	//int num_rect = 2;
	//int num_clc = 3; // �簢�� 2��, ��3�� �׸�����

	//MyRect rect[10];
	//MyCircle clc[10];

	//for(int i=0;i<num_rect;i++)
	//	rect[i].draw();
	//for(int i=0;i<num_clc;i++)
	//	clc[i].draw(); 
	// �� �ڵ�� ������ ��� ���� !! �׷��� �̷��� ������ ..! �ؿ�

	//// ����2
	//MyRect a;
	//MyCircle b;
	//int num = 2;
	//MyShape *shp[10]; // �������� �ǹ̴� ������, �簢������ �𸣰����� 10�� �׸����־�..!
	//shp[0] = &a;
	//shp[1] = &b;

	//for(int i=0;i<num;i++)
	//{
	//	shp[i]->draw();
	//} 
	// �̷��� �ϸ� �������ε� �� �� �ִ�.


	//// ����3
	int num = 3;
	MyShape *shp[10]; // �������� �ǹ̴� ������, �簢������ �𸣰����� 10�� �׸����־�..!
	shp[0] = new MyRect(10,20,30,40,"blue");
	shp[1] = new MyCircle(10,20,100,"red");
	shp[2] = new MyRect(30,40,100,200,"black");

	for(int i=0;i<num;i++)
	{
		shp[i]->draw();  // ���� ���ε�(dynamic binding)
						 // ������(polymorphism) : ���뿡 �°Բ� ����� ��� �ٲ��.
	} 

	return 0;
}