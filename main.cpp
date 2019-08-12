#include <iostream>
#include <fstream>
#include <string>
#include "Tree.h"

using namespace std;

int main()
{
    int num;
    cout << "How many trees?";
    cin >> num; cin.ignore();
    Tree tree[num]; //tree class object array
    Tree tf; //tree class object

    //enter trees and write to file
    for (int i = 0; i < num ; i++){
        tree[i] = tf.writeList(i, tree[i]);
    }
    //output data to user
    cout << "\nTrees just entered:" << endl;
    for (int i = 0; i < num ; i++){
        tf.printList(i, tree[i]);
    }
    cout << "\nComplete tree list:" << endl;
    //output list from file
    tf.readList();

    return 0;
}
