#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	for (int j=1 ; j<= 9 ; j++)
	{
		for (int i=1 ; i<= 9 ; i++)
		{
			cout.setf(ios::left);
			//setf() #include<iomanip>�� ��ǥ�Ǿ��ִ� �Լ��̴�.
			//���������� ���ش�.

			cout <<i<<"x"<<j<<"="<<setw(3)<<(i*j);
			//setw() #include<iomanip>�� ��ǥ�Ǿ��ִ� �Լ��̴�.
			//setw()�� �����Ͱ� ��� �� ȭ���� ������ ����ŭ ���� �������ش�.

			// (i*j)�� ��ȣġ�� ������ << �� ������ �̹Ƿ� *�� �켱������ ������.
			// ���� * �� �켱������ ���� ���ص� �ǰ�����, () ���ִ� ������ ������.
		}
		cout << endl;
	}
	return 0;
}

