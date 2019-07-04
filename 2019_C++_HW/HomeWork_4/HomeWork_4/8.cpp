#include<iostream>

using namespace std;

class Book{
private :
	char *m_title; // �ְ� ���� ���簡 �Ͼ����.
	int m_price;
	int m_length; // ���ڿ� ����
public:
	Book();
	Book(char* title, int price);
	Book(Book &s);
	~Book();
	void set(char* title, int price);
	void show() { cout<<m_title<< " " << m_price << "��" << endl; }
};

Book::Book()
{
	m_title = NULL;
	m_length = 0;
	m_price = 0;
}
Book::Book(char* title, int price)
{
	m_price = price;
	m_length = 0;
	while(true) // ���ڿ� ���� ������
	{
		if(title[m_length] == '\0') { break; } // �ι��� ������ ��
		m_length++;
	}

	m_title = new char[m_length+1]; // �ι��ڰ� ���Ե������Ƿ� +1 �����Ҵ�
	//cout<<"������ �Ҵ� :"<< (void*)m_title <<endl;

	for(int i=0; i<m_length; i++)
	{
		m_title[i] = title[i]; // ���ڿ� �־��ֱ�
	}
	m_title[m_length] = '\0'; // �������� �ι��� �־��ָ� '���ڿ�' �ϼ�
}
Book::Book(Book &s)
{	
	m_price = s.m_price;
	m_length= s.m_length ;

	m_title = new char[m_length+1]; // �ι��ڰ� ���Ե������Ƿ� +1 �����Ҵ�
	//cout<<"��������� �Ҵ� :"<< (void*)m_title <<endl;

	for(int i=0; i<m_length; i++)
	{
		m_title[i] = s.m_title[i]; // ���ڿ� �־��ֱ�
	}
	m_title[m_length] = '\0'; // �������� �ι��� �־��ָ� '���ڿ�' �ϼ�
}
Book::~Book()
{
	delete [] m_title;
	//cout<<"�޸� ������ :"<< (void*)m_title <<endl;
}
void Book::set(char* title, int price)
{
	m_price = price;

	int new_length = 0;
	while(true) // ���ο� ���ڿ� ���� ������
	{
		if(title[new_length] == '\0') { break; } // �ι��� ������ ��
		new_length++;
	}


	if(m_length<new_length) // ���ο� ���ڿ� ���̰� �� ���
	{
		delete [] m_title; // ���� ��������� �޸� ����
		//cout<<"�޸� ������ :"<< (void*)m_title <<endl;

		m_title = new char[new_length+1];  // ���Ӱ� �����Ҵ�
		//cout<<"set()�Լ� �Ҵ� :"<< (void*)m_title <<endl;

		m_length = new_length; // �׸��� �������length�� ���ο� ���̷� �ٽ� �ʱ�ȭ
	}

	for(int i=0; i<m_length; i++)
	{
		m_title[i] = title[i]; 
	}
	m_title[m_length] = '\0'; 

	
}

int main()
{

	Book cpp("��ǰC++",10000);
	Book java(cpp); // ��������

	java.set("��ǰ�ڹ�",12000);
	
	cpp.show();
	java.show();

	return 0;
}