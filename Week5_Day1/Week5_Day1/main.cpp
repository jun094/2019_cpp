#include<iostream>

using namespace std;

#include "MyArray.h"

int main() 
{
	// Ŭ���� �����Ҵ�
	/*
	MyArray *arr1 = new MyArray();
	MyArray *arr2 = new MyArray(3); 
	MyArray *arr3 = new MyArray[5]; // Ŭ������ �迭�� --> 'Ŭ���� �迭'�� default���������׸� ����..! int���� ���ڸ� ������ �����ڸ� ����ϰ� �ʹٸ�???
	 �ؿ� arrays[3]
	delete arr1;
	delete arr2;
	delete [] arr3;
	*/
	///////////////////////////////////////////////////////////////////////////
	/*
	int n;
	cin>>n;
	
	MyArray arr(n); // �迭 ����� �������� ���� ���� �ִ�. 
	for(int i=0;i<arr.getSize();i++)
	{
		arr.setData(i,i*2);
	}

	for(int i=0;i<arr.getSize();i++)
	{
		cout<<i<<"��° index : "<<arr.getData(i)<<endl;
	}
	*/

	///////////////////////////////////////////////////////////////////////////
	// �������� ���� �޴� �����ڿ��� ������ �ִ� ���
	
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


	
	//�������� �ҷ���????
	MyArray *arrays = new MyArray[3]; // �̷��� ����� arrays�� �������̹Ƿ� default�����ڸ� �θ��� �ִ�.
	MyArray **arrays = new MyArray*[3]; // ���������� : �����͵��� �迭 -->  ���������� �����͵��� �迭�� �����ִ�. 
	arrays[0] = new MyArray(100); // arrays[0]��� �����ʹ� MyArray(100)�ּҸ� �ִ� �������̴�.
	arrays[1] = new MyArray(300);
	arrays[2] = new MyArray(1000);

	arrays[0]->getSize(); // �� ������ ���̴�?
	arrays[0]->setData(0,0); //


	//�ִ� �ᱹ ������ �迭�̴�..! 
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<arrays[j]->getSize();i++)
		{
			arrays[j]->setData(i,i*(j+1));
			cout<<i<< " : " << arrays[j]->getData(i) <<endl;
		}
	}

	
	for(int j=0;j<3;j++)
		delete arrays[j];  // �̷��� �ι��� �����־��������..? ���� x

	delete [] arrays; //�������� �迭�� �������Ѵ�. 
	
	return 0;
}