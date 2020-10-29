//C++ program to print Boundary Sum of a Binary Tree
#include <bits/stdc++.h>
using namespace std;

// tree node is defined
class tree{
	public:
		int data;
		tree *left;
		tree *right;
};


int findBoundarySum(tree* root){ //finding boundary sum
if(root==NULL) //base case
	return 0;
int sum=0; //(step1)
sum+=root->data; //add root value (step2)

//find the leaf nodes & add(step3)
tree* temp=root, *store; //copy root to temp
queue<tree*> q; //creat a queue to store tree* variables (pointer to nodes)

//doing level order traversal
q.push(temp);
while(!q.empty()){
	store=q.front();
	q.pop();
	// if left & right both pointers are NULL, it's a leaf node
	if(store->left==NULL && store->right==NULL) 
		sum+=store->data; // add leaf node value
	if(store->left)
		q.push(store->left);
	if(store->right)
		q.push(store->right);
}

/////end of step3////////


//adding the leftmost nodes excluding leaf node(step4)///////////
temp=root->left;
while(!(temp->right==NULL && temp->left==NULL)){//avoiding leaf node
	sum+=temp->data;
	if(temp->left)
		temp=temp->left;
	else
		temp=temp->right;
}

////end of step4//////////

//adding the rightmost nodes excluding leaf node(steps)///////////
temp=root->right;
while(!(temp->right==NULL && temp->left==NULL)){//avoiding leaf node
	sum+=temp->data;
	if(temp->right)
		temp=temp->right;
	else
		temp=temp->left;
}
////end of step5//////////
//boundary sum is now calculated, return it
return sum;
}

// creating new node
tree* newnode(int data)  
{ 
	tree* node = (tree*)malloc(sizeof(tree)); 
	node->data = data; 
	node->left = NULL; 
	node->right = NULL; 
	return(node); 
} 

int main() 
{ 
	//**same tree is builted as shown in example**
	cout<<"Tree is built like the example aforesaid"<<endl;
	//building the tree like as in the example
	tree *root=newnode(2); 
	root->left= newnode(7); 
	root->right= newnode(5); 
	root->right->right=newnode(9);
	root->right->right->left=newnode(4);
	root->left->left=newnode(2); 
	root->left->right=newnode(6);
	root->left->right->left=newnode(5);
	root->left->right->right=newnode(11);

	cout<<"finding boundary sum......"<<endl; 
	cout<<"boundary sum is "<<findBoundarySum(root)<<endl;

	return 0; 
} 
