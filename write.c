#include<stdio.h>
#include<conio.h>

main()
{
FILE *fp;
int i=0;
char ch[10];

//READING
fp = fopen("scratch.txt","r");
for(i=0;i<10;i++)
//while(ch != '\0')
	{
		ch[i] = getc(fp); // reading characters from file
	}
	
strrev(ch); // REVERSING
printf("%s",ch); // PRINTING
fclose(fp); // CLOSE THE POINTER

//WRITING

fp = fopen("scratch_rev.txt","w");
fprintf(fp,"%s",ch); // PRINTING SENTENCE IN FILE
printf("\n\n--REVERSE PRINTED IN ANOTHER FILE--");
fclose(fp);
}
