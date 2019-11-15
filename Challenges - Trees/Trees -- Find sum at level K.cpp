#include <iostream>
using namespace std;

class node{
	public:
    int noOfChildren;
    int data; 
    node(int d,int n) {
        data = d;
        noOfChildren = n;
        right = left = NULL; 
    }
    node *right ;
    node *left ;
};


//Generic Tree Input
//Used in problem - Sum at level k
node* buildTreeGeneric(node*root){
    int d,n ;
    cin >> d >> n;
    root = new node(d,n);
    if(n==0){
        return root ; 
    }
    else if(n==1){
        root->left = buildTreeGeneric(root->left);
        return root ;
    }
    else {
        root->left = buildTreeGeneric(root->left);
        root->right = buildTreeGeneric(root->right) ; 
        return root ;
    }
}

int sumAtK(node* root, int k){
	if(!k){
		return root->data;
	}

	return sumAtK(root->left, k-1) + sumAtK(root->right, k-1);

}


int main(){
    node *root = NULL;
    //Generic Tree Input 
    root = buildTreeGeneric(root);          

	int n;
	cin >> n;


	cout << sumAtK(root, n);


    return 0;
}