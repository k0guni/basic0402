//04_복잡 자료형 p27
/* //ex4_8.cpp (참조의 사용)
#include <iostream>
using namespace std;

int main(void)
{
    int num = 10;
    int &rnum = num;

    cout << "num= " << num << ", rnum = " <<rnum << endl;

    rnum += 20;
    cout << "num= " << num << ", rnum = " <<rnum << endl;
} */

/* //ex4_9.cpp (동적 메모리 관리)
#include <iostream>
using namespace std;

int main(void)
{
    int *id;        // 포인터 선언
    id = new int;   // 기억공간 할당
    cout << "번호를 입력하세요: ";
    cin >> *id;

    char *name = new char[20];  //포인터 선언과 기억공간 할당
    cout << "이름을 입력하세요: ";
    cin >> name;

    cout <<"id : "<< *id <<", name : "<< name << endl;

    delete id;      // 기억공간 해제
    delete [] name; // 배열 기억공간 해제
} */

/* /////책 page134//////////////
#include <iostream>
using namespace std;

struct Student{
    int id;
    char name[20];
};

int main(void)
{
    Student *ps;
    float *score;

    ps = new Student;
    score = new float[2];

    cout<<"번호를 입력하세요: ";
    cin >> ps->id;
    cout<<"이름를 입력하세요: ";
    cin >> ps->name;
    cout<<"성적를 입력하세요: ";
    cin >> score[0];
    cout<<"성적2를 입력하세요: ";
    cin >> score[1];

    cout << "번호: " << ps->id << " 이름: " << ps->name;
    cout << ", 성적1: " << score[0] << ", 성적2: " << score[1];
    cout << endl;

    delete [] score;
    delete ps;
} */

#include <iostream>
using namespace std;

int add(int, int);
void multiply(int, int);

int main(void)
{
    int a = 15, b = 10, sum;
    sum = add(a, b);
    cout << a << " + " << b << " = " << sum << endl;
    multiply(a, b);

    return 0;
}

int add(int x, int y)
{
    int sum;
    sum = x + y;

    return sum;
}

void multiply(int x, int y)
{
    cout << x << " * " << y << " = " << x*y <<endl;
}