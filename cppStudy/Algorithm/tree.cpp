#include <iostream>

using namespace std;

template<typename T>
class Node {
private:
	T data;
	Node* child;
	Node* sibling;
public:
	Node(T data) {
		this->data = data;
		child = NULL;
		sibling = NULL;
	}
	~Node() {
		DeleteNode(child);
		DeleteNode(sibling);
	}
	void DeleteNode(Node* n) {
		if (n == NULL) return;
		delete n;
	}
	void SetData(T data) {
		this->data = data;
	}
	void SetChild(Node* child) {
		this->child = child;
	}
	void SetSibling(Node* sibling) {
		this->sibling = sibling;
	}
	T GetData() {
		return data;
	}
	Node* GetChild() {
		return child;
	}
	Node* GetSibling() {
		return sibling;
	}
};

template<typename T>
class Tree {
private:
	Node<T>* root;
	Node<T>* pn; // Recent node
public:
	Tree() {
		root = NULL;
		pn = NULL;
	}
	Tree(T data) {
		root = new Node<T>(data);
		pn = root;
	}
	~Tree() {
		delete root;
	}
	void SetRoot(T data) {
		root = new Node<T>(data);
		pn = root;
	}
	void SetPN(Node<T>* n) {
		pn = n;
	}

	Node<T>* GetRoot() {
		return root;
	}
	Node<T>* GetPN() {
		return pn;
	}

	void NodeChangeData(T data) {
		pn->SetData(data);
	}
	void ParentInsertChild(T data) {
		Node<T>* tmp;

		if (pn == NULL) pn->SetChild(new Node<t>(data));
		else {
			tmp = pn->GetChild();
			if (tmp == NULL) {
				pn->SetChild(new Node<T>(data));
				return;
			}
			while (true) {
				if (tmp->GetSibling() == NULL) {
					tmp->SetSiblings(new Node<T>(data));
					break;
				}
				tmp = tmp->GetSibling();
			}
		}
	}
	void ParentDeleteChild(T data) {
		Node<T>* tmp = NULL;
		Node<T>* pre = NULL;

		tmp = pn->GetChild();
		if (tmp == NULL) {
			cout << "data 가 존재하지 않습니다." << '\n';
			return;
		}
		if (tmp->GetData() == data) {
			pn->SetChild(tmp->GetSibling());
			tmp->SetSibling(NULL);
			delete tmp;
			return;
		}
		while (true) {
			pre = tmp;
			tmp = tmp->GetSibling();
			if (tmp == NULL) return;
			if (tmp->GetData() == data) {
				pre->SetSibling(tmp->GetSibling());
				tmp->SetSibling(NULL);
				delete tmp;
				break;
			}
		}
		if (tmp == NULL) cout << "data가 없습니다." << '\n';
	}
	void PrintChild() {
		Node<T>* tmp = pn->GetChild();
		if (tmp == NULL) cout << "child가 없습니다." << '\n';
		else {
			while (true) {
				if (tmp == NULL) break;
				cout << tmp->GetData() << '\n';
				tmp = tmp->GetSibling();
			}
			cout << '\n';
		}
	}
};

int main() {

	return 0;
}