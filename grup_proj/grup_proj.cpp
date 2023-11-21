/*  some strange shit code for test   */

#include<iostream>


using namespace std;

// Initialization of functions
void show_menu();
int sum_of_arr(int array[], int size);
int smalest_foo(int array[], const int size);


int main()
{
	const int SIZE_OF_AR = 12;
	int res = 0, temp, count = 1;
	char option;
	int myArray[SIZE_OF_AR] = { 1, 11, 2, 9, 2, 7, 6, 2, 4, 3, 2, 1 }, tempArray[SIZE_OF_AR];


	do
	{
		show_menu();
		
		cin >> option;

		cout << endl << endl;

		switch (option)
		{
			//DISPLAY     Anan
		case '1':
			for (int i : myArray) {
				cout << i << "\t";
			}
			cout << "\n\n";
			break;

			//TOTAL		Yaniss
		case '2':
			cout << "All values in total " << sum_of_arr(myArray, SIZE_OF_AR) << "\n";
			break;

			//AVERAGE       Lionel
		case '3':
			cout << "Average is " << (double)sum_of_arr(myArray, SIZE_OF_AR) / SIZE_OF_AR << "\n";
			break;

			//LARGEST     Yaniss
		case '4':
			for (int i = 1; i < SIZE_OF_AR; i++) {
				res = myArray[0];
				if (myArray[i] > res) {
					res = myArray[i];
				}
			}
			cout << "The largest number is " << res << "\n";
			break;

			//SMALLEST			Anan
		case '5':
			cout << "The smallest number is " << smalest_foo(myArray, SIZE_OF_AR) << "\n\n";
			break;

			//OCCURRENCES OF VALUE		Lionel
		case '6':
			for (int i = 0; i < SIZE_OF_AR; i++) {
				tempArray[i] = myArray[i];
			}
			// sort
			for (int i = 0; i < SIZE_OF_AR; i++) {
				for (int j = 0; j < SIZE_OF_AR; j++) {
					if (tempArray[j] > tempArray[i]) {
						temp = tempArray[j];
						tempArray[j] = tempArray[i];
						tempArray[i] = temp;
					}
				}
			}

			for (int i = 1; i <= SIZE_OF_AR; i++) {
				if (tempArray[i] == tempArray[i - 1]) {
					count++;
				}
				else {
					cout << "\t" << tempArray[i - 1] << ": " << count << endl;
					count = 1;
				}
			}
			break;

			//SCALE UP       Anan
		case '7':
			int scale;
			cout << "Please, enter scale factor: ";
			cin >> scale;
			for (int i = 0; i < SIZE_OF_AR; i++) {
				myArray[i] *= scale;
			}
			cout << "\n\t\tDone!\n\n";
			break;

			//REVERSE		Yaniss
		case '8':
			for (int i = 0, j = SIZE_OF_AR - 1; i < SIZE_OF_AR; i++, j--) {
				tempArray[i] = myArray[j];
			}
			for (int i = 0; i < SIZE_OF_AR; i++) {
				myArray[i] = tempArray[i];
			}
			cout << "\n\t\tDone!\n\n";
			break;

			//ZERO BASE			Lionel
		case '9':
			res = smalest_foo(myArray, SIZE_OF_AR);
			for (int i = 0; i < SIZE_OF_AR; i++) {
				if (myArray[i] == res) {
					myArray[i] = 0;
				}
			}
			cout << "\n\t\tDone!\n\n";
			break;

			//EXIT			Anan
		case 'q':
			cout << "\t\t\tExiting..\n";
			break;
		
		    //Clear screen   
		case 'c':
			system("cls");
			break;

		default:
			cout << "Invalid option\n";
			break;
		}
		res = 0;


	} while (option != 'q');
}

//Function shows menu              Lionel
void show_menu() {
	cout << "\t\t\t   Choose option\n";
	cout << "\tEnter '1' to display\t\tEnter '2' to get total\n";
	cout << "\tEnter '3' to get average\tEnter '4' to get lagrgest num\n";
	cout << "\tEnter '5' to get smalest num\tEnter '6' to get occurrences of value\n";
	cout << "\tEnter '7' to scale up\t\tEnter '8' to reverse\n";
	cout << "\tEnter '9' to get zero base\n\n";
	cout <<	"\tEnter 'q' to quit\t\tEnter 'c' to clear screen\n\n";
	cout << "Option: ";
}

//Smallest value of an array		Lionel
int smalest_foo(int array[], const int size) {
	int res = array[0];
	for (int i = 1; i < size; i++) {
		res = array[0];
		if (array[i] < res) {
			res = array[i];
		}
	}
	return res;
}

//gives sum of all elements of an array    Lionel
int sum_of_arr(int array[], int size) {
	int result = 0;
	for (int i = 0; i < array[size]; i++) {
		result += array[i];
	}
	return result;
}
