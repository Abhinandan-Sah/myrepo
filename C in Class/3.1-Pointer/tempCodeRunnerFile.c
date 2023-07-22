    #include <stdio.h>
    int main()
    {
        int x=10;
        int *p1=&x,*p2;
        *p1=x+3;
        p2=p1;
        *p2=*p1+2;
        printf("%d",x);
        return 0;
    }