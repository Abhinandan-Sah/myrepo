// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// void main()
// {
// 	// FILE *fptr;
// 	// char c;
// 	// // clrscr();
// 	// fptr=fopen("a.txt","w");
// 	// printf("Enter the line of text,press ^z to stop ");
//     //     while((c=getc())!=EOF)
//     //     {
// 	//          putc(c,fptr);
//     //     }
// 	// fclose(fptr);

// //     FILE *fp;
// // char name[20],arr[50];
// // printf("enter the file name");
// // scanf("%s",name);
// // fp=fopen(name,"w");
// // if(fp == NULL)
// // {
// // printf("file can’t be opened");
// // exit(0);
// // }
// // else
// // {
// // printf("the string is ");
// // fputs(arr,fp);
// // gets(arr);

// // }
// // fclose(fp);
// // FILE  *fp;
// // char name[10];
// // fp=fopen("rec.dat","w");
// // printf("enter your name");
// // scanf("%s",name);
// // fprintf(fp,"%s",name);
// // fclose(fp);


// }


// #include <stdio.h>   
// #include <conio.h>   
// int main()  
// {  
//        printf(" Passed value by the User is: %c", getch()); // print a character entered by the user  
//     return 0;  
// }  

// #include <stdio.h>  
// #include <conio.h>   
// int main()  
// {  
//    printf("Enter a key to exit the console screen.\n");  
//    getch();   
//    return 0;  
// }  

// #include <stdio.h>   
// #include <conio.h>   
// int main() {      
//     char ch[6] = {0}; int x;  
//     for ( x = 0; x < 5; x++) {  
//         ch[x] = getch(); // getch() function to take input  
//     }  
//     printf("Received 5 character Input: %s\n", ch);  
//     return 0;  
// }

// #include<stdio.h>  
// #include<string.h>  
// #include<dos.h>  
// #include<conio.h>  
// void main()  
// {  
//     char pw[10];  
//     int x;  
//     printf(" Enter password: ");  
//     for (x = 0; x < 10; x++)  
//     {  
//         // accepts the hidden password using the getch() function  
//         pw[x] = getch();  
//         printf("*"); // print the input chartered in the form of *  
//     }  
//     pw[x] = '\0';  
//     printf( "\n" );  
// printf(" You have passed the hidden password: ");  
//     for (x = 0; pw[x] != '\0'; x++)  
//     {  
//         printf("%c", pw[x]);  
// }  

// printf("\n The output: ", pw[10]);
// getch();  
//     for (x=0; x<10;x++){
//         gets(pw);
//     }
//     pw[x]='\0';

//     printf("%s", pw);

// }  

#include<stdio.h>

#include<stdlib.h>
#include<conio.h>
// struct student
// {
// 	int rollno;
// 	char name[20];
// };
// void main()
// {
// 	// struct student st;
// 	// FILE *fptr;
// 	// fptr=fopen("d.txt","w");
// 	// // clrscr();
// 	// printf("enter roll number");
// 	// scanf("%d",&st.rollno);
// 	// printf("enter name");
// 	// gets(st.name);
// 	// fwrite(&st,sizeof(st),1,fptr);
// 	// fclose(fptr);
// 	// getch();
// }

// int main()
// {
// FILE *fp;
// char ch;
// fp=fopen("text","r");
// fseek(fp,241l,0);
// ch=fgetc(fp);
// while(!feof (fp))
// {
// printf("%c",ch);
// printf("%d",ftell(fp));
// ch=fgetc(fp);
// }
// fclose(fp);

// return 0;
// }

//  #include <stdio.h>
//     int main()
//     {
//         int a = 10;
//         double b = 5.6;
//         int c;
//         c = a + b;
//         printf("%d", c);
//         return 0;
//     }

// #include <stdio.h>
//     int main()
//     {
//         int a=1,b=1,c;
//         c = a++ + b;
//         printf("%d,%d,%d", a,b,c);
//         return 0;
//     }

// #include <stdio.h>
//     int main()
//     {
//         int d, a = 1, b = 2;
//         d =  a++ + ++b;
//         printf("%d %d %d", d, a, b);
//         return 0;
//     }

    // int main()
    // {
    //     int i = 0;
    //     int x = i++;
    //     int y = ++i;
    //     printf("%d % d\n", x, y);
    //     return 0;
    // }


    // #include <stdio.h>
    // int main()
    // {
    //     int x = 4, y, z;
    //     y = --x;
    //     z = x--;
    //     printf("%d%d%d", x,  y, z);
    //     return 0;
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int a=1,b=2,c;
    //     c=a>b;
    //     printf("\n%d",c);
    //     return 0;
    // }

// #include <stdio.h>
//     int main()
//     {
//         int a=1,b=2;
//         printf("\n%d",a!=b);
//         return 0;
//     }

// #include <stdio.h>
//     int main()
//     {
//         int a = 10, b = 5, c = 5;
//         int d;
//         d = b + c == a;
//         printf("%d", d);
//         return 0;
//     }

// #include <stdio.h>
//     int main()
//     {
//         int a = 10, b = 0,c;
//         c=a&&b;
//         printf("%d",c);
//     }

//  #include <stdio.h>
//     int main()
//     {
//         int a = 10, b = 0,c=2,d;
//         d=a&&b||c-2;
//         printf("%d",d);
//     }

    // #include <stdio.h>
    // int main()
    // {
    //     int x = 1, y = 0, z = 5;
    //     int a = x && y || z++;
    //     printf("%d", z);
    //     return 0;
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int x = 1, y = 0, z = 5;
    //     int a = x && y && z++;
    //     printf("%d", z);
    //     return 0;
    // }

//     #include<stdio.h>
// int main()
// {
// int a=10,b=5;
// printf("%d",a&b);
// return 0;
// }


// #include<stdio.h>
// int main()
// {
// int a=7,b=5;
// printf("%d",a|b);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
//     printf("Create a new line\n");
// printf("Print a double quotes (\") within a string\n");
// printf("Print a single quotes (\') within a string\n");
// printf("Print a Backslash\\ within a string\n");
// printf("Using\tTab within a string\n");

// }

    // #include <stdio.h>
    // int main()
    // {
    //     int b = 5 + 7 * 4 - 9 * (3, 2);
    //     printf("%d", b);
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int b = 4 * 6 + 3 * 4 < 3 ? 4 : 3;
    //     printf("%d\n", b);
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int a = -1, b = 4, c = 1, d;
    //     d = ++a && ++b || ++c;
    //     printf("%d, %d, %d, %d\n", a, b, c, d);
    //     return 0;
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int x = 5;
    //     if (x < 1)
    //         printf("hello");
    //     if (x == 5)
    //         printf("hi");
    //     else
    //         printf("no");
    //     return 0;
    // }

    //     #include <stdio.h>
    // int main()
    // {
    //     int x = 0;
    //     if (x == 0)
    //         printf("hi");
    //     else
    //         printf("how are u");
    //         printf("hello");
    //     return 0;
    // }

    //    #include <stdio.h>
    // int main()
    // {
    //     int x = 5;
    //     if (x < 1);
    //         printf("Hello");
 
    // }

// #include<stdio.h>
// int main()
// {
// float x=2.3;
// if(x==2.3)
// {
// printf("Hi");
// }
// else
// {
// printf("Hello");
// }
// printf("%f", x);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int x=-1;
// if(x)
// {
// printf("Hi");
// }
// else
// {
// printf("Hello");
// }
// return 0;
// }

    // #include <stdio.h>
    // int main()
    // {
    //     float f = 0.1;
    //     if (f == 0.1)
    //         printf("True");
    //     else
    //         printf("False");
    //     return 0;
    // }

// #include <stdio.h>
//     int main()
//     {
//         int x = 1;
//         if (x > 0)
//             printf("inside if\n");
//         else if (x > 0)
//             printf("inside elseif\n");
//     }

//  #include <stdio.h>
//     int main()
//     {
//         int x = 0;
//         if (x++)
//             printf("true\n");
//         else if (x == 1)
//             printf("false\n");
//     }

    // #include <stdio.h>
    // int main()
    // {
    //     int x = 0;
    //     if (x == 0)
    //         printf("true, ");
    //     else if (x = 10)
    //         printf("false, ");
    //     printf("%d\n", x);
    //     return 0;
    // }

    //     int main()
    // {
    //     int x = 0;
    //     if (x == 1)
    //         if (x >= 0)
    //             printf("true\n");
    //         else
    //             printf("false\n");
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int x = 0;
    //     if (x == 1)
    //         if (x == 0)
    //             printf("inside if\n");
    //         else
    //             printf("inside else if\n");
    //     else
    //         printf("inside else\n");
    //     return 0;
    // }

    //  #include <stdio.h>
    // int main()
    // {
    //     int ch;
    //     printf("enter a value between 1 to 2:");
    //     scanf("%d", &ch);
    //     switch (ch)
    //     {
    //        case 1:
    //           printf("1");
    //           break;
    //        case 2:
    //           printf("2");
    //           break;
    //     }
    //     return 0;
    // }

    //     #include <stdio.h>
    // int main()
    // {
    //     int ch;
    //     printf("enter a value between 1 to 2:");
    //     scanf("%d", &ch);
    //     switch (ch)
    //     {
    //        case 1:
    //           printf("1 ");
    //        default:
    //           printf("2");
    //     }
    //     return 0;
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int ch;
    //     printf("enter a value between 1 to 2:");
    //     scanf("%d", &ch);
    //     switch (ch)
    //     {
    //        case 1:
    //           printf("1 ");
    //           printf("hi");
    //           break;
    //        default:
    //           printf("2\n");
    //     }
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int x = 97;
    //     switch (x)
    //     {
    //        case 'a':
    //           printf("yes ");
    //           break;
    //        case 97:
    //           printf("no");
    //           break;
    //     }
    // }

    // #include <stdio.h>
    // int main()
    // {
    //     int a = 1;
    //     switch (a)
    //     {
    //        case a:
    //           printf("Case A ");
    //        default:
    //           printf("Default");
    //     }
    //    return 0;
    // }

    //     #include <stdio.h>
    // int main()
    // {
    //     int i = 0;
    //     while (++i)
    //     {
    //         printf("H");
    //     }
    //     return 0;
    // }

//     #include <stdio.h>   
// int main() 
// { 
//   int i;   
//   for (i = 1; i != 10; i += 2) 
//     printf("Hello"); 
//   return 0; 
// }

// #include<stdio.h>
// int main()
// {
// int i;
// for(i=1;i<10;i++);
// printf("%d",i);
// return 0;
// }

    // #include <stdio.h>
    // int main()
    // {
    //     do
    //         printf("In while loop ");
    //     while (0);
    //         printf("After loop\n");
    //     return 0;
    // }

    //     int main()
    // {
    //     int i = 0;
    //     do {
    //         i++;
    //         printf("In while loop\n");
    //     } while (i < 3);
    //    return 0;
    // }

//     #include<stdio.h>
// int main()
// {
// int a[5],i;
// for(i=0;i<5;i++)
// {
// a[i]=i;
// }
// printf("%d",a[2]);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int a[5]={11,22,33,44,55};
// a[2]=a[1];
// a[3]=a[2];
// a[4]=a[3];
// printf("%d",a[4]);
// return 0;
// }

// #include<stdio.h>


// int main(){
// int a[5] = {5, 1, 15, 20, 25};
// int i=2;
// printf("%d",a[++i]);
// return 0;
// }






// #include<stdio.h>
// int main()
// {
// int a[5] = {5, 1, 15, 20, 25};
// int i, j, m;
// i  = ++a[1];
// j = a[1]++;
// m = a[i++];
// printf("%d %d %d",i,j,m);
// return 0;
// }

// int main() 
// { 
//  float marks[3] = {90.5, 92.5, 96.5}; 
//  int a=0;  
//  while(a<3) 
//  { 
//  printf("%.2f ", marks[a]); 
//  a++; 
//  } 
// return 0;
// }

// #include<stdio.h>
// void process(int[],int);
// int main()
// {
// int a[5] = {15, 3, 10, 4, 6};
// process(a,5);
// printf("%d",a[0]+a[1]);
// return 0;
// }
// void process(int x[],int z)
// {
//     int i;
//     for(i=0;i<z;i++)
//     {
//         if(x[i]%5==0)
//         {
//             x[i]=-1;
//         }
//     }
// }

// #include<stdio.h>
// int main()
// {
// float x=12.6784;
// printf("%.3f",x);
// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// double x=3.456;
// printf("%lf",floor(x));
// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// double x=3.001;
// printf("%lf",ceil(x));
// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// double x=10.12,y=7.0;
// printf("%lf",x%y);
// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main()
// {
// int x;
// x=printf("ABC");
// printf(" %d",x);
// return 0;
// }

//     #include <stdio.h>
//     void m()
//     {
//         printf("hi");
//     }
//  int main()
//     {
//         m();
//         return 0;
//     }

// void my_recursive_function(int n)
// {
//     if(n == 0)
//     return;
//     printf("%d ",n);
//     my_recursive_function(n-1);
// }
// int main()
// {
//     my_recursive_function(5);
//     return 0;
// }

// #include <stdio.h>
// int fun(int x, int y) 
// {
//   if (x == 0)
//     return y;
//   return fun(x - 1,  x + y);
// } 

// int main()
// {
//    printf("%d ", fun(4,3));
//    return 0;
// }

// #include <stdio.h>
//     int x = 5;
//     void m();
//     void n();
//     int main()
//     {
//         int x = 3;
//         m();
//         printf("%d", x);
//         return 0;
//     }
//     void m()
//     {
//         x = 8;
//         n();
//     }
//     void n()
//     {
//         printf("%d", x);
//     }

// #include <stdio.h>
//     int main()
//     {
//         int x=1;
//         {
//             x=2;
//             {
//                 int x=3;
//             }
//         }
//         printf("%d",x);
//         return 0;
//     }

// #include<stdio.h>
// int main()
// {
// register int a;
// printf("\nEnter value of a:");
// scanf("%d",&a);
// return 0;
// }

// #include<stdio.h>
// int incr(int i)
// {
//    static int count = 0;
//    count = count + i;
//    return (count);
// }
// int main()
// {
//    int i,j;
//    for (i = 0; i <=2; i++)
//       j = incr(i);
//       printf("%d",j);
// return 0;
// }

// #include<stdio.h>
// void update();
// int main()
// {
// update();
// update();
// return 0;
// }
// void update()
// {
//     auto int a=1;
//     static int b=1;
//     a++;
//     b++;
//     printf("%d,%d\n",a,b);
// }

// #include<stdio.h>
// int main()
// {
// extern int a;
// printf("%d",++a);
// return 0;
// }
// int a;

// #include<stdio.h>
// struct employee
// {
// 	char name[20];
// 	int roll_no;
// 	float salary;
// };
// int main()
// {
// 	struct employee e1={"Smith"};
// 	printf("%f",e1.salary);
// 	return 0;
// }

// #include<stdio.h>
// struct book
// {
// 	char b_name[50];
// 	int no_of_pages;
// 	float price;
// };
// int main()
// {
// 	struct book b1={"Programming"};
// 	printf("%d",b1.no_of_pages);
// 	return 0;
// }

// #include<stdio.h>
// struct student
// {
// 	char name[20];
// 	int roll_no;
// 	float fees
// }v1={"Goerge",23,4500.45},v2={"Tom",45,3400.56};
// int main()
// {
// printf("%d",v2.roll_no);
// return 0;
// }

// #include<stdio.h>
// struct student
// {
// 	char name[20];
// 	int roll_no;
// 	float fees
// }v1={"Goerge",4500.45};
// int main()
// {
// printf("%d",v1.roll_no);
// return 0;
// }

// #include<stdio.h>
// struct student
// {
// 	int a=10;
// }v1;
// int main()
// {
// printf("%d",v1.a);
// return 0;
// }

// #include <stdio.h>
//     int main()
//     {
//         int *ptr, a = 10;
//         ptr = &a;
//         *ptr += 1;
//         printf("%d,%d", *ptr, a);
//     }

// int x = 0;
//     int main()
//     {
//         int *ptr = &x;
//         printf("%p\n", ptr);
//         x++;
//         printf("%p\n ", ptr);
//     }

// #include <stdio.h>
//     int main()
//     {
//         int x=10;
//         int *p1=&x,*p2;
//         *p1=x+3;
//         p2=p1;
//         *p2=*p1+2;
//         printf("%d",x);
//         return 0;
//     }

    // #include <stdio.h>
    // int main()
    // {
    //     int i = 10;
    //     void *p = &i;
    //     printf("%d\n", *(int*)p);
    //     return 0;
    // }

    // #include <stdio.h>
    // int x = 0;
    // void main()
    // {
    //     int *const ptr = &x;
    //     printf("%p\n", ptr);
    //     ptr++;
    //     printf("%p\n ", ptr);
    // }

//     #include <stdio.h>
//  void foo(int *p)
//     {
//         int j = 2;
//         p = &j;
//         printf("%d ", *p);
//     }
//     int main()
//     {
//         int i = 97, *p = &i;
//         foo(&i);
//         printf("%d ", *p);
//     }

    // #include <stdio.h>
    // void m(int *p, int *q)
    // {
    //     p=q;
    //     *p=8;
    //     *q=7;
    // }
    // int main()
    // {
    //     int a = 6, b = 5;
    //     m(&a, &b);
    //     printf("%d %d\n", a, b);
    // }

// #include<stdio.h>
// int main()
// {
// 	int arr[]={1,2,3,4,5};
// 	int i;
// 	int *p;
// 	p=arr;
// 	printf("\n First value is:%d",*p);
// 	p=p+1;
// 	printf("\n Second value is:%d",*p);
// 	*p=45;
// 	p=p+2;
// 	*p=-2;
// 	printf("\n Modified array is:");
// 	for(i=0;i<5;i++)
// 	{
// 		printf("\n%d",arr[i]);//We can also write i[arr]
// 	}
// 	p=arr;
// 	*(p+1)=0;
// 	*(p-1)=1;
// 	printf("\n Modified array is:");
// 	for(i=0;i<5;i++)
// 	{
// 		printf("\n%d",*(p+i));//We can also write *(i+arr)
// 	}
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
// 	 int a[]={1,2,3,4};
// 	 int *p=a,i;
// 	 p++;
// 	 *(p+1)=29;
// 	 p=p+1;
// 	 *p=23;
// 	 p--;
// 	 *(p+0)=12;
// 	 p=a;
// 	 for(i=0;i<4;i++)
//            printf("%d ",*(p+i));
// 	return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	 int a[]={1,2,3,4};
// 	 int *p1=a,i;
// 	 int *p2=&a[2];
// 	 p2--;
// 	 *(p2-1)=90;
// 	 p1=p2;
// 	 *p1=100;
// 	 for(i=0;i<4;i++)
//      printf("%d ",a[i]);
// 	 return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	//  char ch[]="abcdef";
//      printf(5+"abcdefghi");
// 	 return 0;
// }

// #include<stdio.h>
// int main()
// {
//      int a[]={1,2,3,4};
//      int *p=a;
//      *(p+1)=*(p+2);
//      printf("\n%d",a[2]);
//      return 0;
// }

// #include<stdio.h>
// int main()
// {
// char str[]="Practice MCQ";
// printf("\n%d",sizeof(str));
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// char str[]="Program";
// printf("%c",str[7]);
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// char str1[]="Good";
// char str2[5];
// str2=str1;
// printf("%s",str2);
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char str[20]="Example";
// printf("%d %d",sizeof(str),strlen(str));
// return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[20] = "Hello", str2[20] = "World";
//     printf("%s\n", strcpy(str2, strcat(str1, str2)));
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char str1[20],str2[10];
// 	printf("\n Enter first string:");
// 	gets(str1);
// 	printf("\n Enter second string:");
// 	gets(str2);
// 	strcat(str1,str2);
// 	printf("\n String after concatenation:%s",str1);
// 	return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char str1[20],str2[10];
// 	int n;
// 	printf("\n Enter first string:");
// 	gets(str1);
// 	printf("\n Enter second string:");
// 	gets(str2);
// 	printf("\n Enter number of characters you want to combine:");
// 	scanf("%d",&n);
// 	strncat(str1,str2,n);
// 	printf("\n String after concatenation:%s",str1);
// 	return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	//strcpy function
// 	char ori[20],dup[20];
// 	char *z;
// 	printf("\n Enter your name:");
// 	gets(ori);
// 	z=strcpy(dup,ori);
// 	printf("Original String is:%s",ori);
// 	printf("\nDuplicate String is:%s",dup);
// 	printf("\n Value of z is:%s",z);
// 	return 0;
// }

// #include <stdio.h>
// int main() 
// { 
//   char q[] = "string1"; printf("%c", *++q);
//   return 0; 
// }

// #include <stdio.h>
// int main()
// {
//     char *str1 = "Hello";
//     char str2[] = "Hello";
//     printf("sizeof(str1) = %d, sizeof(str2) = %d",sizeof(str1), sizeof(str2));
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char *str="WORLD";
//     while(*++str)
//     {
//         printf("%c",*str);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char *str="WORLD";
        
//         printf("%s",str);
    
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	char x[]="99";
// 	int i;
// 	i=atoi(x);
// 	printf("%d",i);
// 	return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	long int i;
// 	char x[]="10000000";
// 	i=atol(x);
// 	printf("%ld",i);
// 	return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// 	int a=123;
// 	char str[100];
// 	itoa(a,str,2);
// 	printf("\n Binary value:%s",str);
// 	itoa(a,str,10);
// 	printf("\n Decimal value:%s",str);
// 	itoa(a,str,16);
// 	printf("\n Hexadecimal value:%s",str);
// 	itoa(a,str,8);
// 	printf("\n Octal value:%s",str);
// 	return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    // int *ptr1, *ptr2;
    // ptr1 =malloc(4);
    // int x=30, *y, *z;
    // y=&x;
    // z=y;
    // *y++=*z++;
    // x++;
    // printf("%d, %d, %d", x, y, z);

    int x=0;
    for(x++; x==1; x=2){
        printf("hi");
    }

return 0;
}

