//0411 객체지향언어 6주차
//~ 3주차 p33

/* //ex3_15 cpp p38
#include <iostream>
using namespace std;
const double PI = 3.14159;
int main(void)
{
    int num;
    double a, b, area;
    do {
        cout << "==================================" << endl ;
        cout << " 1. 삼각형의 넓이구하기 " << endl ;
        cout << " 2. 사각형의 넓이구하기 " << endl ;
        cout << " 3. 원의 넓이구하기 " << endl ;
        cout << " 9. 끝내기 " << endl ;
        cout << "==================================" << endl ;
        cout << "원하는 도형을 선택하세요: " ; 
        cin >> num;
        switch (num) {
        case 1: 
        case 2:
            cout << "밑면의 길이를 입력하세요: " ;
            cin >> a;
            cout << "높이를 입력하세요: " ;
            cin >> b ;
            break ; // break는 반복문만 종료시킨다.
        case 3:
            cout << "반지름을 입력하세요: " ;
            cin >> a;
            break ;
        case 9:
            cout << "감사합니다." << endl ;
            return 0; // return은 반복문뿐만 아니라 함수 까지 종료 시킨다!
        default:
            cout << "입력을 잘못하였습니다! " << endl << endl ;
            continue;
        }
        switch (num) {
        case 1: 
            area = a * b / 2;
            break ;
        case 2:
            area = a * b;
            break ;
        case 3:
            area = PI * a * a;
        }
        cout << "area = " << area << endl << endl;
    } while (num != 9);
} */

// 1.선언 int num1 = 10 num2 =20
//        int *pum;
// 2.주소저장 pnum = &num1;
// 3.사용 cout << *pnum << endl;
// pnum = &num2;
// cout << *pnum << endl;

//ex4_1.cpp 4장 p4
/* #include <iostream>
using namespace std;

int main(void)
{
    int score[5] = {82,93,91,80,73};
    int total = 0;
    double average;

    for(int i=0; i<5; i++)
        total += score[i];
    average = (double)total/ 5.0;

    cout << "total = " << total << endl;
    cout << "average = " << average << endl;
} */

//(1)1~100의 정수 중에서 7의 배수를 모두 출력하고, 몇 개 인지 세어서 출력하는
// 프로그램을 작성하시오. if((i%7)==0)
//(2)5명의 성적을 입력 받아 배열에 저장하고 평균을 계산하여 출력하는 프로그램을 작성하시오. (for/while 문을 사용)

/* //(1)
#include <iostream>
using namespace std;

int main(void)
{
    int count = 0;
    for(int i =1; i<=100; i++){
        if((i%7)==0)
        {
            cout<< i <<"    ";
            count++;
        }
    }
    
    cout<< endl << "1~100 중 7의 배수의 개수는 " <<count<<endl;
} */

/* //(2)
#include <iostream>
using namespace std;

int main(void)
{
    int grade[5];
    int sum = 0;

    for(int i=0; i<5; i++){
        cout << "성적을 입력하시오" << i+1 << " : ";
        cin >> grade[i];
        sum += grade[i];
    }

    double avg = (double)sum/ 5.0;
    cout << "평균은 " << avg << " 입니다." <<endl;
} */

/* //ex4_2.cpp
#include <iostream>
using namespace std;

int main(void)
{
    int a[3] = {10,20,30};
    int i;

    for (i=0; i<3; i++)
        cout << i << "번째 원소의 주소: " << (a+i) << endl; 
    cout << endl;
    for (i=0; i<3; i++)
        cout << i << "번째 원소의 주소: " << &a[i] << endl;
    cout << endl;
    for (i=0; i<3; i++)
        cout << i << "번째 원소의 주소: " << a[i] << endl;
    cout << endl;
    for (i=0; i<3; i++)
        cout << i << "번째 원소의 주소: " << *(a+1) << endl;
    cout << endl;
} */

/* //ex4_3.cpp (1) (2차원 배열의 주소와 원소의 값)
#include <iostream>
using namespace std;

int main()
{
    int a[2][3] = {1,2,3,4,5,6};
    int i,j;

    for (i=0; i<2; i++){
        for(j=0; j<3; j++){
            cout << "&a[" << i << "][" << j << "]= "<< &a[i][j] << ",";
            cout << "a[" << i << "][" << j << "]= "<< a[i][j] << endl;
        }
    }
    cout << endl;

    for (i=0; i<6; i++){
        cout << "a[0]+" << i << " = "<< a[0]+i << ",";
        cout << "*(a[0]+" << i << ") = " << *(a[0]+i) << endl;
    }
    cout << endl;
}
 */

/* //ex4_4.cpp
#include <iostream>
using namespace std;

int main(void)
{
    int num1 = 10, num2 =20;
    int* pnum = &num1;
    cout << "*pnum = " << *pnum << endl;

    pnum = &num2;
    cout << "*pnum = " << *pnum << endl;
} */

/* //ex4_5.cpp (void 포인터의 사용)
#include <iostream>
using namespace std;

int main(void)
{
    int i = 100;
    void* pv = &i;
        //void* 자료형은 모든 자료형을 가리킬 수 있으므로,
        // 형 변환 없이도 &i의 값을 보관할 수 있다.

// int* pi = pv; //오류
    int* pi = (int*)pv;
        //보관하고 있는 주소를 int를 가리키는 주소로 사용하기 위해
        //명시적으로 형 변환하여야 한다.
    cout << *pi << endl;
} */

/* //ex4_6.cpp (2중 포인터의 사용)
#include <iostream>
using namespace std;

int main(void)
{
    int num = 100;
    int *pnum, **ppnum;

    pnum = &num;
    ppnum = &pnum;

    cout << "num: "<< num << endl;
    cout << "*pnum: "<< *pnum << endl;
    cout << "**ppnum: "<< **ppnum << endl;

    cout << "ppnum: "<< ppnum << endl;
    cout << "pnum의 주소:  "<< &pnum << endl;
    cout << "pnum: "<< pnum << endl;
    cout << "num의 주소: "<< &num << endl;
} */

//ex4_7.cpp (구조체의 포인터 사용) p25
/* #include <iostream>
using namespace std;

struct student {
    int id;
    char name[20];
};

int main(void)
{
    student stu1 = {1234, "gildong"};
    student stu2 = {2345, "leesin"};
    student *pstu;
    pstu = &stu2;

    cout << "stu1.id : " << stu1.id << ", stu1.name : " << stu1.name << endl;
    cout << "(*pstu).id : " << (*pstu).id << ", (*pstu).name : " << (*pstu).name << endl;
    cout << "pstu->id : " << pstu->id << ", pstu->name : " << pstu->name << endl;
} */

/* /////////////////////////책 problem ////////////////////////////////////
//p103 3.6
#include <iostream>
using namespace std;

int main()
{
    char ch, cap;

    while(1){
input:
        cout << "알파벳 소문자를 입력하세요 (끝내려면 0): " ;
        cin >> ch;

        if(ch=='0')
            return 0;
        if((ch>=0x41)&&(ch<=0x5A)) 
            goto input; // goto문은 버그가 많이 일어나기 때문에 잘 안쓴다.

        cap = ch - 0x20;
        cout << cap << endl;
    }
} */

//3.7
/* #include <iostream>
using namespace std;

int main(void)
{
    int five_factorial = 1;
    for(int i=1; i<=5; i++){
        five_factorial *= i;
    }
    cout << five_factorial << endl;
} */

//3.8
/* #include <iostream>
using namespace std;

int main(void)
{
    int five_factorial = 1, i = 1 ;
    while(i<=5){
        five_factorial *= i;
        i += 1;
    }
    cout << five_factorial << endl;
} */

//3.9
/* #include <iostream>
using namespace std;

int main(void)
{
    int five_factorial = 1, i = 1 ;
    do{
        five_factorial *= i;
        i += 1;
    }while(i<=5);
    cout << five_factorial << endl;
} */

/* //3.10
#include <iostream>
using namespace std;

int main()
{
    int i, num = 123;
    for (i=1; i<4; i++)
    {
        cout.width(5);
        cout << num << endl;
        num *= 10;
    }
}

//  123
// 1230
//12300 */

//3.11
/* #include <iostream>
using namespace std;

int main(void)
{
    int i, j, ans;
    cout.width(14);
    for(i=1; i<10; i++)
    {
        for(j=2; j<10; j++ )
        {
            cout << j << " x " << i << " =   " << i*j <<"         "; 
        }
    }
} */

//3.11
/* #include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 2; j <= 5; j++) {
            cout.width(1);
            cout << j << "x" << i << " = ";
            cout.width(2);
            cout << i * j << "  ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= 9; i++) {
        for (int j = 6; j <= 9; j++) {
            cout.width(1);
            cout << j << "x" << i << " = ";
            cout.width(2);
            cout << i * j << "  ";
        }
        cout << endl;
    }
} */

//4.1
//라. 10

//4.2
//다. 4byte

//4.3
//다. 20

//4.4
//라. 30

/* //4.5
//라
#include <iostream>
using namespace std;

int main(void)
{
    int a[3] = {40,50,60};
    //cout << *a[2] <<endl; // 오류
    cout << &a[2] <<endl;
    cout << a+2 <<endl;
    cout << *(a+2) <<endl;
} */

//4.6
//다
/* #include <iostream>
using namespace std;

int main(void)
{
    int n = 20;
    int &r = n; //r은 참조변수
    n++;
    cout << r << endl;
} */



