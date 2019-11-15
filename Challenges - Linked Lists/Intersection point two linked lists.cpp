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

	node* temp = head;
	while(temp -> next != NULL)
		temp = temp -> next;
	
	temp -> next = new node(d);
}

void buildList(node *&head, int n){
	int data;
	while(n--){
		cin >> data;
		insertAtTail(head, data);
	}
}

int fndInspt(node *&a, node *&b, int d, bool ish1big){
	node *tmp1 = a;
	node *tmp2 = b;
	if(ish1big){
		while(d--)
			tmp1 = tmp1->next;
	}
	else{
		while(d--)
			tmp2 = tmp2->next;
	}

	while(tmp1 !=  NULL and tmp2 != NULL){
		if(tmp1->data == tmp2->data)
			return tmp1->data;
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
	}

	return -1;
	
}

int main(){
	int n1, n2;
	node *h1 = NULL;
	node *h2 = NULL;
	cin >> n1;
	buildList(h1, n1);
	cin >> n2;
	buildList(h2, n2);

	cout << fndInspt(h1, h2, abs(n1-n2), n1 > n2);
	return 0;
}