#include<iostream>
#include<math.h>
#include<vector>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
struct node{
	int data;
	node* right;
	node* left;
};
node *insert(node *t, int x){
	if (t == NULL){
		node *temp = new node;
		temp->data =x;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	} else{
		if (x < t->data){
			t->left = insert(t->left, x);
		} else{
			t->right = insert(t->right, x);
		}
	}
	return t;
}
void print_tree(node* p){
	if(p != 0){
		print_tree(p->left);
		cout<<p->data<<" ";
		print_tree(p->right);
	}
}
node* c;
int main(){
	int a,b;
	cin>>a;
	for(int i = 0; i < a; ++i){
		cin>>b;
		c = insert(c,b);
	}
	print_tree(c);
	cout<<endl;
	return 0;
}