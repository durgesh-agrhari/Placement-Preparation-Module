// C++ implementation of the approach
// Code is contributed by Paras Saini
#include <bits/stdc++.h>
using namespace std;
class LinkedList {
public:
	int val;
	LinkedList* next;

	LinkedList()
	{
		this->next = NULL;
		this->val = 0;
	}
	LinkedList(int val)
	{
		this->next = NULL;
		this->val = val;
	}

	LinkedList* addNode(int val)
	{
		if (this == NULL) {
			return new LinkedList(val);
		}
		else {
			LinkedList* ptr = this;
			while (ptr->next) {
				ptr = ptr->next;
			}
			ptr->next = new LinkedList(val);
			return this;
		}
	}

	void removeNthNodeFromEndHelper(LinkedList* head,
									int& n)
	{
		if (!head)
			return;
		// Adding the elements in the recursion
		// stack
		removeNthNodeFromEndHelper(head->next, n);
		// Popping the elements from recursion stack
		n -= 1;
		// If we reach the previous of target node
		if (n == -1){
			LinkedList* temp = head->next;
			head->next = head->next->next;
			free (temp);
		}
	}

	LinkedList* removeNthNodeFromEnd(int n)
	{
		// return NULL if we have NULL head or only
		// one node.
		if (!this or !this->next)
			return NULL;

		// Create a dummy node and point its next to
		// head.
		LinkedList* dummy = new LinkedList();
		dummy->next = this;

		// Call function to remove Nth node from end
		removeNthNodeFromEndHelper(dummy, n);

		// Return new head i.e, dummy->next
		return dummy->next;
	}

	void printLinkedList()
	{
		if (!this) {
			cout << "Empty List\n";
			return;
		}
		LinkedList* ptr = this;
		while (ptr) {
			cout << ptr->val << " ";
			ptr = ptr->next;
		}
		cout << endl;
	}
};

class TestCase {
private:
	void printOutput(LinkedList* head)
	{
		// Output:
		if (!head)
			cout << "Empty Linked List\n";
		else
			head->printLinkedList();
	}
	void testCase1()
	{
		LinkedList* head = new LinkedList(1);
		head = head->addNode(2);
		head = head->addNode(3);
		head = head->addNode(4);
		head = head->addNode(5);
		head->printLinkedList(); // Print: 1 2 3 4 5
		head = head->removeNthNodeFromEnd(2);
		printOutput(head); // Output: 1 2 3 5
	}

	void testCase2()
	{
		// Important Edge Case, where linkedList [1]
		// and n=1,
		LinkedList* head = new LinkedList(1);
		head->printLinkedList(); // Print: 1
		head = head->removeNthNodeFromEnd(2);
		printOutput(head); // Output: Empty Linked List
	}

	void testCase3()
	{
		LinkedList* head = new LinkedList(1);
		head = head->addNode(2);
		head->printLinkedList(); // Print: 1 2
		head = head->removeNthNodeFromEnd(1);
		printOutput(head); // Output: 1
	}

public:
	void executeTestCases()
	{
		testCase1();
		testCase2();
		testCase3();
	}
};

int main()
{
	TestCase testCase;
	testCase.executeTestCases();
	return 0;
}
