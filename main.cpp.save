#include <iostream>
#include <string>
#include "Tree.h"

using namespace std;

int main()
{
    string type,leaf,bark;
    int height, num;
    cout << "How many trees?"; cin >> num; cin.ignore();

    Tree tree[num];
    for (int i = 0; i < num ; i++){
        cout << "Type of tree: "; getline(cin, type);
        cout << "leaf type: "; getline(cin, leaf);
        cout << "bark type: "; getline(cin, bark);
        cout << "Height in feet: "; cin >> height; cin.ignore();
        tree[i] = Tree(type, height, leaf, bark);
    }
    for (int i = 0; i < num ; i++){
        cout << "Tree " << i+1 << ": " << tree[i].Gettype() << ", " << tree[i].Getheight() << " ft, "
                << tree[i].Getleaf() << " leaf, " << tree[i].Getbark() << " bark."<<endl;
    }
    return 0;
}
