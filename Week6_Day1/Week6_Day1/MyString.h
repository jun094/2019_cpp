#pragma once
class MyString
{
	char * m_pStr;
	int m_length;

public:
	MyString(void);
	MyString(const char * in); //상수 char 배열을 받는다. -> 상수로 받음으로써 "나는 이값을 바꾸지 않을꺼야" 라는 의미가 된다. 
	MyString(const MyString & in);

	~MyString(void);

	void add(const MyString & in); // 문자열을 더하는 함수

	char * getStr() { return m_pStr; } // 문자열을 main에서 출력하기 위해
	int getLength() { return m_length;}
};

