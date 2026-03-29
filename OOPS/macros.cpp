#include<iostream>
using namespace std;

#define PI 3.14

// Global Variable
void a(int& i){
    char ch='a';
    cout << i << endl;
    
}

int score = 15;

void b(int& i){
    cout << i << endl;
}

int main()
{
    cout << score << " in b" <<endl;

    int r = 5;
    //double pi = 3.14;

    double area = PI * r * r;

    cout << "Area is " << area <<endl;

    int i=5;
    //a(i);
    b(i);

{
    int i = 2;
    cout<< i <<endl;
}
        return 0;
}
