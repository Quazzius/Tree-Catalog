#include <iostream>
#include <fstream>
#include <string>
#include "Tree.h"

using namespace std;

int main()
{
    Tree tf; //tree class object
    int answer;

    while (answer != 4){
        cout << "1. Enter Tree Data\n2. Search Records\n3. Print List\n4. End" << endl;
        cin >> answer;
        switch(answer){
            case 1:{
                int num;
                cout << "How many trees?";
                cin >> num; cin.ignore();
                Tree tree[num]; //tree class object array

                //enter trees and write to file
                for (int i = 0; i < num ; i++){
                    tree[i] = tf.writeList(i, tree[i]);
                }
                //output data to user
                cout << "\nTrees just entered:" << endl;
                for (int i = 0; i < num ; i++){
                    tf.printList(i, tree[i]);
                }
            }
            break;

            case 2:{
                tf.searchList();
            }
            break;

            case 3:{
                //output list from file
                tf.readList();
            }
            break;

            case 4:
            break;

            default: cout << "Invalid Entry" << endl;
        }//end switch
    }//end while
    return 0;
}
