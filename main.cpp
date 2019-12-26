#include "linkedlist.h"
#include <gtest/gtest.h>

using namespace std;


int main(int argc, char **argv) {
	LinkedList* ll = new LinkedList();
	ll->add("abolfazl",21);	
	cout<<ll->printNodes()<<endl;
    return 0;
}
