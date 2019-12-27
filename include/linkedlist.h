#include "node.h"
#include <string>
#include <iostream>

using namespace std;

class LinkedList {
public:
	Node* head;
	LinkedList(){ head = NULL;}
	void add(string key,int value);
	string slice(int start,int end);
	int get(string key);
	void del(string key);
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

void LinkedList::del(string key){
	if (head == NULL) {
		cout<<key<<" has not found"<<endl;
		return;
	}
	Node* target = head;
	if (target->key == key) {
		head = target->next;
		return;
	}
	Node* previous = target;
	target = target->next;
	
	while (target != NULL) {
		if (target->key == key) {
			previous->next = target->next;
			return;
		}
		previous = target;
		target = target->next;
	}
	cout<<key<<" has not found"<<endl;
}

string LinkedList::slice(int start,int end) {
	string output = "";
	int index = 0;
	Node* target = head;
	while(target != NULL) {
		if (index >= start) {		
			output = output + target->key + "-" + to_string(target->value) + "+";
		}
		if (index == end) {
			return output;
		}
		target = target->next;
		index++;
	}
	return output;
}