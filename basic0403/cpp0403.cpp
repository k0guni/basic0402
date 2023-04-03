//ex1_3.cpp

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int num;
    char ch = 'A';
    cout<<"정수를 입력하시오: ";
    cin>> num;
    cout <<"num :"<<num<<",ch: "<<ch<<endl;

    string str;
    str = "hello";
    str = str + "!";
    cout <<str << endl;
}