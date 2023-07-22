#include<stdio.h>
int main()
{
	char s[10];
    // scanf("%s",s);  //It terminate when it found space
    scanf("%[^o]s",s); //It terminate at o and will not print o. Take the input until "o" is not encounter
    // gets(s);    //It takes input 
    printf("%s",s);

	return 0;
}