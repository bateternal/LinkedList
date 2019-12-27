#include <linkedlist.h>
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(LinkedListTest, full_list) {
	LinkedList* ll = new LinkedList();
	ll->add("abolfazl",21);
	ll->add("ali",20);
	ll->add("morteza",21);
	ll->add("jafar",19);
	ll->add("reza",21);
	ASSERT_EQ(ll->slice(0,-1),"abolfazl-21+ali-20+morteza-21+jafar-19+reza-21+");
	ASSERT_EQ(ll->slice(0,3),"abolfazl-21+ali-20+morteza-21+jafar-19+");
	ASSERT_EQ(ll->slice(1,4),"ali-20+morteza-21+jafar-19+reza-21+");
	ASSERT_EQ(ll->slice(1,3),"ali-20+morteza-21+jafar-19+");

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}