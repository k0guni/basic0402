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

//(2)
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


}
