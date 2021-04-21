#include <iostream>
#include <iomanip>

using namespace std;

#define MAXCOMMANDS 6

int GetCommand(); // select a command and return command number
int SumOfInteger(int num); // 1부터 num까지 합을 계산하여 리턴한다. 
int Factorial(int num); // num의 factorial을 계산하여 리턴한다.
void PrintPattern(int num);
int GetRand(int min, int max);
int GetRand();
void PrintPatternRand(int n);
int CountPrimeNumber(int numCount);

int main() {
	int selection;
	int number;
	int sum;

	do {
		selection = GetCommand();
		switch (selection) {
		case 0:
			cout << "\t  Quit Program";
			return 0;
		case 1: // sum of integer
			cout << "\t  Enter an Integer --> ";
			cin >> number;
			sum = SumOfInteger(number);
			cout << "\n\t Sum of integer = " << sum << endl;
			break;
		case 2: // factorial
			cout << "\t  Enter an Integer --> ";
			cin >> number;
			sum = Factorial(number);
			cout << "\n\t" << number << " Factorial = " << sum << endl;
			break;
		case 3:  // check prime number
			cout << "\t  Enter an Integer --> ";
			cin >> number;
			cout << " \t Check Prime Number\n";
			int div, flag;
			flag = 1;
			div = number / 2;
			for (int i = 2; i <= div; i++) {
				if ((number % i) == 0)
				{
					flag = 0;
					break;
				}
			}
			if (number == 1) cout << "\t  " << number << " is not a prime number \n";
			else if (flag) cout << "\t  " << number << " is a prime number" << endl;
			else   	 cout << "\t  " << number << " is not a prime number\n";
			break;
		case 4:  // print pattern
			cout << "\t  Enter an Integer --> ";
			cin >> number;
			cout << " \t Print Pattern of " << number << "\n";
			PrintPattern(number);
			break;
		case 5:	// random print patter
			cout << endl << "\t  Random # print pattern을 위한 정수를 입력하시오 --> ";
			cin >> number;
			PrintPatternRand(number);
			break;
		case 6:
			cout << endl << "\t난수 소수 수를 계산하기 정수를 입력하시오 -->";
			cin >> number;
			cout << endl << "\t생성된 난수 중 소수의 수 = " << CountPrimeNumber(number) << endl;
			break;
		default:
			cout << "\n\t Invalid Selection" << endl;
			break;
		}
	} while (selection > 0 && selection < 7);
}


int GetCommand() {
	int select;
	while (true) {
		cout << "\t=" << setw(41) << setfill('=') << "=\n";
		cout << "\t|" << left << setw(40) << setfill(' ') << "  0: Quit" << "|\n";
		cout << "\t|" << left << setw(40) << setfill(' ') << "  1: Sum of Integers" << "|\n";
		cout << "\t|" << left << setw(40) << setfill(' ') << "  2: Compute Factorial" << "|\n";
		cout << "\t|" << left << setw(40) << setfill(' ') << "  3: Check Prime Number" << "|\n";
		cout << "\t|" << left << setw(40) << setfill(' ') << "  4: Print Pattern" << "|\n";
		cout << "\t|" << left << setw(40) << setfill(' ') << "  5: Random Print Pattern" << "|\n";
		cout << "\t|" << left << setw(40) << setfill(' ') << "  6: Random Prime Number" << "|\n";
		cout << "\t=" << right << setw(41) << setfill('=') << "=\n";
		cout << "\t  Select a function --> ";

		if (cin.fail() || !(cin >> select) || select < 0 || select>MAXCOMMANDS)	// input fail or input value is out of bound
		{
			cout << "\t    ### Invalid Command Number. Select again  ####" << endl;
			cin.clear();	//clear flag
			cin.ignore(INT_MAX, '\n');	//empty input buffer
		}
		else {
			cin.clear();  // clear flag
			cin.ignore(INT_MAX, '\n');  // empty input buffer
			return select;
		}
	}
}

// 1부터 num까지 합을 계산하여 리턴한다. 
int SumOfInteger(int num) {
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	return sum;
}

// num의 factorial을 계산하여 리턴한다. 
int Factorial(int num) {
	int sum = 1;
	for (int i = num; i > 1; i--) {
		sum *= i;
	}
	sum *= 1;
	return sum;
}

void PrintPatternRand(int n) {
	for (int i = 1; i < n; ++i) {
		cout << "\t";
		for (int j = 1; j <= n - i; ++j) {
			printf("%4d", GetRand());
		}
		cout << '\n';
	}
}

void PrintPattern(int num) {
	for (int i = num; i > 0; i--) {
		cout << "\t";
		for (int j = 1; j < i; j++) {
			cout << j << "  ";
		}
		cout << endl;
	}
}

int GetRand(int min, int max)
{
	static int flag = true;
	if (flag) { 
		srand((unsigned)time(NULL));
		flag = false;
	}
	int temp = rand() % ((max + 1) - min) + min;
	return(temp);
}

int GetRand() {
	return rand() % 100;
}

int CountPrimeNumber(int numCount) {
	int count = 0;
	for (int i = 0; i < numCount; ++i) {
		int randNum = GetRand(0, 99);
		int div, flag;
		flag = 1;
		div = randNum / 2;
		for (int i = 2; i <= div; i++) {
			if ((randNum % i) == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag) {
			count++;
		}
	}
	return count;
}