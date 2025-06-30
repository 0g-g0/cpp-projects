#include <iostream>
using namespace std;
int main()
{
	const int weekdays = 7;
	int weekdays = 6;

	cout << "the days of the week="<<weekdays<<"\n";
}

/* This code will show an error because
const variables are fixed things 
like date of birth, identity, days of the week,
and any number that you don't want to change.*/
