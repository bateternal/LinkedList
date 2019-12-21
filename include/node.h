#include <string>

using namespace std;


class Node {
public:
	Node* next;
	string key; 
	int value;
	Node(){ next = NULL;}
	void set_value(string key,int  value);
	string get_key();
};


void Node::set_value(string key,int value) {
	this->key = key;
	this->value = value;
}

string Node::get_key(){
	return this->key;
}



