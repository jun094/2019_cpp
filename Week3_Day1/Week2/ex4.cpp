#include<iostream>

using namespace std;

void  func (int a[]) //�迭�� �������� �ݵ�� �̷��� �Ἥ �޾�����
{

}

void  func2 (int a[][5]) //2���� �迭�� �̷��� ������ ( ��, �� �������� ���������� �ݵ�� ���־�� �Ѵ�..!!!!!)
{

}

void  func3 (int a[][2][6]) //3���� �迭 ���� �� ���������� �߿�
{

}

void func4(char * c)
{
	cout<<c<<endl;
}
int main()
{
	int n[10];
	int m[2][5];
	int l[3][2][6];

	char c[100]="��ö��";
	//c="��ö��";

	func(n);
	func2(m);
	func3(l);
	func4(c);

	return 0;
}