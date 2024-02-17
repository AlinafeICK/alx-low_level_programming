#include <stdio.h>

int main ()
{
	FILE *fp; //file pointer
	char text[] = "This is text for my created file.\n ";

	//file opening code for writing
	fp = fopen("myfile.txt", "a");

	//check if file opened successfully
	if (fp == NULL)
	{
		printf("Error opening file.\n");
		return (-1);
	}

	//write text to the file
	fprintf(fp, "%s", text);

	//Close the file
	fclose(fp);

	printf("Data appended to the file successfully.\n");

	return (0);
}
