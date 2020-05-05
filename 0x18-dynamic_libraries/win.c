#include <stdio.h>
int rand(void)
{
	static int cont = 0;
	int easy_win[] = {8, 83, 82, 84, 98, 149};

	/*9 8 10 24 75 9*/
	return (easy_win[cont++]);
}
