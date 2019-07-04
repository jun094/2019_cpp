#include<iostream>
#include<string>

using namespace std;

// ��� : ��� �߰��� ��ü(print�Լ�)�� ������

class MyPoint // ���� ����ϴ� Ŭ����
{
public :
	float m_x, m_y;
	MyPoint()
	{
		m_x=0; m_y=0;
	}
	MyPoint(float x, float y)
	{
		m_x=x; m_y=y;
	}
	void print()
	{
		cout<<"("<<m_x<<","<<m_y<<")"<<endl;
	}
};

class MyColorPoint : public MyPoint // ���� ����ϴµ� ������ �����ϴ� Ŭ���� --> MyPoint �� ���� ������!!
									// " : public �θ�Ŭ������ "
{
public:
	string m_color;
	MyColorPoint() 
	{
		//m_x=0;
		//m_y=0; // x,y�ʹ� �θ� Ŭ�������� �ǵ�°ǵ� �� ���⼭ �ǵ��?? -> ���� !!
			     // ������ Ŭ������ ��������� ������ Ŭ���������� å������ !!
		         // default�����ڰ� ȣ��Ǹ� �̸� ��������ִ� �θ�Ŭ������ default�����ڰ� �ҷ�����. 

		m_color="black";
	}
	MyColorPoint(string color) 
		//���� �ƹ��͵� �Ⱦ��� �θ�Ŭ������ default�� �ڵ������� �Ҹ�. ":MyPoint( )"�� �����Ǿ��ִ°���
	{
		//m_x=0;
		//m_y=0;
		m_color=color;
	}
	MyColorPoint(float x, float y, string color) 
		:MyPoint(x,y) // ���࿡ default�� �ƴ� ���������� �ް� �������� �̷��� ���ش�. 
	{
		//m_x=x;
		//m_y=y;
		m_color=color;
	}
	MyColorPoint(MyPoint in, string color)  
		:MyPoint(in) //�θ� Ŭ�������� �ڵ����� ���� copy�����ڸ� �ҷ���.
	{
		//m_x=x;
		//m_y=y;
		m_color=color;
	}

	//void colorPrint()
	//{
	//	cout<<"["<<m_color<<"] ("<<m_x<<","<<m_y<<")"<<endl;
	//}
	void print() // colorPrint��� ���� �ʰ� �θ� Ŭ������ �Լ��� print�� �����ϰ� ���شٸ�??? --> �ڽĲ���(�ֽŲ���) '��ü'�� �Ͼ !!!!
				 // function override
	{
		//cout<<"["<<m_color<<"] ("<<m_x<<","<<m_y<<")"<<endl; // ���⼭ x�� y�� �θ��� print��ɿ� �ִ°��̴�. 
		cout<<"["<<m_color<<"]"; MyPoint::print();			   // �̷��� �ٲ㾵 �� �ִ� !!
	}
};
int main()
{
	MyColorPoint p;
	p.print();
	//p.colorPrint();

	MyColorPoint q(1,2,"yellow");
	//q.colorPrint();
	q.print();
	
	MyColorPoint r(MyPoint(3,4),"Red");
	//r.colorPrint();
	r.print();


	// �θ�Ŭ������ print�� ����� ������ �����ϴ�!
	MyPoint x;
	x.print();


	return 0;
}