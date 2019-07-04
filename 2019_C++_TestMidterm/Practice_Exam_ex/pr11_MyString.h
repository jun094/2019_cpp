#pragma once
class MyString
{
private:
	char *m_pstr;
	int m_length;
public:
	MyString(void);
	MyString(const char *in);
	MyString(const MyString &in);
	~MyString(void);

	void show();
	void add(MyString &add);
	char *getStr() { return m_pstr; }
	//int getL() { return m_length; }
};

