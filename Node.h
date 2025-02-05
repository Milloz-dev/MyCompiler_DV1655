#ifndef NODE_H
#define	NODE_H

#include <list>
#include <iostream>
#include <fstream>
#include <vector>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;


class Node {
public:
    std::string type;
    std::string value;
    int line_number;
	int id;
    std::vector<Node*> children;

    Node(std::string t, std::string v, int ln) : type(t), value(v), line_number(ln) {}

    void add_child(Node* child) {
        children.push_back(child);
    }

    void print_tree(int indent = 0) {
        for (int i = 0; i < indent; ++i) std::cout << "  ";
        std::cout << type << ": " << value << " (Line: " << line_number << ")\n";
        for (auto& child : children) {
            child->print_tree(indent + 1);
        }
    }
  
	void generate_tree() {
		std::ofstream outStream;
		const char* filename = "tree.dot";
	  	outStream.open(filename);

		int count = 0;
		outStream << "digraph {" << std::endl;
		generate_tree_content(count, &outStream);
		outStream << "}" << std::endl;
		outStream.close();

		printf("\nBuilt a parse-tree at %s. Use 'make tree' to generate the pdf version.\n", filename);
  	}

  	void generate_tree_content(int &count, ofstream *outStream) {
	  id = count++;
	  *outStream << "n" << id << " [label=\"" << type << ":" << value << "\"];" << endl;

	  for (auto i = children.begin(); i != children.end(); i++)
	  {
		  (*i)->generate_tree_content(count, outStream);
		  *outStream << "n" << id << " -> n" << (*i)->id << endl;
	  }
  }

};

#endif