#include <linkedlist.h>
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(LinkedListTest, single_item) { 
	LinkedList* ll = new LinkedList();
	ll->add("abolfazl",21);
	ASSERT_EQ(ll->get("abolfazl"),21);
}

TEST(LinkedListTest, item_list) {
	LinkedList* ll = new LinkedList();
	ll->add("abolfazl",21);
	ASSERT_EQ(ll->slice(0,-1),"abolfazl-21+");
	ll->add("hamed",20);
	ASSERT_EQ(ll->slice(0,-1),"abolfazl-21+hamed-20+");
	ll->add("hosein",19);
	ASSERT_EQ(ll->slice(0,-1),"abolfazl-21+hamed-20+hosein-19+");
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}