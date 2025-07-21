#ifndef NODE_H
#define NODE_H

#include <sys/wait.h>
#include <unistd.h>

#include <fstream>
#include <iostream>
#include <list>
#include <memory>
#include <string>

using namespace std;

class Node {
    public:
        mutable int id; // Mutable to modify in const methods
        int lineno;
        std::string type, value; // Use std::string explicitly
        std::list<std::unique_ptr<Node>> children; // Use std::list explicitly

        Node() : type("uninitialised"), value("uninitialised"), lineno(0), id(0) {}
        
        // New constructor to match the error context
        Node(const std::string &t, const std::string &v, int l) 
            : type(t), value(v), lineno(l), id(0) {}

        // Method to print the parse tree to the console
        void print_tree(int depth = 0) const {
            for (int i = 0; i < depth; i++) std::cout << "  ";
            std::cout << type << ":" << value << std::endl;
            for (const auto &child : children) {
                if (child) {
                    child->print_tree(depth + 1);
                }
            }
        }

        // Method to generate a DOT file for the parse tree
        void generate_tree() const {
            std::ofstream outStream("tree.dot");
            int count = 0;
            outStream << "digraph {" << std::endl;
            generate_tree_content(count, outStream);
            outStream << "}" << std::endl;
            std::cout << "\nBuilt a parse-tree at tree.dot. Use 'make tree' to generate the pdf version.\n\n";
        }

        // Helper method to generate content for the DOT file
        void generate_tree_content(int &count, std::ofstream &outStream) const {
            id = count++; // Allowed because 'id' is mutable
            outStream << "n" << id << " [label=\"" << type << ":" << value << "\"];" << std::endl;
            for (const auto &child : children) {
                if (child) {
                    child->generate_tree_content(count, outStream);
                    outStream << "n" << id << " -> n" << child->id << std::endl;
                }
            }
        }
};

#endif
