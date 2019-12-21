#include <linkedlist.h>
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(LinkedListTest, Add) { 
	LinkedList* ll = new LinkedList();
	ll->add("abolfazl",21);
	ASSERT_EQ(ll->printNodes(),"abolfazl-21+");
	ll->add("hamed",20);
	ASSERT_EQ(ll->printNodes(),"abolfazl-21+hamed-20+");
}

TEST(LinkedListTest, Get) { 
	LinkedList* ll = new LinkedList();
	ll->add("abolfazl",21);
	ASSERT_EQ(ll->get("abolfazl"),21);
	ll->add("hamed",20);
	ASSERT_EQ(ll->get("abolfazl"),21);
	ASSERT_EQ(ll->get("hamed"),20);
}

 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}