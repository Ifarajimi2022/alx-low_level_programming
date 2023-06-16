#include <stdio.h>
int main(void)
{
	printf("Size of a char: %1d byte(s)\n"sizeof(charType));
	printf("Size of an int: %1d byte(s)\n",sizeof(integerType));
	printf("Size of a long int: %1d byte(s)\n",sizeof(integerType));
	printf("Size of a long long int: %1d byte(s)\n",sizeof(integerType));
	printf("Size of a float: %1d byte(s)\n",sizeof(floatType));
	return (0);
}
