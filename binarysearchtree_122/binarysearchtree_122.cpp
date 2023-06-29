#include <iostream>
#include <string>
using namespace std;

class Node
{
public :
    string info;
    Node* leftchild;
    Node* rightchild;

    //constructor for the node class
    Node(string i, Node * l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree
{
public :
    Node* ROOT;

    BinaryTree()
    {
        ROOT = NULL; // Initalizing ROOT to NULL
    }

    void insert(string element) // insert a node in the binary search tree
    {
        Node* newNode = new Node(element, NULL, NULL); // Allocate memory to new node
        newNode->info = element; // Assign value to the data field of the new node
    }
};
int main()
{
    std::cout << "Hello World!\n";
}

