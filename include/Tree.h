#include <string>

using namespace std;


class Tree
{
    public:
    //prototypes
        //constructors
        Tree();
        Tree(string, int, string, string);

        //getters and setters
        string Gettype();
        void Settype(string);
        int Getheight();
        void Setheight(int);
        string Getleaf();
        void Setleaf(string);
        string Getbark();
        void Setbark(string);

        //user construct function
        Tree makeTree();

        //output functions
        void printList(int, Tree);


    private:
        string treeType;
        int treeHeight;
        string treeLeaf;
        string treeBark;
};
