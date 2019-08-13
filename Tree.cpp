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

    cout << "\nComplete tree list:" << endl;
    printf("%8s%8s%12s%15s%15s\n", "Name", "Ft.", "Leaf", "Bark", "Date");
    while (!fout.eof()){

       getline(fout, line);
       cout << line << endl;
    }
    fout.close();
    return 0;
}
//input data to file
Tree Tree::writeList(int i, Tree tree){
    //open text file with format option
    FILE * fin;
    fin = fopen("treeFile.txt", "a");//open to append

    //get date
    time_t now = time(0);
    // convert now to string form
    char* dt = ctime(&now);
    //make tree objects and save to file
    tree = tree.makeTree();
    fprintf(fin, "%10s%5d%15s%15s%30s\n" ,tree.Gettype().c_str(), tree.Getheight(), tree.Getleaf().c_str(), tree.Getbark().c_str(), dt);

    fclose(fin);
    return tree;
}
void Tree::searchList(){

    ifstream fout;
    string line;
    string s;

    cout << "\nEnter search criteria:  ";
    cin >> s;
    fout.open("treeFile.txt");
    printf("%8s%8s%12s%15s%15s\n", "Name", "Ft.", "Leaf", "Bark", "Date");
    size_t pos;
    while (!fout.eof()){

       getline(fout, line);
       pos = line.find(s);
       if (pos != string::npos){
        cout << line << endl;
       }
    }
    cout << endl;;
    fout.close();
}

