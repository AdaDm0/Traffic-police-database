#include <iostream>
#include <string>
#pragma once
using namespace std;


// !!! рег. номер, марку авто и фио можно перенести в класс List (в структуру)

// класс ШТРАФ
class Fine
{
private:
	string carNumber; // рег. номер авто
	int fineAmount;	// сумма штрафа
	string date;	// дата совершения нарушения
	string carModel;	// марка, модель авто
	string fio;	// ФИО владельца
	//int id; // номер штрафа (УИН)
public:
	Fine() {};
	Fine(string carNumber, int fineAmount, string date, string carModel, string fio) :carNumber{ carNumber }, fineAmount{ fineAmount }, date{ date }, carModel{ carModel }, fio{ fio } {};

	string getCarNumber() {
		return carNumber;
	}

	void print() {
		cout << "INFORMATION ABOUT FINE" << endl;
		cout << "---------------------------" << endl;
		cout << "Car number : " << carNumber << "\t Car model : " << carModel << endl;
		cout << "FIO : " << fio << endl;
		cout << "Date of violation : " << date << endl;
		cout << "Fine amount : " << fineAmount << endl << endl;;
	}
};

