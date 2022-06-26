#include "rsa.h"

/**
 * main - main file
 * Factorize all the things!
 * @argc: number of type int
 * @argv: array of type
 * Return: 0
 */

int main(int argc, char *argv[])
{
	FILE *rd_f /*__attribute__((unused))*/;
	unsigned long int buf;
	size_t len = 0;
	ssize_t nread;
	char *buffer = NULL, *ptr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Good Syntax: ./program file\n");
		exit(97);
	}
	rd_f = fopen(argv[1], "r");
	if (rd_f == NULL)
	{
		printf("Failed to open file and read it.\n");
		exit(1);
	}
	/*buf = malloc(sizeof(int));*/
	while ((nread = getline(&buffer, &len, rd_f)) != -1)
	{
		fwrite(buffer, nread, 1, stdin);
		buf = strtol(buffer, &ptr, 10);
		/*printf("size of= %ld\n", sizeof(buf));*/
		factor(buf);
	}
	fclose(rd_f);
	free(buffer);
	/*printf("Value of *ip variable: %d\n", buf);
	factor(buf);*/
	exit(EXIT_SUCCESS);
}
