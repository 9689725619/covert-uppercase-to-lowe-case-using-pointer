#include<stdio.h>
void mystrlwr(char*s);
int main()
{
	char ch[20];
	printf("enter any string :");
	gets (ch);
	mystrlwr(ch);
	printf("lower case string is");
	puts(ch);
	return 0;
	
}
void mystrlwr(char*s){
	while(*s!='\0'){
		*s=*s+32;
		s++;
	}
}
