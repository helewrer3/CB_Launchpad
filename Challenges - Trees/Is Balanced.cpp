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

bool isBalanced(node* root, int *height){
	int lh = 0, rh = 0; 
  
    /* l will be true if left subtree is balanced  
    and r will be true if right subtree is balanced */
    int l = 0, r = 0; 
  
    if (root == NULL) { 
        *height = 0; 
        return 1; 
    } 
  
    /* Get the heights of left and right subtrees in lh and rh  
    And store the returned values in l and r */
    l = isBalanced(root->left, &lh); 
    r = isBalanced(root->right, &rh); 
  
    /* Height of current node is max of heights of left and  
    right subtrees plus 1*/
    *height = (lh > rh ? lh : rh) + 1; 
  
    /* If difference between heights of left and right  
    subtrees is more than 2 then this node is not balanced  
    so return 0 */
    if ((lh - rh >= 2) || (rh - lh >= 2)) 
        return 0; 
  
    /* If this node is balanced and left and right subtrees  
    are balanced then return true */
    else
        return l && r; 
}

int main(){
	node *root = build("true");
	int h = 0;
	(isBalanced(root, &h))? cout << "true" : cout << "false";
	return 0;
}