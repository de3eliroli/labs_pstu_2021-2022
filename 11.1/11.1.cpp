#include <iostream>

using namespace std;

struct Node
{
	double data;
	Node* ptr_next = nullptr;
};

struct List 
{
	Node* head = nullptr;
	Node* tail = nullptr;
};

void pushBack(List& list, int& data)
{
	Node* newnode = new Node;
	newnode->data = data;
	if (list.head == nullptr)
	{
		list.head = newnode;
		list.tail = newnode;
	}
	else
	{
		list.tail->ptr_next = newnode;
		list.tail = newnode;
	}
}

void printList(List& list)
{
	Node* currentnode = list.head;
	while (currentnode != nullptr)
	{
		cout << currentnode->data << " ";
		currentnode = currentnode->ptr_next;
	}
}

void changeList(List& list) 
{
	Node* currentnode = list.head;
	Node* prednode = list.head;
	int count = 1;
	while (currentnode != nullptr)
	{
		if (count % 2 == 0)
		{
			prednode->ptr_next = currentnode->ptr_next;
			prednode = currentnode->ptr_next;
		}
		currentnode = currentnode->ptr_next;
		count++;
	}

}

int main()
{
	setlocale(LC_ALL, "RUS");
	List list;
	int n;
	cout << "Введите размер списка: ";
	cin >> n;
	cout << "Введите значения для списка" << " ";
	for (int i = 1; i <= n; i++)
	{
		cin >> k;
		pushBack(list, k);
	}
	cout << "First LIST" << " ";
	printList(list); 
	changeList(list);
	cout << endl;
	cout << "Final LIST" << " ";
	printList(list);
	return 0;
}