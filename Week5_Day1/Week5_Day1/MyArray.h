#pragma once

class MyArray
{
private:
	int m_size; // �迭 ������
	int *m_pData; 

public:
	MyArray(void);
	MyArray(int size);
	~MyArray(void);

	int getSize();
	int getData(int index);
	void setData(int index, int value);
};
