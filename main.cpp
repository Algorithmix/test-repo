#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	char mystring[] = "hello_everyone";
	char * start, * end, temp;
	int stringlength = strlen(mystring)-1;

	start = mystring; //points to the first character in mystring
	end = mystring + stringlength;

	while (end>start)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		*start++;
		*end--;
	}



	return 0;
}