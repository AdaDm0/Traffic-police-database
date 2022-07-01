#include "List.h"
#include "Fine.h"
#pragma once


class Tree
{
private:
	struct ListElem {
		List ListCarFines;
		List* left, * right, * parent;
	};
	ListElem* root;
public:
	Tree() {
		root = NULL;
	};

	// получить информацию об узле
	template <typename>
	ListElem getListData();

	ListElem* search(string key) {
		while (key.compare(root->ListCarFines.getCarNumber()) {

		}
	}



	void addFine(string key) {
		if (root != NULL) {

		}
		else {
			ListElem rootTree();
			*root = &rootTree;
		}
	}



	/*~Tree() {
		del();
	}*/
};

