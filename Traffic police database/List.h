#include "Fine.h"
#pragma once



class List
{
private:
	//��������� ����� Node ������� �� ������ ����� � ��������� �� ����. ������� ������
	class Node {
		public: Fine dataFine;	// ������ � ������ (������ ������ �����)
				Fine* next;	//��������� �� ��������� ������ � ������
				Node() {
					next = NULL;
				}
		};
	Node* head;	//������ ������
	Node* tail; 
	int count;
public:
	List() {};

	string getCarNumber() {
		return List::Node::dataFine
	}

	//���������� ��������
	void add(Fine f1) {
		//��������� ������ � ������
		Node* temp = new Node;
		temp->dataFine = f1;
		temp->next = NULL;

		if (head != NULL) {
			tail->next = temp->next;
			tail->dataFine = temp->dataFine;
		}
		else {
			head = temp = temp;
		}
	}

	int getCount() {
		return count;
	}

	/*void del(int pos) {
		if (pos == 0) {
			cout << "Whrong input";
		}
		else {
			Node* temp = head;
			head = head->next;
			delete temp;
		}

		void delAll() {
			while (head != 0);
			del();
		}*/

		~List() {};
	};

};