#include<bits/stdc++.h>
#define ll long long
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

node* createTreeFromTrav(ll *inOrder,ll *preOrder,ll s,ll e){
    static long int i = 0;
    //Base Case
    if(s>e){
        return NULL;
    }
    //Rec Case
    node *root = new node(preOrder[i]);

    long int index=-1;
    for(long int j=s;s<=e;j++){
        if(inOrder[j]==preOrder[i]){
            index = j;
            break;
        }
    }

    i++;
    root->left = createTreeFromTrav(inOrder,preOrder,s,index-1);
    root->right = createTreeFromTrav(inOrder,preOrder,index+1,e);
    return root;
}

void display(node* root){
	if(root == NULL)
		return;


	if(root->left!=NULL and root->right!=NULL)
		cout<< root->left->data << " => " << root->data << " <= " << root->right->data << endl;
	else if(root->left==NULL and root->right!=NULL)
		cout<< "END => " << root->data << " <= " << root->right->data << endl;
	else if(root->left!=NULL and root->right==NULL)
		cout<< root->left->data << " => " << root->data << " <= END" << endl;
	else
		cout<< "END => " << root->data << " <= END" << endl;

	display(root->left);
	display(root->right);
}

int main(){
	ll N, M;
	cin >> N;
	ll preOrder[N];
	for(ll i = 0; i < N; i++)
		cin >> preOrder[i];
	cin >> M;
	ll inOrder[M];
	for(ll i = 0; i < M; i++)
		cin >> inOrder[i];
	node *root = createTreeFromTrav(inOrder,preOrder,0,N-1);

	display(root);
	return 0;
}