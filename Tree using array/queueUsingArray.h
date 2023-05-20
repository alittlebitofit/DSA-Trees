class Node {
	private:
		Node *lchild = NULL;
		int data;
		Node *rchild =  NULL;
	
	public:
		Node() {}
		
		Node(int x) {this->data = x;}
		
		Node *getLchild() {return this->lchild;}
		void setLchild(Node *lchild) {this->lchild=lchild;}
		
		int getData() {return this->data;}
		void setData(int x) {this->data=x;}
		
		Node *getRchild() {return this->rchild;}
		void setRchild(Node *rchild) {this->rchild=rchild;}
	
};

class Queue {
	private:
		int size;
		int front = -1;
		int rear = -1;
		Node * *Q;
	
	public:
	
		Queue() {
			this->size = 100;
			this->Q = new Node*[this->size];
		}
		
		void enqueue(Node *t) {
			if(!this->isFull()) {
				
				Q[++this->rear] = t;
			} else {
				cout<<"Queue overflow\n";
			}
		}
		
		Node * dequeue() {
			if(!this->isEmpty()) {
				return Q[++this->front];
			}
			return NULL;
		}
		
		bool isEmpty() {
			return this->front ==  this->rear;
		}
		
		bool isFull() {
			return this->rear == (this->size - 1);
		}
	
};