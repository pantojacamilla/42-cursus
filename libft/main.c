#include "libft.h"
#include <stdio.h>

int main (void)
{
	char first[] = "AEI ";
	char last[] = "OU";
	int r;
	int size = 100;
	char buffer[size];

	strcpy(buffer,first);
	r = strlcat(buffer,last,size); //siezeof()

	puts(buffer);
	printf("Value returned: %d\n",r);

	 // r deveria ser igual ou menor que size pois isso representa que a string coube no buffer e não foi truncada
	 // r > que size significa que se tentou passar uma sting maior que o buffer destino, daí não vai mesmo
	if( r > size )
		puts("TRUNCADO");
	else
		puts("FULLY COPIED");

	return (0);
}
