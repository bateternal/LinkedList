#include "node.h"
#include <string>
#include <iostream>

using namespace std;

class LinkedList {
public:
	Node* head;
	LinkedList(){ head = NULL;}
	void add(string key,int value);
	string printNodes();
	int get(string key);
};


void LinkedList::add(string key,int value) {
	Node* node = new Node();
	node->next = NULL;
	node->set_value(key,value);
	if (head == NULL) {
		head = node;
		return;
	}
	Node* target = head;
	while(target != NULL){
		if (target->next == NULL) break;
		target = target->next;
		if (target->key == key) {
			target->value = value;
			return;
		}
	}
	target->next = node;
}

int LinkedList::get(string key) {
	if (head == NULL) {
		cout<<key<<" has not found"<<endl;	
		return 0;
	}
	Node* target = head;
	while (target != NULL) {
		if (target->key == key) {
			cout<<target->value<<endl;
			return target->value;
		}
		target = target->next;
	}
	cout<<key<<" has not found"<<endl;	
	return 0;
}

string LinkedList::printNodes() {
	Node* target = this->head;
	string output = "";
	while(target != NULL) {
		output = output + target->key + "-" + to_string(target->value) + "+";
		target = target->next;
	}
	return output;
}