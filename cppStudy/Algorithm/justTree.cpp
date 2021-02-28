#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class Node {
public:
	Node(){
		this->mData = NULL;
		this->mChildNum = 0;
	}
	Node(T data) {
		this->mData = data;
		this->mChildNum = 0;
	}
	T getData() {
		return mData; // 벡터사이즈로
	}
	vector<Node*> getChildren() {
		return mChildren;
	}
	int getChildNum() {
		return mChildNum;
	}
	void setData(T data) {
		this->mData = data;
	}
	void setChildren(Node* child) {
		this->mChildren.push_back(child);
		this->mChildNum += 1;
	}
	void cutChild(Node* node) {
		if (this->mChildNum == 0) {
			return;
		}
		this->mChildNum -= 1;
		this->mChildren.pop_back();
	}
private:
	T mData;
	int mChildNum;
	vector<Node*> mChildren;
};

template<typename T>
class Tree {
public:
	Tree() {
		this->root = NULL;
	}
	Tree(Node<T>* rootNode) {
		this->root = rootNode;
	}
	~Tree() {

	}
	Node<T>* getRoot() {
		return root;
	}
	void setRoot(Node<T>* rootNode) {
		this->root = rootNode;
	}
	void insertNode(Node<T>* parent, Node<T>* child) {
		parent->setChildren(child);
	}
	void deleteNode(Node<T>* node) {
		for (int i = 0; i < node->getChildNum(); ++i) {
			deleteNode(node->getChildren()[i]);
			node->cutChild(node->getChildren()[i]);
			if (node->getChildNum() == 0) {
				delete node;
			}
		}
	}
private:
	Node<T>* root;
};

template<typename T>
void preorderTree(Node<T>* node) {
	if (!node) {
		return;
	}
	cout << node->getData();
	for (int i = 0; i < node->getChildNum(); ++i) {
		preorderTree(node->getChildren()[i]);
	}
}

template<typename T>
void postorderTree(Node<T>* node) {
	if (!node) {
		return;
	}
	for (int i = 0; i < node->getChildNum(); ++i) {
		preorderTree(node->getChildren()[i]);
	}
	cout << node->getData();
}

int main() {
	Node<int> a(1);
	Node<int> b(2);
	Node<int> c(3);
	Node<int> d(4);
	Node<int> e(5);
	Node<int> f(6);
	Node<int> g(7);
	Node<int> h(8);
	Node<int> i(9);

	Tree<int> tree(&a);
	tree.insertNode(&a, &b);
	tree.insertNode(&a, &c);
	tree.insertNode(&a, &d);
	tree.insertNode(&b, &e);
	tree.insertNode(&b, &f);
	tree.insertNode(&d, &g);
	tree.insertNode(&d, &h);
	tree.insertNode(&h, &i);

	preorderTree(&a);
	cout << '\n';
	postorderTree(&a);
	cout << '\n';

	tree.deleteNode(&b);
	preorderTree(&a);

	return 0;
}