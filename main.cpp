// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include <random>
#include <vector>
#include "BST312.h"

using namespace std;
int main(){
    vector<int> input;
    for (int i=0; i<15; i++){
        input.push_back(i);
    }

    random_shuffle(input.begin(),input.end());
    for (int i=0; i<input.size(); i++){
        cout << input[i] << " ";
    }
    cout << endl << endl;

    BST_312<int> tree;
    for (int i=0; i<input.size(); i++){
        tree.insertItem(input[i]);
    }
    cout << "Node count: " << tree.countNodes() << endl << endl;


    vector<int> inOrder = tree.inOrderTraversal();
    cout << "In order traversal:" << endl;
    for (int i=0; i<inOrder.size(); i++){
        cout << inOrder[i] << " ";
    }
    cout << endl << endl;

    vector<int> preOrder = tree.preOrderTraversal();
    cout << "Pre order traversal:" << endl;
    for (int i=0; i<preOrder.size(); i++){
        cout << preOrder[i] << " ";
    }
    cout << endl << endl;

    vector<int> postOrder = tree.postOrderTraversal();
    cout << "Post order traversal:" << endl;
    for (int i=0; i<postOrder.size(); i++){
        cout << postOrder[i] << " ";
    }
    cout << endl << endl;

    cout << "Is item in list: " << endl;
    for (int i=0; i<input.size(); i++){
        cout << input[i] << ": " << tree.isItemInTree(input[i]) << endl;
    }
    cout << 100 << ": " << tree.isItemInTree(100) << endl;
    cout << 86 << ": " << tree.isItemInTree(86) << endl;
    cout << 23 << ": " << tree.isItemInTree(23) << endl;

    tree.makeEmpty();
    vector<int> afterEmpty = tree.inOrderTraversal();
    cout << "After empty: " << endl;
    for (int i=0; i<afterEmpty.size(); i++){
        cout << afterEmpty[i] << " " << endl;
    }
    cout << 100 << ": " << tree.isItemInTree(100) << endl;
    cout << "Node count: " << tree.countNodes() << endl;

}

/*
template <typename T>
//using namespace std;
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;

    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "tree";
    bst.deleteItem(s);
    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;

}*/

