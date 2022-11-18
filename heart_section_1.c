#pragma warning(disable:4996)
#include <stdio.h>
#include <Windows.h>

int main()
{
	system("color 2");
	double x = 0.0, y = 0.0, f_y = 0.0;
	//   一行       行数编码  函数值   
	for (y = 2.0; y >= -2.0; y -= 0.05)
	{
		for (x = -2.0; x <= 2.0; x += 0.025)
		{
			double a = x * x + y * y - 1;
			f_y = a * a * a - x * x * y * y * y;
			putchar(f_y <= 0 ? '*' : ' ');
		}
		printf("\n");
	}
	return 0;
}
