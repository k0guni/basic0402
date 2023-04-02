// 10장. 포인터(1)


//배열과 포인터 예제
/* 
#include <stdio.h>

void main()
{
    int M[] = {10,20,30,40,50}; 
    int sum = 0;
    int *p = M;

    while(p <= &M[4])
    {
        printf("p = %x, *p = %d \n", p, *p);
        sum += *p++;
        printf("누적 합계 : %d \n", sum);
    }
} */

//포인터 변수 직접 초기화
/* #include <stdio.h>

void main()
{
    char *c;
    int *i;
    int *f;

    c = 0x100;
    i = 0x200;
    f = 0x300;

    printf("c + 1 = %x \n", ++c);
    printf("i + 1 = %x \n", ++i);
    printf("f + 1 = %x \n", ++f);

} */

//포인터와 문자열
/* #include <stdio.h> 

void main()
{
    char *p;
    int i;

    p = "Welcome to Korea";

    for(i=0; i< 16; i++)
        printf("%c",*(p+i));
} */

//// 포인터와 문자열2
// #include <stdio.h>
// void main( ) 
// {
//     char *str = "KOREA";
//     int num = 0;
    
//     while(*str != '\0')
//     {
//         printf("%c \n", *str);
//         str++; num++;
//     }
//     printf("문자열 개수 : %d \n", num);
// }

//포인터와 문자열
#include <stdio.h>
void main( ) 
{
    char *p;
    p = "Welcome";
    while(*p != 'c') p++;
    printf("%s \n", p);
}