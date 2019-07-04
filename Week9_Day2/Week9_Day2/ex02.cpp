#include<iostream>

using namespace std;

// �ڷ����� ���� ���� �ʴ� �Լ��� ��������..! 
// Template�Լ�

// ���� 1
template <class T>				// Template�Լ�
void mySwap(T &a,T &b)			// �Ϲ��� ���α׷��� (generic programming)
								// : ������ Ÿ�Կ� ���� ���� �ʰ� �����׷���
{
	T temp = a;
	a = b;
	b = temp;

	return;
}

// ���� 2
template <class T>				// Template�Լ�
//template <class T, class S>   // �̷������� 2���� ����� �����ϴ�..!
T myMax(T a,T b)
{
	if(a>b) return a;
	else return b;
}


// ���� 3
class SmartintArray // int���� �������� �迭�� ����
				    // �׷��ٸ� �ٸ� ������ Ÿ�Ե� �ϰ� �ʹٸ�??
{
	int * data;
	int size;
public:
	SmartintArray(int s)
	{
		size = s;
		data = new int[s];
	}
	~SmartintArray()
	{
		delete [] data;
	}
	int &operator[](int ind) // �迭����� operator �ٽ� ������ �� !!!!!!!!
	{
		return data[ind];
	}

	//getter
	int getSize() { return size; }
};

template <class T>			//Template Ŭ����
class SmartArray
{
	T * data; // ������ Ÿ���� T�� 
	int size;
public:
	SmartArray(int s)
	{
		size = s;
		data = new T[s]; // ������ Ÿ���� T�� 
	}
	~SmartArray()
	{
		delete [] data;
	}
	T &operator[](int ind) // ������ Ÿ���� T�� 
	{
		return data[ind];
	}

	//getter
	int getSize() { return size; }
};


// �׷���, Template�� ������ ������� ���ϹǷ� �������� �ʴ� --> ������� ����!!
// �׷� �� �����?? --> ���� �ȶ��� ������� �������� template�� �������!
// standart Template Library (STL)  �� �������.

int main()
{
	//���� 1
	char a = 'a';
	char b = 'b';

	//mySwap <char> (a,b); // �̷��� ������ Ÿ���� ���߿� �˷��ִ°� template
	mySwap(a,b);		   // <char> �� ������������ �������� �����൵ �ȴ�.
	cout<<a<<", "<<b<<endl;


	float c = 10.45f;
	float d = 21.34f;
	mySwap(c,d); 
	cout<<c<<", "<<d<<endl;


	//���� 2
	cout<<myMax(c,d)<<endl;
	cout<<endl;

	//���� 3
	cout<<"<<class ���� int��>>"<<endl;
	SmartintArray arr(10);
	for(int i=0;i<arr.getSize();i++)
	{
		arr[i] = i*2;
	}
	for(int i=0;i<arr.getSize();i++)
	{
		cout<<arr[i]<<endl;
	}

	cout<<"<<template �ڵ� float��>>"<<endl;
	SmartArray <float> arr2(10); // �Լ��� �޸� class�� ������ <float>�� ������!!
	for(int i=0;i<arr.getSize();i++)
	{
		arr[i] = i*2.5f;
	}
	for(int i=0;i<arr.getSize();i++)
	{
		cout<<arr[i]<<endl;
	}

	cout<<"<<template �ڵ� char��>>"<<endl;
	SmartArray <char> arr3(10);
	for(int i=0;i<arr.getSize();i++)
	{
		arr[i] = i+'a';
	}
	for(int i=0;i<arr.getSize();i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}