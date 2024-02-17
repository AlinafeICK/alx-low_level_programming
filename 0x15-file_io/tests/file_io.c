#include <stdio.h>

int main ()
{
	FILE *fp; //file pointer
	char text[] = "This is text for my created file.";

	//file opening code for writing
	fp = fopen("myfile.txt", "w");

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

	printf("Data written to the file successfully.\n");

	return (0);
}
