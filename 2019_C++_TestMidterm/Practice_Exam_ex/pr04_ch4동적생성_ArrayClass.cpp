#include<iostream>

using namespace std;

#include"pr04_MyArray.h"

int main()
{
	MyArray a; // �⺻ �迭 ������ 10
	MyArray b(3); // ������ 3�� �迭

	cout<<"�Ѱ�¥�� ��ü ����"<<endl;
	for(int i=0;i<b.getSize();i++)
	{
		b.setData(i,i);
		cout<<b.getData(i)<<" ";
	}cout<<endl<<endl;

	MyArray arr_a[2]; // default ��ü(size 10��)�� ������(2��)

	cout<<"�迭 (default)��ü ����"<<endl;
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


	MyArray arr_b[2] = { MyArray(5), MyArray(6) }; // �����ִ� ��ü ������(2��)
	// �� ��� �ܿ���!!!!!!!!!!!!!!!!!!!!!!!!!!!
	cout<<"�迭 ��ü ����"<<endl;
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


	MyArray *p_arrB; // �������ִ� ��ü �������� ������ �Ѱ��� ǥ���ϱ�
	p_arrB = arr_b;

	cout<<"�ٷ� �� 2���� �迭��ü�� �����ͷ� ����Ű��"<<endl;
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
	cout<<"2���� �迭 ��ü ����"<<endl;
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


	//��ü�� �����Ҵ��غ���
	MyArray *p_a = new MyArray; // default 
	MyArray *p_b = new MyArray(5); // size=5�� ���ڷ� �޴� ��ü
	delete p_a; delete p_b;

	//(default)��ü �迭�� �����Ҵ��غ���
	MyArray *p_arr = new MyArray[2]; // default��ü�� 2�� ����
	delete [] p_arr;


	//(�����ִ�="size�� �ִ� �迭")��ü �迭�� �����Ҵ��غ���
	MyArray **pp_arr = new MyArray*[3];
	pp_arr[0] = new MyArray(5); // arrays[0]��� �����ʹ� MyArray(100)�ּҸ� �ִ� �������̴�.
	pp_arr[1] = new MyArray(10);
	pp_arr[2] = new MyArray();

	cout<<"���ڰ� �ִ� ��ü�� �����Ҵ�"<<endl;
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<pp_arr[j]->getSize();i++)
		{
			pp_arr[j]->setData(i,i);
			cout<<pp_arr[j]->getData(i)<<" ";
		}cout<<endl;
	}cout<<endl;

	for(int i=0;i<3;i++) // �ι� ������� ��!!!
	{ 
		delete pp_arr[i]; 
	}
	delete [] pp_arr;


	return 0;
}