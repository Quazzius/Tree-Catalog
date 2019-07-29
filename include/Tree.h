#include <string>

using namespace std;


class Tree
{
    public:
        Tree(){}
        Tree(string type, int height, string leaf, string bark){
            Settype(type);
            Setheight(height);
            Setleaf(leaf);
            Setbark(bark);
        }

        string Gettype(){return treeType;}
        void Settype(string type) {treeType = type;}
        int Getheight() { return treeHeight; }
        void Setheight(int height) { treeHeight = height; }
        string Getleaf() { return treeLeaf; }
        void Setleaf(string leaf) { treeLeaf = leaf; }
        string Getbark() { return treeBark; }
        void Setbark(string bark) { treeBark = bark; }

    private:
        string treeType;
        int treeHeight;
        string treeLeaf;
        string treeBark;
};
