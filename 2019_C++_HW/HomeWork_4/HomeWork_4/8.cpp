#include<iostream>

using namespace std;

class Book{
private :
	char *m_title; // 애가 깊은 복사가 일어나야함.
	int m_price;
	int m_length; // 문자열 길이
public:
	Book();
	Book(char* title, int price);
	Book(Book &s);
	~Book();
	void set(char* title, int price);
	void show() { cout<<m_title<< " " << m_price << "원" << endl; }
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
	while(true) // 문자열 길이 따오기
	{
		if(title[m_length] == '\0') { break; } // 널문자 만나면 끝
		m_length++;
	}

	m_title = new char[m_length+1]; // 널문자가 포함되있으므로 +1 동적할당
	//cout<<"생성자 할당 :"<< (void*)m_title <<endl;

	for(int i=0; i<m_length; i++)
	{
		m_title[i] = title[i]; // 문자열 넣어주기
	}
	m_title[m_length] = '\0'; // 마지막에 널문자 넣어주면 '문자열' 완성
}
Book::Book(Book &s)
{	
	m_price = s.m_price;
	m_length= s.m_length ;

	m_title = new char[m_length+1]; // 널문자가 포함되있으므로 +1 동적할당
	//cout<<"복사생성자 할당 :"<< (void*)m_title <<endl;

	for(int i=0; i<m_length; i++)
	{
		m_title[i] = s.m_title[i]; // 문자열 넣어주기
	}
	m_title[m_length] = '\0'; // 마지막에 널문자 넣어주면 '문자열' 완성
}
Book::~Book()
{
	delete [] m_title;
	//cout<<"메모리 해제됨 :"<< (void*)m_title <<endl;
}
void Book::set(char* title, int price)
{
	m_price = price;

	int new_length = 0;
	while(true) // 새로운 문자열 길이 따오기
	{
		if(title[new_length] == '\0') { break; } // 널문자 만나면 끝
		new_length++;
	}


	if(m_length<new_length) // 새로운 문자열 길이가 더 길면
	{
		delete [] m_title; // 원래 복사생성자 메모리 해제
		//cout<<"메모리 해제됨 :"<< (void*)m_title <<endl;

		m_title = new char[new_length+1];  // 새롭게 동적할당
		//cout<<"set()함수 할당 :"<< (void*)m_title <<endl;

		m_length = new_length; // 그리고 멤버변수length는 새로운 길이로 다시 초기화
	}

	for(int i=0; i<m_length; i++)
	{
		m_title[i] = title[i]; 
	}
	m_title[m_length] = '\0'; 

	
}

int main()
{

	Book cpp("명품C++",10000);
	Book java(cpp); // 깊은복사

	java.set("명품자바",12000);
	
	cpp.show();
	java.show();

	return 0;
}