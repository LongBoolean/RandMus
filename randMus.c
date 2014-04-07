#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	//create data file
	FILE *f = fopen("lastSong.txt", "w");	
	if(f==NULL)
		return 0;
	int num = 6;
	srand(time(NULL));
	int a[num];
	int i;
	for(i=0;i<num;i++)
	{
		a[i] = rand() % 50 + 1;
		//since all output is piped into another program to make the sound, regular printf won't work
		//instead we need to write to a file that can be read in another terminal instance
		fprintf(f,"a[%d]: %d\n", i, a[i]);
	}
	fclose(f);
	for(i=0;;i++)
	{	
		//this is where all the magic happens
		putchar(((i*(i>>a[0]|i>>a[1])&a[2]&i>>a[3]))^(i&i>>a[4]|i>>a[5]));
	} 
	return 0;
}
