#include <iostream>
using namespace std;
int c = 0;
struct Node {
    int data;
    Node* l;
    Node* r;
    Node(int val) {
        data = val;
        l = r = nullptr;
    }
};

void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->l);
    cout << root->data << " ";
    inorder(root->r);
}

int count(Node* root) {
    if (root == nullptr){
        return 0;
    }
    c++;

    return 1 + count(root->l)+ count(root->r);
}

int main() {
    Node* root = new Node(10);
    root->l = new Node(6);
    root->r = new Node(20);
    root->l->l = new Node(4);
    root->l->r = new Node(9);
    root->r->l= new Node(15);
    root->r->r = new Node(25);
    inorder(root);
    cout<<endl;
    cout << "Total nodes: " << count(root)<<"\t"<<c<<endl;

    return 0;
}
