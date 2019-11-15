#include <bits/stdc++.h>
using namespace std;

class node{
	public:
		node* next;
		int data;
		
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
	while(temp->next != NULL)
		temp = temp->next;
	temp -> next = new node(d);
}

void buildList(node *&head, int n){
	int x;
	while(n--){
        cin >> x;
		insertAtTail(head, x);
	}
}

node* reverserec(node* head) {
    //base case
    if (head == NULL || head->next == NULL) {
        return head;
    }

    node* smallLL = reverserec(head->next);
    node* curr = head;
    curr->next->next = curr;
    curr->next = NULL;
    return smallLL;

}

int main() {
    int n;
    cin >> n;
    bool isPal = true;
    node* head = NULL;
    buildList(head, n);
    node* slow = head;
    node* fast = head;
    for(int i = 1; i <= ceil(n/2); i++){
        fast = fast->next;
    }

    node* slow2 = reverserec(fast);

    for(int i = 1; i <= n/2; i++){
        if(slow->data != slow2->data){
            isPal = false;
            break;
        }
        slow = slow->next;
        slow2 = slow2->next;
    }

    if(isPal)
		cout << "True";
	else
		cout << "False";
}