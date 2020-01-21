#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node*build(string s){
	if(s=="true"){
        int d;
        cin>>d;
        node*root = new node(d);
        string l;
        cin>>l;
        if(l=="true"){
        root->left=build(l);
        }
        string r;
        cin>>r;
        if(r=="true"){
        root->right=build(r);
        }
        return root;
	}
	return NULL;
}

int height(node* root){
	if(root == NULL)
		return 0;
	
	return 1 + max(height(root->left), height(root->right));
}

void printK(node* root, int i){
	if(i == 0){
		cout << root->data  << " ";
		return;
	}

	if(root->left != NULL){
		printK(root->left, i-1);
	}
	if(root->right != NULL){	
		printK(root->right, i-1);
	}
}

void printKAlt(node* root, int i){
	if(i == 0){
		cout << root->data  << " ";
		return;
	}


	if(root->right != NULL){	
		printKAlt(root->right, i-1);
	}
	if(root->left != NULL){
		printKAlt(root->left, i-1);
	}
}

void printAllK(node* root){
	int n = height(root);

	for(int i = 0; i <= n; i++){
		if(i%2 ==  0)
			printK(root, i);
		else
			printKAlt(root, i);
	}
}

int main(){
	node *root = build("true");

	printAllK(root);
	return 0;
}