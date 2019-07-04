#include<iostream>

using namespace std;

#include"pr04_MyArray.h"

int main()
{
	MyArray a; // 기본 배열 사이즈 10
	MyArray b(3); // 사이즈 3인 배열

	cout<<"한개짜리 객체 생성"<<endl;
	for(int i=0;i<b.getSize();i++)
	{
		b.setData(i,i);
		cout<<b.getData(i)<<" ";
	}cout<<endl<<endl;

	MyArray arr_a[2]; // default 객체(size 10인)를 여러개(2개)

	cout<<"배열 (default)객체 생성"<<endl;
	for(int i=0;i<10;i++)
	{
		arr_a[0].setData(i,i);
		cout<<arr_a[0].getData(i)<<" ";
	}cout<<endl;
	for(int i=0;i<10;i++)
	{
		arr_a[1].setData(i,i+10);
		cout<<arr_a[1].getData(i)<<" ";
	}cout<<endl<<endl;


	MyArray arr_b[2] = { MyArray(5), MyArray(6) }; // 인자있는 객체 여러개(2개)
	// 이 방법 외우자!!!!!!!!!!!!!!!!!!!!!!!!!!!
	cout<<"배열 객체 생성"<<endl;
	for(int i=0;i<arr_b[0].getSize();i++)
	{
		arr_b[0].setData(i,i);
		cout<<arr_b[0].getData(i)<<" ";
	}cout<<endl;
	for(int i=0;i<arr_b[1].getSize();i++)
	{
		arr_b[1].setData(i,i);
		cout<<arr_b[1].getData(i)<<" ";
	}cout<<endl<<endl;


	MyArray *p_arrB; // 생성자있는 객체 여러개를 포인터 한개로 표현하기
	p_arrB = arr_b;

	cout<<"바로 위 2개의 배열객체를 포인터로 가리키기"<<endl;
	//while(true)
	//{
	//	if(p_arr==nullptr) {break;}
	//	for(int j=0;j<p_arr->getSize();j++)
	//	{
	//		cout<<p_arr->getData(j)<<" ";
	//	}cout<<endl;
	//	p_arr++;
	//}cout<<endl<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<p_arrB->getSize();j++)
		{
			cout<<p_arrB->getData(j)<<" ";
		}cout<<endl;
		p_arrB++;
	}cout<<endl<<endl;


	MyArray arr_c[2][3] = { {MyArray(5), MyArray(6), MyArray()},
	{MyArray(2), MyArray(3), MyArray(10)} }; 
	cout<<"2차원 배열 객체 생성"<<endl;
	for(int h=0;h<2;h++)
	{
		for(int w=0;w<3;w++)
		{
			cout<<"[ ";
			for(int i=0;i<arr_c[h][w].getSize();i++)
			{
				arr_c[h][w].setData(i,i);
				cout<<arr_c[h][w].getData(i)<<" ";
			}
			cout<<"]  ";
		}cout<<endl;
	}cout<<endl<<endl;


	//객체를 동적할당해보기
	MyArray *p_a = new MyArray; // default 
	MyArray *p_b = new MyArray(5); // size=5을 인자로 받는 객체
	delete p_a; delete p_b;

	//(default)객체 배열을 동적할당해보기
	MyArray *p_arr = new MyArray[2]; // default객체로 2개 생성
	delete [] p_arr;


	//(인자있는="size가 있는 배열")객체 배열을 동적할당해보기
	MyArray **pp_arr = new MyArray*[3];
	pp_arr[0] = new MyArray(5); // arrays[0]라는 포인터는 MyArray(100)주소를 넣는 포인터이다.
	pp_arr[1] = new MyArray(10);
	pp_arr[2] = new MyArray();

	cout<<"인자가 있는 객체를 동적할당"<<endl;
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<pp_arr[j]->getSize();i++)
		{
			pp_arr[j]->setData(i,i);
			cout<<pp_arr[j]->getData(i)<<" ";
		}cout<<endl;
	}cout<<endl;

	for(int i=0;i<3;i++) // 두번 지워줘야 함!!!
	{ 
		delete pp_arr[i]; 
	}
	delete [] pp_arr;


	return 0;
}