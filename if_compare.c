#include <stdio.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);

#if 1
	if( a > b)
		printf(">");
	else if(a==b)
		printf("==");
	else
		printf("<");	
#endif
	
	
	return 0;
}
