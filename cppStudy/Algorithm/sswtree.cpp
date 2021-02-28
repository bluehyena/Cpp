#include <iostream>

class Node {
private:
	char data;
	Node* left;
	Node* right;
public:
	Node() {
		data = ' ';
		left = NULL;
		right = NULL;
	}
	Node(char _data, Node* _left, Node* _right) {
		data = _data;
		left = _left;
		right = _right;
	}
	~Node() {
		delete left, right;
	}
	void setChildren(Node* _left, Node* _right) {
		if (_left->data != '.')
			left = _left;
		if (_right->data != '.')
			right = _right;
	}
	char getData() {
		return this->data;
	}
	Node* getLeft() {
		return this->left;
	}
	Node* getRight() {
		return this->right;
	}
};

class Tree {
private:
	Node* root;
public:
	Tree(Node* _root) {
		root = _root;
	}
	void inseartNode(Node* left, Node* right, char data) {
		Node* currentNode = searchNode(root, data);
		currentNode->setChildren(left, right);
	}
	Node* searchNode(Node* node, char data) {
		if (!node) {
			return NULL;
		}
		if (node->getData() == data) {
			return node;
		}
		Node* left = searchNode(node->getLeft(), data);
		if (left)
			return left;
		Node* right = searchNode(node->getRight(), data);
		if (right)
			return right;
		return NULL;
	}
};

void preorder(Node* node) {
	if (!node)
		return;
	std::cout << node->getData();
	preorder(node->getLeft());
	preorder(node->getRight());
}

void inorder(Node* node) {
	if (!node)
		return;
	inorder(node->getLeft());
	std::cout << node->getData();
	inorder(node->getRight());
}

void postorder(Node* node) {
	if (!node)
		return;
	postorder(node->getLeft());
	postorder(node->getRight());
	std::cout << node->getData();
}

int main() {
	int n;
	std::cin >> n;
	Node* root = new Node('A', NULL, NULL);
	Tree tree(root);
	for (int i = 0; i < n; i++) {
		char a, b, c;
		std::cin >> a >> b >> c;
		Node* left = new Node(b, NULL, NULL);
		Node* right = new Node(c, NULL, NULL);
		tree.inseartNode(left, right, a);
	}
	preorder(root);
	std::cout << std::endl;
	inorder(root);
	std::cout << std::endl;
	postorder(root);

	return 0;
}