#include<bits/stdc++.h>
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

bool compareTree(node* root1, node* root2){
	if(root1 == NULL and root2 == NULL)
		return true;
	else if((root1 == NULL and root2 != NULL)  or (root2 == NULL and root1 != NULL))
		return false;

	return compareTree(root1->left, root2->left) and compareTree(root1->right, root2->right);
}


int main(){
	node* root1 = build("true");
	node* root2 = build("true");

	if(compareTree(root1, root2))
		cout << "true";
	else
		cout << "false"; 
	return 0;
}