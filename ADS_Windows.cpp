#include<windows.h>
#include<stdio.h>

int main(int argc,char* argv[])
{
HANDLE hStream=CreateFile("sample.txt:my_stream",GENERIC_WRITE,FILE_SHARE_WRITE,NULL,OPEN_ALWAYS,0,NULL);
if(hStream==INVALID_HANDLE_VALUE)
	{
		printf("Cannot open sample.txt:my_stream\n");
	}
else
	{
		WriteFile(hStream,"Can you find me, I am hidden!!",31,0,NULL);
	}
}
 
