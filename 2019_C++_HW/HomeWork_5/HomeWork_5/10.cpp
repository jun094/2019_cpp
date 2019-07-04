#include<iostream>
#include<string>

using namespace std;


class Shape{
private:
	Shape *pShape; // 다음 모형을 가리킴
public:
	Shape()
	{
		pShape = nullptr;
	}
	virtual ~Shape() // 기본 클래스의 소멸자를 virtual로 해줌으로써, 파생클래스도 자동 소멸(동적바인딩)
	{} 

	void paint() 
	{
		draw();
	}
	virtual void draw() // 가상함수 -> 동적바인딩 하도록
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
	void draw()  // 함수 재정의 -> 동적바인딩 됨.
	{
		cout << ": Line" << endl;
	}
};
class Circle : public Shape{
private:
	void draw()  // 함수 재정의 -> 동적바인딩 됨.
	{
		cout << ": Circle" << endl;
	}
};
class Rect : public Shape{
private:
	void draw() // 함수 재정의 -> 동적바인딩 됨.
	{
		cout << ": Rect" << endl;
	}
};

class UI { 
public:
	static int insert()
	{
		int shape_num;
		cout<<"선:1, 원:2, 사각형:3 >> ";
		cin>>shape_num;

		return shape_num;
	}
	static int deleteIndex()
	{
		int index_num;
		cout<<"삭제하고자 하는 도형의 인덱스 >> ";
		cin>>index_num;
		return index_num;
	}
};


class GraphicEditor{
private:
	int m_count;
	Shape *m_pStart, *m_pLast; // shape클래스의 처음과 끝을 가리키는 포인터
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
		if(num == 1) // 선
		{
			if(m_count==0) // add가 처음이라면 처음이라면
			{
				m_pStart = new Line(); // 업캐스팅
				m_pLast = m_pStart; // 처음에는 둘 다 첫번째것을 가리킴
			}
			else // add가 처음이 아니라면
			{
				m_pLast = m_pLast->add(new Line()); //선 객체 생성
			}
			m_count++;

		}
		else if(num == 2) // 원
		{
			if(m_count==0) // add가 처음이라면 처음이라면
			{
				m_pStart = new Circle(); // 업캐스팅
				m_pLast = m_pStart; // 처음에는 둘 다 첫번째것을 가리킴
			}
			else // add가 처음이 아니라면
			{
				m_pLast = m_pLast->add(new Circle()); //원 객체 생성
			}
			m_count++;
		}
		else // 사각형
		{
			if(m_count==0) // add가 처음이라면 처음이라면
			{
				m_pStart = new Rect(); // 업캐스팅
				m_pLast = m_pStart; // 처음에는 둘 다 첫번째것을 가리킴
			}
			else // add가 처음이 아니라면
			{
				m_pLast = m_pLast->add(new Rect()); //사각형 객체 생성
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
			pIndex = pIndex->getNext(); // 삭제할 인데스까지 이동
			i++;
		}
		if(delIndex==0) // 삭제할 인데스가 첫번째라면
		{
			m_pStart = p->getNext(); // m_pStart 다음으로 이동 
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
			cout<<"삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
			cin>>n;

			if(n==1)
			{
				UI call;

				insertEditor(call.insert()); // call.insert() : 1:선, 2:원, 3:사각형
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
	cout<<"그래픽 에디터입니다."<<endl;
	GraphicEditor *a = new GraphicEditor();
	a->showUI();

	delete a;

	return 0;
}