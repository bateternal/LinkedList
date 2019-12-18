#include <string>

using namespace std;


class Node {
public:
	Node* next;
	string key; 
	int value;
	
	Node(string key,int value){
		key = key;
		value = value;
	}
};


