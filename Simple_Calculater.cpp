# include <iostream>
# include <string>
# include <cmath>
#include <ctime>
#include <cstdlib>

// for time() function

using namespace std;

//Project One (Simple Calcluter 🎯🎯) 1
enum enNumberOperation { Addition = '+', Subcract = '-', Multiplay = '*', Devide = '/', Power = '^' }; // Opeation Type 
double ReadNumber(string Message) // Read Number
{
	float Number = 0; // Defult Number
	cout << Message << endl;
	cin >> Number;
	return Number;
}
enNumberOperation ReadOperationType()
{
	char OT = '+'; // Defult Operation Type

	cout << "Enter The Operation Type [ '+' or '-' or '*' or '/' or '^' ]" << endl;
	cin >> OT;

	return (enNumberOperation)OT; // Translate OT To Enum Function
}
float Calclute(int Number1, int Number2, enNumberOperation OperationType)
{
	switch (OperationType)
	{
	case Addition:
		return Number1 + Number2;
	case Subcract:
		return Number1 - Number2;
	case Multiplay:
		return Number1 * Number2;
	case Devide:
		return Number1 / Number2;
	case Power:
		return pow(Number1, Number2);
	default:
		return Number1 + Number2;
	}
}
bool DoYouWantContinue()
{
	string Choice;
	do
	{
		cout << "\n-------------------------\n";
		cout << "DO YOU WANT TO CONTINUE[Y/N] \n";
		cin >> Choice;
	} while (Choice != "Y" && Choice != "y" && Choice != "N" && Choice != "n");

	if (Choice == "Y" || Choice == "y")
	{
		system("cls");
		return 1;
	}

	else
	{
		cout << "\nGOOD BYE 👋 \n";
		return 0;
	}
}
void Readycalculate()
{
	cout << "\t\t\t\t\tCALCLUTE READY\t\t\t" << endl;
	do
	{
		float Number1 = ReadNumber("Enter The First Number ");
		enNumberOperation OperationType = ReadOperationType();
		float Number2 = ReadNumber("Enter The Secand Number ");
		cout << endl << "Result [ " << Calclute(Number1, Number2, OperationType) << " ]\n" << endl;

	} while (DoYouWantContinue()); // If The User Enter Cantinue 



}
int main()
{

	Readycalculate();
	return 0;
}
