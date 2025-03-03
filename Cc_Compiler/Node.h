#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <vector>
#include <memory>
#include <fstream>

using namespace std;

class Node {
public:
    int id, lineno;
    string type, value;
    vector<unique_ptr<Node>> children;

    Node(string t, string v, int l) : type(t), value(v), lineno(l) {}

    void print_tree(int depth = 0) {
        for (int i = 0; i < depth; i++)
            cout << "  ";
        cout << type << ":" << value << endl;

        for (const auto& child : children) {
            child->print_tree(depth + 1);
        }
    }

    void generate_tree() {
        std::ofstream outStream("tree.dot");
        int count = 0;
        outStream << "digraph {" << std::endl;
        generate_tree_content(count, outStream);
        outStream << "}" << std::endl;
        outStream.close();
    }

    void generate_tree_content(int &count, std::ofstream &outStream) {
        id = count++;
        outStream << "n" << id << " [label=\"" << type << ":" << value << "\"];" << endl;

        for (const auto& child : children) {
            child->generate_tree_content(count, outStream);
            outStream << "n" << id << " -> n" << child->id << endl;
        }
    }
};

#endif
s