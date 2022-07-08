#include "Fine.h"
#pragma once


// ОЧЕРЕДЬ ШТРАФОВ

class List
{
private:
	//вложенный класс Node состоит из класса Штраф и указателя на след. элемент списка
	
	class Node {
	public: 
		Fine dataFine;	// Данные о штрафе (объект класса штраф)
		Fine* next;	//указатель на следующий объект в списка
		  //конструктор вложенного класса Node
		  Node() {
			  next = NULL;
		  }
	};
	Node* head;	//начало списка
	Node* tail;
	int count;
public:
	List() {};



	//получить номер машины
	/*string getCarNumber() {
		return
	}*/

	//добавление элемента
	void add() {
		//сохраняем данные в список
		Fine f1();
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

	//получить счетчик элементов списка
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
