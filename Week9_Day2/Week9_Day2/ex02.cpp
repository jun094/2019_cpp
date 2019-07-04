#include<iostream>

using namespace std;

// 자료형에 구애 받지 않는 함수를 만들어봐자..! 
// Template함수

// 예시 1
template <class T>				// Template함수
void mySwap(T &a,T &b)			// 일반적 프로그래밍 (generic programming)
								// : 데이터 타입에 구애 받지 않고 프래그래밍
{
	T temp = a;
	a = b;
	b = temp;

	return;
}

// 예시 2
template <class T>				// Template함수
//template <class T, class S>   // 이런식으로 2개도 사용이 가능하다..!
T myMax(T a,T b)
{
	if(a>b) return a;
	else return b;
}


// 예시 3
class SmartintArray // int형을 동적으로 배열을 생성
				    // 그렇다면 다른 데이터 타입도 하고 싶다면??
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
	int &operator[](int ind) // 배열만드는 operator 다시 복습할 것 !!!!!!!!
	{
		return data[ind];
	}

	//getter
	int getSize() { return size; }
};

template <class T>			//Template 클래스
class SmartArray
{
	T * data; // 데이터 타입을 T로 
	int size;
public:
	SmartArray(int s)
	{
		size = s;
		data = new T[s]; // 데이터 타입을 T로 
	}
	~SmartArray()
	{
		delete [] data;
	}
	T &operator[](int ind) // 데이터 타입을 T로 
	{
		return data[ind];
	}

	//getter
	int getSize() { return size; }
};


// 그러나, Template은 오류를 잡아주지 못하므로 안전하지 않다 --> 사용하지 말자!!
// 그럼 왜 배웠냐?? --> 아주 똑똑한 사람들이 만들어놓은 template을 사용하자!
// standart Template Library (STL)  을 사용하자.

int main()
{
	//예시 1
	char a = 'a';
	char b = 'b';

	//mySwap <char> (a,b); // 이렇게 데이터 타입을 나중에 알려주는게 template
	mySwap(a,b);		   // <char> 는 선언해줬을때 해줬으니 지워줘도 된다.
	cout<<a<<", "<<b<<endl;


	float c = 10.45f;
	float d = 21.34f;
	mySwap(c,d); 
	cout<<c<<", "<<d<<endl;


	//예시 2
	cout<<myMax(c,d)<<endl;
	cout<<endl;

	//예시 3
	cout<<"<<class 지정 int형>>"<<endl;
	SmartintArray arr(10);
	for(int i=0;i<arr.getSize();i++)
	{
		arr[i] = i*2;
	}
	for(int i=0;i<arr.getSize();i++)
	{
		cout<<arr[i]<<endl;
	}

	cout<<"<<template 자동 float형>>"<<endl;
	SmartArray <float> arr2(10); // 함수와 달리 class는 무조건 <float>를 써주자!!
	for(int i=0;i<arr.getSize();i++)
	{
		arr[i] = i*2.5f;
	}
	for(int i=0;i<arr.getSize();i++)
	{
		cout<<arr[i]<<endl;
	}

	cout<<"<<template 자동 char형>>"<<endl;
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