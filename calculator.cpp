#include <iostream>

using namespace std;

int num1, num2, answer;
char operator1;

int main()
{
	cout << "Enter your calcualtion, for example: 2 + 1"<<endl;
	cin>>num1;
	cin>>operator1;
	cin>>num2;

	switch(operator1)
	{
	case '*':
			answer = num1 * num2;
			cout << "Answer = " << answer <<endl;
			break;
	case '/': 
			answer = num1 / num2;
			cout << "Answer = " << answer <<endl;
			break;
	case '+':
			answer = num1 + num2;
			cout << "Answer = " << answer << endl;
			break;
	case '-':
			answer = num1 - num2;
			cout << "Answer = " << answer << endl;
			break;
	default:
			cout<< "Operator invalid." << endl;
	}
	return 0;
}
