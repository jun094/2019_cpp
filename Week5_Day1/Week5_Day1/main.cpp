#include<iostream>

using namespace std;

#include "MyArray.h"

int main() 
{
	// 클래스 동적할당
	/*
	MyArray *arr1 = new MyArray();
	MyArray *arr2 = new MyArray(3); 
	MyArray *arr3 = new MyArray[5]; // 클래스를 배열로 --> '클래스 배열'은 default생성자한테만 간다..! int형을 인자를 보내는 생성자를 사용하고 싶다면???
	 밑에 arrays[3]
	delete arr1;
	delete arr2;
	delete [] arr3;
	*/
	///////////////////////////////////////////////////////////////////////////
	/*
	int n;
	cin>>n;
	
	MyArray arr(n); // 배열 사이즈를 동적으로 만들 수도 있다. 
	for(int i=0;i<arr.getSize();i++)
	{
		arr.setData(i,i*2);
	}

	for(int i=0;i<arr.getSize();i++)
	{
		cout<<i<<"번째 index : "<<arr.getData(i)<<endl;
	}
	*/

	///////////////////////////////////////////////////////////////////////////
	// 정적으로 인자 받는 생성자에게 여러게 주는 방법
	
	/*
	MyArray arrays[3] = {MyArray(10),MyArray(20),MyArray(5)};

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<arrays[i].getSize();j++)
		{
			arrays[i].setData(j,j+1); //c
		}
	}

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<arrays[i].getSize();j++)
		{
			cout<<arrays[i].getData(j)<<endl;
		}
		cout<<endl;
	}
	*/


	
	//동적으로 할려면????
	MyArray *arrays = new MyArray[3]; // 이렇게 만들면 arrays는 포인터이므로 default생성자만 부를수 있다.
	MyArray **arrays = new MyArray*[3]; // 더블포인터 : 포인터들의 배열 -->  여러개들의 포인터들이 배열로 묶여있다. 
	arrays[0] = new MyArray(100); // arrays[0]라는 포인터는 MyArray(100)주소를 넣는 포인터이다.
	arrays[1] = new MyArray(300);
	arrays[2] = new MyArray(1000);

	arrays[0]->getSize(); // 너 사이즈 몇이니?
	arrays[0]->setData(0,0); //


	//애는 결국 이차원 배열이다..! 
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<arrays[j]->getSize();i++)
		{
			arrays[j]->setData(i,i*(j+1));
			cout<<i<< " : " << arrays[j]->getData(i) <<endl;
		}
	}

	
	for(int j=0;j<3;j++)
		delete arrays[j];  // 이렇게 두번을 지워주어야하지만..? 이해 x

	delete [] arrays; //포인터의 배열을 지워야한다. 
	
	return 0;
}