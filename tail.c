#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{
	int ogon = atoi(argv[1]);
	char* string = (char*)malloc(sizeof(char)*ogon);
	char c;
	c = getc(stdin);

	if (string== NULL)
	{
		return -1;
	}
	while (c != EOF)
	{
		int znak = 0;
		c = getc(stdin);
		string[znak] = c;
		znak++;
	}

	int len = strlen((string)+1);

	for(int i = len-ogon; string[i]!=EOF ; i++)
	{
		printf("%c", string[i]);
	}
	free(string);
	return 0;
}


