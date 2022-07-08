#include "List.h"
#include "Fine.h"
#pragma once


//������, ���������� ������� ������� �� ������ ������
class Tree
{
private:
	struct ListElem {
		List ListCarFines;
		ListElem* left, * right, * parent;
		string carNum;
	};
	ListElem* root;
public:
	Tree() {
		root = NULL;
	};

	
	ListElem* search(string key) {
		// �������� �������� ��������� �� �������� ������� (������ �������� root ������!)
		ListElem* node = root;
		while (node!=0 && key.compare(node->carNum)) {
			if (key.compare(root->carNum) < 0) {
				node = node->left;
			}
			else {
				node = node->right;
			}
		}
		return node;
	}


	//�� ��������
	void addFine(string key) {
		ListElem* node = root;
		while (node != 0 && key.compare(node->carNum)) {
			if (key.compare(root->carNum) < 0) {
				node = node->left;
			}
			else {
				node = node->right;
			}
		}
		ListElem element;
		element.carNum = key;
		element.parent = node;
		element.left = NULL;
		element.right = NULL;
		element.ListCarFines.add();


	}



	~Tree() {
	}
};

