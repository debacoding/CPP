#include <iostream>
using namespace std;

int main() {
	cout<<"Relational Operators !"<<endl;

    int a=10;
    int b=5;
    //True=1 ; False=0 ;
    cout << (a==b)<<endl; //Returns true when value of variable a is equal to variable b.
    cout << (a!=b)<<endl; //Returns true when value of variable a is not equal to variable b.
    cout << (a<b)<<endl;
    cout << (a>b)<<endl;
    cout << (a<=b)<<endl;
    cout << (a>=b)<<endl;
    cout << !(a==b)<<endl; // (a!=b)
	return 0;
}

/*
Output:
Relational Operators !
0
1
0
1
0
1
1
*/