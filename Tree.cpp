#include <iostream>
#include <fstream>
#include "Tree.h"

using namespace std;

Tree::Tree(){}//default contructor
//object constructor
Tree::Tree(string type, int height, string leaf, string bark){
    Settype(type);
    Setheight(height);
    Setleaf(leaf);
    Setbark(bark);
}
//gets and sets
string Tree::Gettype(){return treeType;}
void Tree::Settype(string type) {treeType = type;}
int Tree::Getheight() { return treeHeight; }
void Tree::Setheight(int height) { treeHeight = height; }
string Tree::Getleaf() { return treeLeaf; }
void Tree::Setleaf(string leaf) { treeLeaf = leaf; }
string Tree::Getbark() { return treeBark; }
void Tree::Setbark(string bark) { treeBark = bark; }

//tree object user input
Tree Tree::makeTree(){

    //vars
    string type, leaf, bark;
    int height;

    //user input
    cout << "Type of tree: "; getline(cin, type);
    cout << "leaf type: "; getline(cin, leaf);
    cout << "bark type: "; getline(cin, bark);
    cout << "Height in feet: "; cin >> height; cin.ignore();
    return (Tree(type, height, leaf, bark));

}
//output tree object
void Tree::printList(int i, Tree tree){
    cout << "Tree " << i+1 << ": " << tree.Gettype() << ", " << tree.Getheight() << " ft, "
            << tree.Getleaf() << " leaf, " << tree.Getbark() << " bark."<<endl;
}
//output list from file
int Tree::readList(){

    ifstream fout;
    string line;
    fout.open("treeFile.txt");

    while (!fout.eof()){

       getline(fout, line);
       cout << line << endl;
    }
    fout.close();
    return 0;
}
//input data to file
Tree Tree::writeList(int i, Tree tree){
    //open text file
    ofstream fin;
    fin.open("treeFile.txt", ios::app);

    //make tree objects and save to file
    tree = tree.makeTree();
    fin << tree.Gettype() << " " << tree.Getheight() << " " << tree.Getleaf() << " " << tree.Getbark() << endl;

    fin.close();
    return tree;
}

