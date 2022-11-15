#include "main.c"

/**
 * main - func with infinite loop
 * @argc: argument to main
 * @argc: argument to main
 * Return: loop.
 **/
int main(int argc, char **argv)
{
	(void)argv:
	(void)argc:

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
