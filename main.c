#include "shell.h"

/**
*main - an interractble shell
*@argc: number of arguments
*@argv: lit of arguments
*Return: 0 works well // -1 if error
*/
int main(int argc, char const *argv[])
{
	(void)argc;

	if (!isatty(fileno(stdin)))
	{

		return (0);
	}
	while (1)
	{

	}
	return (0);
}