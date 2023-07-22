#include<stdio.h>

int main(){
	// int n;
	// printf("Enter the value of n: ");
	// scanf("%d",&n);
	// if(n%2==0){
	// 	printf("Number is even\n");
	// }
	// else{
	// 	printf("Number is odd\n");
	// }
	
	char chr;
	printf("Enter the character n to check it as vowel or not\n");
	scanf("%c", &chr);
	
	if(chr=='a' || chr=='A' || chr=='E' || chr=='e' || chr=='i' || chr=='I' || chr=='i' || chr=='U' || chr=='u' || chr=='o'|| chr=='O'){
		printf("Character is vowel\n");
	}
	else
		printf("Character is not vowel\n");
}