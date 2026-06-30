#include <iostream>

using namespace std;

int main()
{
	string names = "Erika Garcia";
	string goals = "Work in computer science in either graphics or AI";
	string intrests = "Math,CompSci,PC gaming,Swimming";
	string dreams = "Move to the UK";
	string future = "In 1 year I hope to get my associates, in 3 years I hope to finish university, in 5 years I hope to have started my career, and in 7 years I hope to begin a part time master's course at a university.";

	int choice;


	

	cout << " Introduction: Please pick an option " << endl;

	cout << "1 - My Name" << endl;
	cout << "2 - My goals" << endl;
	cout << "3 - My intrests" << endl;
	cout << "4 - My dreams" << endl;
	cout << "5 - Where I see myself in 1,3,5, and 7 years from now" << endl;

	cin >> choice;

	if (choice == 1) {
		cout << names;
	}
	else if (choice == 2) {
		cout << goals;
	}
	else if (choice == 3) {
		cout << intrests;
	}
	else if (choice == 4) {
		cout << dreams;
	}
	else if (choice == 5) {
		cout << future;

	}
	

	return 0;

}