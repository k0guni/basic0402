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

/* //음수출력
#include <iostream>
using namespace std;

int main(void)
{
    short int a = 0x8006, b = 0x0007;
    short int c, d, e, f;

    c = a>>1;
    d = b>>1;
    e = a<<1;
    f = b<<1;

    printf("a = %08x, %d\n", a, a); //%u : 부호없는 10진수 정수형 변수
    printf("b = %08x, %d\n", b, b);
    printf("a >> 1 : %08x, %d\n", c, c);
    printf("b >> 1 : %08x, %d\n", d, d);

    printf("a << 1 : %08x, %d\n", e, e);
    printf("a << 1 : %08x, %d\n", f, f);
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

/* //2장 p5
//auto변수와 static변수의 차이
#include <iostream>
using namespace std;

void myFunc() {
    auto num = 0;
    static int count = 0;
    num++;
    count++;
    cout << "num: " << num << ", count: " << count << endl;
}

int main() {
    myFunc();
    myFunc();
    myFunc();
    return 0;
} */

//ex2_1.cpp

/* #include <iostream>
using namespace std;

int main(void){
    bool a = true, b = true, c = false;
    cout << "a: "<< a<< ",b: "<<b<< ",c:"<<c <<endl;
    bool d = 5, e = -3, f = 0;
    cout << "d: "<< d<< ",e: "<<e<< ",e:"<<e <<endl;

    cout << "bool형의 크기:  "<< sizeof(a)<< "바이트" <<endl;
} */

//ex2_2.cpp
/* #include <iostream>
using namespace std;

int main()
{
    char str1[4] = {'k','o','r','\0'}; // \0 == endl
    char str2[4] = {"kor"}; // ""는 /0을 자동적으로 포함하고 있고 1의 크기를 차지한다!!
    char str3[3] = {'k','o','r'};

    cout <<"str1: "<< str1 <<endl;
    cout <<"str2: "<< str2 <<endl;
    cout <<"str3: "<< str3 <<endl;

    cout <<"str3: ";
    for(int i=0; i<3; i++)
        cout <<str3[i];
    cout << endl;
} */

//ex2_3.cpp (1) (문자열)

/* #include <iostream>
#include <cstring>
using namespace std;

int main(void){
    char flower[20];
    char *ptr;

    strcpy_s(flower,20,"freesia"); //strcpy(flower, "freesia");
    cout << "1. flower: "<<flower <<endl;
    ptr = flower;
    cout << "2. ptr: "<< ptr << endl;

    strcpy_s(ptr,strlen("rose")+1,"rose"); //strcpy(ptr,"rose");
    cout << "3. ptr: "<< ptr << endl;

    strcat_s(flower,20,"mary"); // strcat(flower,"mary");
    cout<<"4. flower: "<< flower <<endl;
    
    //ptr=flower;

    strcat_s(ptr,20," perfume. "); // str strcat(cat," perfume");
    cout << "5. ptr: "<<ptr<<endl;
    cout << "ptr 문자열의 길이는 "<<strlen(ptr)<<endl<<endl;
} */

//ex2_4.cpp (사용자 정의 자료형 struct)
/* #include <iostream>
using namespace std;

struct student{
    int id;
    char name[10];
    double score;
};

int main()
{
    student stu1;

    cout << "학번을 입력하시오: \t";
    cin >> stu1.id;
    cout << "이름을 입력하시오: \t";
    cin >> stu1.name;
    cout << "성적을 입력하시오: \t";
    cin >> stu1.score;
    cout << endl;

    cout << "학번: " << stu1.id << endl;
    cout << "이름: " << stu1.name << endl;
    cout << "성적: " << stu1.score << endl;
} */

//사용자 정의 자료형(union)
/* #include <iostream>
using namespace std;

struct student{
    int id;
    char name[20];
    float score;
};

union Register{
    char ch;
    short sh;
    long lo;
};

int main(void){
    student stu1 = {123456,"홍길동",91.5};
    Register reg1;
    reg1.lo = 0x12345678;

    cout <<"size of stu1: " <<sizeof(stu1)<<endl;
    cout <<"size of reg1: " <<sizeof(reg1)<< endl << endl;
    
    printf("reg1.ch = %8x \n",reg1.ch);
    printf("reg1.sh = %8x \n",reg1.sh);
    printf("reg1.lo = %8x \n",reg1.lo);
}
 */

/* //ex2_7.cpp
#include <iostream>
using namespace std;

typedef unsigned char BYTE;
typedef struct pizza{
    double real;
    double image;
}COMPLEX;

int main(void){
    COMPLEX comp1 = {10.5, 8.2};
    cout << "comp1의 실수부: " << comp1.real << endl;
    cout << "comp1의 허수부: " << comp1.image << endl;

    BYTE a = 'A', b = '0';
    cout << "a= " << a << ",b = " << b << endl;
}
 */

//ex2_8.cpp (namespace)

/* #include <iostream>
#include <cstring>
using namespace std;
namespace worker{
    char name[10];
    int overtime;
    void show(char na[],int ot){
        cout << "name: " << na <<", overtime: "<< ot << endl;
    }
}

namespace student{
    char name[10];
    float score;
    void show(char na[],float sc){
        cout << "name: " << na << ", score: " << sc << endl;
    }
}

int main(void)
{
    strcpy(worker::name, "hong");
    worker::overtime = 15;
    worker::show(worker::name, worker::overtime);
} */

/* //namespace와 struct의 차이
#include <iostream>
using namespace std;
namespace MyNamespace {
    int x = 5;
    struct MyStruct {
        int y = 10;
    };
}

int main() {
    using namespace MyNamespace;
    
    MyStruct s;
    cout << "s.y = " << s.y << " x = " << x << endl;

    return 0;
} */

//책 문제 풀이

//2.1 (라)

//2.2 (라)

//2.3 (다)
// enum days {SUN, MON=3, TUE, WED, THU, FRI, SAT};
//           = 0    3      4    5   6     7    8

//2.4 1 : 오늘은 휴일입니다.

/* #include <iostream>
using namespace std;

int main(void){
    bool holiday = true;

    if(holiday)
        cout << holiday << " : 오늘은 휴일입니다." <<endl;
    else
        cout << holiday << " : 오늘은 휴일이 아닙니다." <<endl;
} */

//2.5 

/* #include <iostream>
#include <string>

using namespace std;

int main(void){
    char a = 'A';
    string b = "hello";
    short int c = 125;
    double d = 6.25f;
    double e = 12.345;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
} */

//2.6,7,8
/* #include <iostream>
#include <string>
using namespace std;

struct RECT
{
    int width, height ;
    string color ;
};

int main(void){
    
    RECT rec1;
    cout << "밑면과 높이 색깔 입력: ";
    cin >> rec1.width >> rec1.height >> rec1.color;

    cout << "밑면 : " << rec1.width << endl;
    cout << "높이 : " << rec1.height << endl;
    cout << "색깔 : " << rec1.color << endl;
} */

/* #include <iostream>
#include <cstring>
using namespace std;

namespace worker{
    struct person{
        int id;
        char name[10];
        int overtime;
    }; // struct person
    void show(int id, char na[], int ot){
        cout << "id : " << id << ", name: " << na << ", overtime:" \
        << ot << endl;
    } // void show
}
namespace student{
    struct person{
        int id;
        char name[10];
        float score;
    }; // struct person
    void show(int id, char na[], float sc){
        cout << "id : " << id << ", name: " << na << ", score:" \
        << sc << endl;
    } // void show
}//namespace student

int main(void){
    using namespace student;
    // or using student::person;
    //    using student::show;
    person st1 = {1234, "park", 88.5};
    show(st1.id, st1.name, st1.score);
} */

//3.1

/* #include <iostream>
using namespace std;

int main(void){
    bool holiday;
    bool sunday;
    bool goschool;

    cout <<"공휴일 입니까? (0:no, 1:yes): ";
    cin >> holiday;

    cout <<"일요일 입니까? (0:no, 1:yes): ";
    cin >> sunday;

    goschool = !holiday && !sunday;
    cout << "오늘은 학교에 ";
    goschool ? cout << "갑니다." : cout << "가지 않습니다";
    cout << endl;
} */

//3.2

// #include <iostream>
// using namespace std;

// int main(void)
// {
//     int a = 10, b = 4;
//     double f1, f2, f3;

//     f1 = a/ b;
//     cout << "f1= " << f1 << endl;

//     f2 = double(a)/ double(b);
//     cout << "f2= " << f2 << endl;

//     f3 = (double)a/ (double)b;
//     cout << "f3= " << f3 << endl;
// }

//3.3
/* #include <iostream>
using namespace std;

int main(void)
{
    unsigned short a1 = 0x8002, a2, a3;
    a2 = a1 << 2;
    a3 = a1 >> 2;
    cout <<"a1 = " << a1 << endl;
    cout <<"a1 << 2 -->" << a2 << endl;
    cout <<"a1 >> 2 -->" << a3 << endl;

    short b1 = 0x8002, b2, b3;
    b2 = b1 << 2;
    b3 = b1 >> 2;
    cout <<"b1 = " << b1 << endl;
    cout <<"b1 << 2 -->" << b2 << endl;
    cout <<"b1 >> 2 -->" << b3 << endl;
} */

//책 p103 problem3.5
/* #include <iostream>
using namespace std;

int main(void){
    double a,b,c,sum;
    int avg;

    cout << "실수 3개를 입력하세요: ";
    cin >> a >> b >> c;
    
    sum = a + b + c;
    avg = ((int)sum)/3;

    cout << "합: "<<sum<<" "<< "평균: "<<avg<<endl;
} */




