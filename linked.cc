#include <iostream>
using namespace std;

class Node
{
  public:int data;
  Node *next;
};
class LinkedList // Create a LinkedList class
{
  private:
  Node * head, *tail;


public:
  LinkedList () // Initialize linked list
  {
    head = NULL;
    tail = NULL;
  }
// Add node
  void add_node (int item)
  {
    Node *new_node = new Node (); //generate the node
    new_node->data = item;
    new_node->next = NULL;

    if (head == NULL)
      {
	head = new_node;
	tail = new_node;
	return;
      }

    tail->next = new_node;
    tail = new_node;
    return;
  }

  void delete_node (int item) // delete present elements if needed
  {
    Node *curr = new Node ();
    Node *prev = new Node ();
    curr = head;
    while (curr != NULL && curr->data == item)
      {
	head = curr->next;
	free (curr);
	curr = head;
      }
    while (curr != NULL) //otherwise, delete element node key
      {
	if (curr->data == item)
	  {
	    prev->next = curr->next;
	  }
	prev = curr;
	curr = curr->next;
      }
  }
  void display ()
  {
    Node *temp = new Node ();
    temp = head;
    while (temp != NULL)
      {
	cout << temp->data << "\t";
	temp = temp->next;
      }

    cout << "\n";
  }
};

int
main ()
{
  LinkedList list;

//add linked list nodes
  list.add_node (1);
  list.add_node (1);
  list.add_node (1);
  list.add_node (4);
  list.add_node (5);
  list.add_node (1);

//display the data
  list.display ();
// delete required node occurances
  list.delete_node (5);
  list.delete_node (1);
  list.display ();
  return 0;
}
