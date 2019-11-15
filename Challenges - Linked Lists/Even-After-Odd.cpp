#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int d){
			data = d;
			next = NULL;
		}
};

void insertAtTail(node *&head, int d){
	if(head == NULL){
		head = new node(d);
		return;
	}

	node *temp = head;
	while(temp->next!=NULL)
		temp = temp->next;
	
	temp->next = new node(d);
}

void buildList(node *&head, int n){
	int x;
	while(n--){
		cin >> x;
		insertAtTail(head, x);
	}
}

void print(node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

void evenOdd(node *&head){
	node *a = NULL;
	node *b = NULL;
	node *temp = head;

	while(temp != NULL){
		if((temp->data)&1)
			insertAtTail(a, temp->data);
		else
			insertAtTail(b, temp->data);
		temp = temp->next;
	}

	print(a);
	print(b);
}

int main() {
	node *head = NULL;
	int n;
	cin >> n;
	buildList(head, n);
	evenOdd(head);
	return 0;
}