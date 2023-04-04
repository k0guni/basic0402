//3장_데이터 처리 p8

//ex3_2.cpp (관계 연산자)

/* #include <iostream>
using namespace std;

int main(void)
{
    int a = 3, b =5;
    char e = 'E', f = 'E';
    cout<<"a>b-->"<<(a > b) << endl;
    cout<<"a<b-->"<<(a < b) << endl;
    cout<<"a==b-->"<<(a == b) << endl;
    cout<<"a!=b-->"<<(a != b) << endl;
    cout<<"a<=b-->"<<(a <= b) << endl << endl;

    cout<<"e>f-->"<<(a > b) << endl;
    cout<<"e<f-->"<<(a < b) << endl;
    cout<<"e==f-->"<<(a == b) << endl;
    cout<<"e!=f-->"<<(a != b) << endl;
} */

//ex3_4.cpp (비트 처리 논리 연산자)

/* #include <iostream>
using namespace std;

int main(void)
{
    unsigned short a = 0x1234, b = 0x5678, m = 0xff00, c,d,e,f;

    c = a&m;
    d = b& ~m;
    e = c|d;
    f = m ^ ~m;

    printf("%04x\n", c);
    printf("%04x\n", d);
    printf("%04x\n", e);
    printf("%04x\n", f);
} */

//ex3_5.cpp (논리적 shift)
/* #include <iostream>
using namespace std;

int main(void)
{
    unsigned short a = 0x8006, b = 0x0007;
    unsigned short c, d, e, f;

    c = a>>1;
    d = b>>1;
    e = a<<1;
    f = b<<1;

    printf("a = %08x, %u\n", a, a);
    printf("b = %08x, %u\n", b, b);
    printf("a >> 1 : %08x, %u\n", c, c);
    printf("b >> 1 : %08x, %u\n", d, d);
    
    printf("a << 1 : %08x, %u\n", e, e);
    printf("a << 1 : %08x, %u\n", f, f);
} */

//ex3_7.cpp (묵시적 형 변환)

/* #include <iostream>
using namespace std;

int main(void)
{
    float f1,f2,f3;
    int n1;

    f1 = 5/2;
    f2 = 5.0f/2;
    f3 = 5/ 2.0f;
    n1 = 5.0f/ 2.0f;

    cout<<"5/2 ="<<f1<<endl;
    cout<<"5.0/2 ="<<f2<<endl;
    cout<<"5/2.0 ="<<f3<<endl;
    cout<<"5.0/2.0 ="<<n1<<endl; // int
} */

/* //ex3_8.cpp (조건 연산자)
//구닥다리 방식(조건연산자를 압축적으로 짜는 것)
#include <iostream>
using namespace std;

int main(void)
{
    int a, b, max;

    cout << "a와 b값을 입력하시오:";
    cin>> a >> b;

    a>=b ? max=a: max=b;
    cout<<"큰 수는"<<max<<"입니다"<<endl;
} */

/* #include <iostream>
using namespace std;

int main(void)
{
    int a, b, max;

    cout << "a와 b값을 입력하시오:";
    cin>> a >> b;

    if (a>=b){
        max = a;
    }
    else{
        max = b;
    }    
    cout<<"큰 수는"<<max<<"입니다"<<endl;
} */

//ex3_10.cpp (주소 연산자와 간접 연산자)

/* #include <iostream>
using namespace std;

int main(void)
{
    int inum = 100;
    int*iptr;
    double fnum = 12.5;
    double *fptr;

    iptr = &inum;
    printf("inum의 주소 = %p\n",&inum);
    printf("iptr이 가리키는 기억장소의 값 = %d\n", *iptr);

    fptr = &fnum;
    cout <<"fum의 주소= "<< &fnum << endl;
    cout <<"fptr이 가리키는 기억장소의 값= "<< *fptr << endl;
} */

//ex3_11.cpp (if ~ else 문)

/* #include <iostream>
using namespace std;

int main(void)
{
    int score;

    cout << "점수를 입력하세요(0 ~ 100):";
    cin >> score;

    if(score >= 60)
        cout << "합격입니다."<< endl;
    else
        cout << "불합격입니다."<<endl;
} */

//ex3_12.cpp (1)(switch 문)

/* #include <iostream>
using namespace std;
int main(void)
{
    int score;
    char grade;

    cout << "점수를 입력하세요(0 ~ 100)";
    cin >> score;

    switch(score/10){
    case 10:
    case 9:
        grade = 'A';
        break;
    case 8:
        grade = 'B';
        break;
    case 7:
        grade = 'C';
        break;
    case 6:
        grade = 'D';
        break;
    default:
        grade = 'F';
    }
    cout<<grade<<"학점입니다."<<endl;
} */

//ex3_13.cpp (for문)

/* #include <iostream>
using namespace std;

int main(void)
{
    int i,sum;

    for(i=1, sum=0; i<=100; i++)
        sum += i;
    cout << "1부터 100까지 정수의 합은"<<sum<<endl;
} */

//책 p103 problem3.5
#include <iostream>
using namespace std;

int main(void){
    double a,b,c,sum;
    int avg;

    cout << "실수 3개를 입력하세요: ";
    cin >> a >> b >> c;
    
    sum = a + b + c;
    avg = ((int)sum)/3;

    cout << "합: "<<sum<< "평균: "<<avg<<endl;
}



