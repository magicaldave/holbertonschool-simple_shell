#include "shell.h"

void freestuff(char **split, int *wc, char *buf)
{
	int i;

	if (buf)
		free(buf);

	if (split && *split)
	{
		for (i = 0; i < *wc; i++)
		{
			free(split[i]);
			split[i] = NULL;
		}
		free(split);
		split = NULL;
	}
}