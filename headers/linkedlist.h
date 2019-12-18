#include "node.h"
#include <string>
#include <iostream>

using namespace std;

class LinkedList {
public:
	Node* head;
	void add(string key,int value);
	void printNodes();
	int get(string key);
};

void LinkedList::add(string key,int value) {
	Node node(key,value);
	if (head == NULL) {
		head = &node;
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
	target->next = &node;
}

int LinkedList::get(string key) {
	if (head == NULL) {
		cout<<key<<" has not found"<<endl;	
		return 0;
	}
	Node* target = head;
	while (target != NULL) {
		if (target->key == key) return target->value;
		target = target->next;
	}
	cout<<key<<" has not found"<<endl;	
	return 0;
}

void LinkedList::printNodes() {
	Node* target = head;
	while(target != NULL) {
		cout<<"key : "<<target->key<<" value : "<<target->value<<endl;
		target = target->next;
	}
}