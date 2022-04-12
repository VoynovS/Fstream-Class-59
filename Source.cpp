//Персональный шаблон проекта С++
#include <iostream> // Главная библиотека
#include <fstream>
#include <string>
#include <conio.h>
#include "windows.h"
using namespace std; //Подключение пространства имен


//Task 1
string subfile(string path, int position) {
	ifstream in;
	in.open(path);
	if (in.is_open()) {
		string str;
		in.seekg(position, ios::beg);
		char sym;
		while (in.get(sym))
			str += sym;
		in.close();
		return str;

	}
	else
		in.close();
		return "";
}

unsigned int timer = 0;

int main() {

	setlocale(LC_ALL, "Russian");


	/*string path = "file.txt";

	fstream fs;
	fs.open(path, ios::in | ios::out);
	if (fs.is_open()) {
		cout << "The fail is open. \n";
		string str;
		cout << "Enter word:\n";
		getline(cin, str);
		fs << str << "\n"; //Record in file
		fs.seekg(0, ios::beg); //road cursor
		getline(fs, str); //read text 
		cout << str << endl;
		
	}

	else
		cout << "Error open the file.";
	
		
	fs.close();*/

	/*string path = "file.txt";

	fstream fs;
	fs.open(path, ios::in | ios::out | ios::ate);

	string file;*/

	/*if (fs.is_open()) {
		cout << "File is open.\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			file += str + "\n"; 
		}
		cout << file << endl;
	}
	/ *if (fs.is_open()) {
		cout << "The fail is open. \n";
		string str;
		cout << "Enter word:\n";
		getline(cin, str);
		fs.seekg(10, ios::beg);
		fs << str << "\n"; //Record in file
		/*fs.seekg(0, ios::beg); //road cursor
		getline(fs, str); //read text 
		cout << str << endl;

	}* /

	else
		cout << "Error open the file.";
	fs.close();

	file.insert(10, " \nNEW STRING\n ");
	fs.open(path, ios::out | ios::in);
	if (fs.is_open()) {
		cout << "File open.\n";
		fs << file << endl;
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str1;
			getline(fs, str1);
			cout << str1 << endl;
		}
	}
	else
		cout << "Error open file!";
	fs.close();*/

	//Task 1
	/*int n;
	string path = "File.txt";
	cout << "Enter position: ";
	cin >> n;
	cout << "Read file with entering position: \n" << subfile(path, n) << endl;*/

	//Task 2
	/*ifstream indate;
	indate.open("date.txt");
	int day = 0, month = 0, year = 0;

	if (indate.is_open()) {
		cout << "File open for read\n";
		string date;
		indate >> date;
		cout << "In file: " << date << endl;
		year = stoi(date.substr(date.rfind('.') + 1));
		month = stoi(date.substr(date.find('.') + 1));
		day = stoi(date.substr(0, date.find('.'))); //date.subsrt(0)
		
	}
	else
		cout << "Error open file\n";
	indate.close();
	cout << "day = " << day << endl;
	cout << "month = " << month << endl;
	cout << "year = " << year << endl;*/

	char sym;
	while (true) {
		if (_kbhit()) {
			sym = _getch();

			switch (sym)
			{
			case 'a':case 'A': system("cls"); cout << "Шаг влево\n"; break;
			case 'd': case 'D': system("cls"); cout << "Шаг вправо\n"; break;
			default:
				break;
			}
		}
		Sleep(100);
		timer += 100;
		if (timer >= 1000) {
			cout << ".\n";
			timer = 0;
		}
		cout << ".\n";
	}

	


	return 0;
}