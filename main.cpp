#include <iostream>
#include <fstream>
#include <string>
#include "Tree.h"

using namespace std;

int readlist();

//output list from file
int readList(){

    ifstream fout;
    string line;
    cout << "before file open" << endl;
    fout.open("treeFile.txt");

    if (fout){cout << "file open for reading" << endl;}

    while (!fout.eof()){

       getline(fout, line);
       cout << line << endl;
    }
    fout.close();
    return 0;
}

int main()
{
    int num;
    cout << "How many trees?";
    cin >> num; cin.ignore();
    Tree tree[num];

    //open text file
    ofstream fin;
    fin.open("treeFile.txt", ios::app);
    //make tree objects and save to file
    for (int i = 0; i < num ; i++){

        tree[i] = tree[i].makeTree();
        fin << tree[i].Gettype() << " " << tree[i].Getheight() << " " << tree[i].Getleaf() << " " << tree[i].Getbark() << endl;

    }
    fin.close();

    cout << "\nTrees just entered:" << endl;
     for (int i = 0; i < num ; i++){
        tree[i].printList(i, tree[i]);
    }
    cout << "\nComplete tree list:" << endl;
    //output list from file for testing
    readList();

    return 0;
}
