#include<iostream> //input, output stream
// c++������ .h�� ������ ������. 
// c������ .h�� ������.

#include<cstdio> //#include<stdio.h>
#include<cmath> // #include<math.h>


/*
int printf(const char *); // �Լ� �̸� ����
// �Լ��� ������ Ÿ�� : �Լ� ������Ÿ��(int), �̸�(printf), ����(char *)
*/


/*
// namespace
namespace kim {
// kim��� ���� ���� �ִ� ���̵�..

	int i;
	int j;
}
*/


int main() // entry point 
{
	//printf("hello world !\n");
	std::cout << "hellow world\n"; 
	//printf�� ���Ͱ��� �Լ��� �Ͱ� �޸� cout�� �Լ��� �ƴ�
	// �Լ����� ()�� �ʿ��ϴ�. �׷��� cout ���� ���� ���� �����̴�. -> ��������
	// cout�� consol�� ��� -> �ܼ��� ���� â

	// '<<'�� ������ ������ �̾��ִ� �� -> shift ������
	int a = 10; // 2������ 1010
	int b = a << 1; // ���� shift�����ڴ� 2������ �������� �̴� ���� �ǹ� ����, 10100 = 20

	std::cout << b << "\n" ; // �׷���, c++���� <<�� ������ �Ǿ���. 
							 // "cout�� b�� ������" ==  "���� �ܼ�â�� b�� ������"
							 // c++ ������ �̷������� +,-,* ���� �����ڸ� �������� �� �ִ�.
							 // << �����ڴ� cout�� �������� ������ �� ���̴�..

	std::cout << b << a << "\n"; // �̷��� �̾ �� �� ���ִ�. 



	// '::' �� ~�� �ҼӵǾ� �ִ�. ��� ��
	// cout�� std�� �ҼӵǾ� �ִ�. -> std�� '��' cout�� '�̸�'
	//kim::i = 10; // std:: ����  -> std:: �� namespace�� �ǹ��Ѵ�.




	return 0;
}