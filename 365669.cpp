#include<iostream>
#include<queue>
using namespace std;
struct Node{
	int date;
	struct Node *left, *right;
};
Node* newNode(int data){
Node *temp = new Node;
	temp-> data =data;
	temp->left =temp->right = NULL;
	return temp;
}
int main (){
	Node * root =newNode(1);
	root->left = newNode(2);
	root-> right =newNode(3);
	root->left->left =newNode(4);
	root->left->right =newNode(5);
	cout <<"level Order Traversal of Binary Tree is ";
	queue<Node*> q;
	q.push(root);
	while(q.empty() == false){
		Node *node = q.front();
		cout<<node->date << ",";
		q.pop();
		if(node->left !NULL)
		q.push (node->left);
		if (node->right!NULL)
		q.push (node->right)
    
	}
	return()0;
}
