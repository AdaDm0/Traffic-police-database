#include <iostream>
#include <string>
#pragma once
using namespace std;


// !!! ���. �����, ����� ���� � ��� ����� ��������� � ����� List (� ���������)

// ����� �����
class Fine
{
private:
	string carNumber; // ���. ����� ����
	int fineAmount;	// ����� ������
	string date;	// ���� ���������� ���������
	string carModel;	// �����, ������ ����
	string fio;	// ��� ���������
	//int id; // ����� ������ (���)
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

