#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
		cout << "\nNode created";
	}
};
int main()
{
	Node *first = new Node(10);
	Node *second = new Node(20);
	Node *third = new Node(30);
	Node *head = first;
	head->next = second;
	head->next->next = third;

	cout << "\n"
		 << head->data << "==>" << head->next->data << "==>" << head->next->next->data;
}
