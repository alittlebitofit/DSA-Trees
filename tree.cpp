#include <iostream>
using namespace std;

#include "queueUsingArray.h"

class Tree {
	private:
		
	
	public:
		Node * create() {
			
			Node *p, *t;
			int x;
			Queue q;
			
			cout<<"Enter root value: ";
			cin>>x;
			
			Node *root = new Node(x);
			q.enqueue(root);
			
			while(!q.isEmpty()) {
				p = q.dequeue();
				
				cout<<"Enter value of lchild of "<<p->getData()<<": ";
				cin>>x;
				
				if(x != -1) {
					t = new Node(x);
					p->setLchild(t);
					q.enqueue(t);
				}
				
				cout<<"Enter value of rchild of "<<p->getData()<<": ";
				cin>>x;
				
				if(x != -1) {
					t = new Node(x);
					p->setRchild(t);
					q.enqueue(t);
				}
				
			}
			
			return root;
			
		}
		
		void preorder(Node *root) {
			if(root) {
				cout<<root->getData()<<" ";
				preorder(root->getLchild());
				preorder(root->getRchild());
			}
		}
		
		void inorder(Node *root) {
			if(root) {
				inorder(root->getLchild());
				cout<<root->getData()<<" ";
				inorder(root->getRchild());
			}
		}
		
		void postorder(Node *root) {
			if(root) {
				postorder(root->getLchild());
				postorder(root->getRchild());
				cout<<root->getData()<<" ";
			}
		}
	
};


int main() {
	Tree t;
	Node *root = t.create();
	
	cout<<endl<<endl;
	cout<<"Preorder: ";
	t.preorder(root);
	cout<<endl<<endl;
	
	cout<<"Inorder: ";
	t.inorder(root);
	cout<<endl<<endl;
	
	cout<<"Postorder: ";
	t.postorder(root);
	cout<<endl<<endl;
	
}
