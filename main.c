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
	unsigned long long int buf __attribute__((unused));
	size_t len = 0;
	ssize_t nread;
	char *buffer = NULL, *ptr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Good Syntax: ./program file\n");
		exit(97);
	}
	rd_f = fopen(argv[1], "r");
	if (!rd_f)
	{
		printf("Failed to open file and read it.\n");
		exit(1);
	}
	while ((nread = getline(&buffer, &len, rd_f)) != -1)
	{
		fwrite(buffer, nread, 1, stdin);
		factor(strtol(buffer, &ptr, 10));
	}
	fclose(rd_f);
	free(buffer);
	exit(EXIT_SUCCESS);
}
