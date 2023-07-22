#include<stdio.h>

struct job
{
    char name[32];
    double salary;
}u={"roshan",99};


int main(){
    printf("%s\n",u.name);
    printf("%s\n",u1.name);
    printf("%f\n",u.salary);
    printf("%f\n",u1.salary);
    printf("%d\n",sizeof(u));
    printf("%d\n",sizeof(u1));
    return 0;
}