#include"shunt.h"

stack::stack() //constructor
{
  node* top = new node;
  top = NULL;
}

stack::~stack() //deconstructor
{
  //delete all values
}

int stack::push(int token)
{
  node* newNode = new node;
  if(top == NULL)
    {
      newNode->next = NULL;
    }
  else
    {
      newNode->next = top;
    }
  top = newNode;
  return 1;
}

int stack::pop(node* &top)
{
  if(top == NULL)
    {
      cout << "Nothing in the stack.\n";
      return 0;
    }
  else
    {
      node* temp;
      temp = top;
      top = top->next;
      return 1;
      delete temp;
    }
}

int stack::display()
{
  if(top == NULL)
    {
      cout << "Nothing in the stack.\n";
      return 0;
    }
  else
    {
      node* temp;
      temp = top;
      while(temp->next != NULL)
	{
	  cout << temp->data;
	}
      return 1;
    }
}
