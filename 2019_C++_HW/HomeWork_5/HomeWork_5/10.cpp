#include<iostream>
#include<string>

using namespace std;


class Shape{
private:
	Shape *pShape; // ���� ������ ����Ŵ
public:
	Shape()
	{
		pShape = nullptr;
	}
	virtual ~Shape() // �⺻ Ŭ������ �Ҹ��ڸ� virtual�� �������ν�, �Ļ�Ŭ������ �ڵ� �Ҹ�(�������ε�)
	{} 

	void paint() 
	{
		draw();
	}
	virtual void draw() // �����Լ� -> �������ε� �ϵ���
	{} 
	Shape* add(Shape* p)
	{
		this->pShape = p;
		return p;
	}
	Shape* getNext() { return pShape; }
	//Shape* getP() { return p; }
	void setNext(Shape *p) 
	{
		this->pShape = p->pShape;
	}
};

class Line : public Shape{
private:
	void draw()  // �Լ� ������ -> �������ε� ��.
	{
		cout << ": Line" << endl;
	}
};
class Circle : public Shape{
private:
	void draw()  // �Լ� ������ -> �������ε� ��.
	{
		cout << ": Circle" << endl;
	}
};
class Rect : public Shape{
private:
	void draw() // �Լ� ������ -> �������ε� ��.
	{
		cout << ": Rect" << endl;
	}
};

class UI { 
public:
	static int insert()
	{
		int shape_num;
		cout<<"��:1, ��:2, �簢��:3 >> ";
		cin>>shape_num;

		return shape_num;
	}
	static int deleteIndex()
	{
		int index_num;
		cout<<"�����ϰ��� �ϴ� ������ �ε��� >> ";
		cin>>index_num;
		return index_num;
	}
};


class GraphicEditor{
private:
	int m_count;
	Shape *m_pStart, *m_pLast; // shapeŬ������ ó���� ���� ����Ű�� ������
public:
	GraphicEditor()
	{
		m_count=0;
		m_pStart = nullptr;
		m_pLast = nullptr;
	}
	~GraphicEditor()
	{
		delete m_pStart;
		delete m_pLast;
	}
	void insertEditor(int num)
	{
		if(num == 1) // ��
		{
			if(m_count==0) // add�� ó���̶�� ó���̶��
			{
				m_pStart = new Line(); // ��ĳ����
				m_pLast = m_pStart; // ó������ �� �� ù��°���� ����Ŵ
			}
			else // add�� ó���� �ƴ϶��
			{
				m_pLast = m_pLast->add(new Line()); //�� ��ü ����
			}
			m_count++;

		}
		else if(num == 2) // ��
		{
			if(m_count==0) // add�� ó���̶�� ó���̶��
			{
				m_pStart = new Circle(); // ��ĳ����
				m_pLast = m_pStart; // ó������ �� �� ù��°���� ����Ŵ
			}
			else // add�� ó���� �ƴ϶��
			{
				m_pLast = m_pLast->add(new Circle()); //�� ��ü ����
			}
			m_count++;
		}
		else // �簢��
		{
			if(m_count==0) // add�� ó���̶�� ó���̶��
			{
				m_pStart = new Rect(); // ��ĳ����
				m_pLast = m_pStart; // ó������ �� �� ù��°���� ����Ŵ
			}
			else // add�� ó���� �ƴ϶��
			{
				m_pLast = m_pLast->add(new Rect()); //�簢�� ��ü ����
			}
			m_count++;
		}
	}
	void deleteEditor(int delIndex)
	{		
		int i=0;
		Shape *pIndex = m_pStart;
		Shape *p = m_pStart;

		
		while(i<delIndex)
		{
			p=pIndex;
			pIndex = pIndex->getNext(); // ������ �ε������� �̵�
			i++;
		}
		if(delIndex==0) // ������ �ε����� ù��°���
		{
			m_pStart = p->getNext(); // m_pStart �������� �̵� 
		}
		else 
		{
			p->setNext(pIndex);
		}
		m_count--;
	
		delete pIndex;		
	}

	void showUI()
	{
		while(true)
		{
			int n;
			cout<<"����:1, ����:2, ��κ���:3, ����:4 >> ";
			cin>>n;

			if(n==1)
			{
				UI call;

				insertEditor(call.insert()); // call.insert() : 1:��, 2:��, 3:�簢��
			}
			else if(n==2)
			{
				UI call;

				deleteEditor(call.deleteIndex());
			}
			else if(n==3)
			{
				Shape* p = m_pStart;
				int index=0;
				while(index<m_count)
				{
					cout<<index;
					p->paint();
					p=p->getNext();
					index++;
				}
			}
			else
			{
				exit(0);
			}
		}

	}

	//getter
	Shape *getpStart() { return m_pStart; }
	int getCount() { return m_count; }
};



int main()
{
	cout<<"�׷��� �������Դϴ�."<<endl;
	GraphicEditor *a = new GraphicEditor();
	a->showUI();

	delete a;

	return 0;
}