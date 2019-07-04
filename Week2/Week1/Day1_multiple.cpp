#include<iostream>

void main()
{
	std::cout << "구구단\n";

	for (int i=1 ; i<= 9 ; i++)d
	{
		for (int j=1 ; j<= 9 ; j++)
		{
			std::cout << i << "*" << j << "=" << (i*j) << "\n";
				// (i*j)에 괄호치는 이유는 << 도 연산자 이므로 *와 우선수위를 따진다.
				// 물론 * 가 우선순위가 높아 안해도 되겠지만, () 해주는 습관을 가지자.

		}
		std::cout << "--------" << std::endl;
		//  std::endl == \n 과 동일하다. !!
	}

}

