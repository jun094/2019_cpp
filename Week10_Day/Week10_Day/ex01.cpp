#include<iostream>

using namespace std;

// main�� �����Ǿ�����
// �̺�Ʈ �ڵ鷯 �κи� �ٲ�
// �ڵ鷯 ���뵵 ��ǻ� �����Ǿ� �ְ� cout�κи� �ٲ���


void procedure(int msg) // �̺�Ʈ �ڵ鷯 �κ� -> �߿��ϴϱ� �ۿ� ������
						// �̺κи� ��� �ٲ���
{
	switch(msg)
		{
		case 1: cout<<"sejong university"<<endl; 
			break;
		case 2: cout<<"software dept"<<endl; 
			break;
		case 3: cout<<"bye"<<endl;
			exit(0);
		default :
			break;
		}
}

int main()
{
	while(true) //
	{
		int i;

		cout<<"input: ";
		cin>>i;

		//switch�ڸ� (�ڵ鷯 �ڸ�) -> �ۿ� �M
		procedure(i);

	}

	return 0;
}

