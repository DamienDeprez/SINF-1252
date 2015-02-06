#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	// affiche sur la sortie standard Hello World!

	// #define DEBUG

	#ifdef DEBUG
	printf("debug\n");
	#endif
	printf("Hello World!\n");
	return (EXIT_FAILURE);
}
