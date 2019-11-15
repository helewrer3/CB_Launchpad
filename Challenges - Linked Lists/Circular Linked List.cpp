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

void buildList(node *&head){
	int data;
	cin >> data;
	while(data != -1){
		insertAtTail(head, data);
		cin >> data;
	}
}

void printList(node *head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void circular(node *&head){
   node* sp = head;
   node* fp = head;
   bool flag = false;

   while(fp != NULL){
	   sp = head;
	   while(sp != fp){
		    if(sp->data == fp->data){
				flag = true;
				break;
			}
			sp = sp->next;
	    }
		if(flag)
			break;

	   fp = fp->next;
    }

   node* tmp = head;
   while(tmp != fp){
	   cout << tmp->data << " ";
	   tmp = tmp->next;
   }
}

int main(){
	node *head = NULL;
	buildList(head);
	circular(head);
}