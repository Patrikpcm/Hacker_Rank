#include <iostream>
#include <cstddef>
using namespace std;	

class Node{
public:
    int data;
    Node *next;
    
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

class Solution{
    public:

      Node* insert(Node *head, int data){
        
        Node *novo = new Node(data);

        if (head == NULL){
            head = novo;
            return head;
        }
        else{
            Node* seek = head;
            while(seek->next != NULL){
                seek = seek->next;
            }
            seek->next = novo;
            return (head);
        }
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}