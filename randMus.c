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
		fprintf(f,"a[%d]: %d\n", i, a[i]);
	}
	fclose(f);
//	system("gnome-terminal  \"cat lastSong.txt\"");
	for(i=0;;i++)
	{		
		putchar(((i*(i>>a[0]|i>>a[1])&a[2]&i>>a[3]))^(i&i>>a[4]|i>>a[5]));
	} 
	return 0;
}
