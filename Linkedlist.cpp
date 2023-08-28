/*Insert at head:First was 10,then add 12 at the head ,,and then add 15 at the head...output:15 12 10


#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this ->data= data;
    this ->next=NULL;
  }
};

void InsertAtHead(Node* &head,int d){
  //New node create
  Node* temp = new Node(d);
  temp ->next=head;
  head=temp;
}

void print(Node* &head){
  Node* temp = head;
  while(temp !=NULL){
    cout<<temp ->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

int main(){
  //created a new Node:
  Node* node1=new Node(10);

  cout<< node1 ->data<<endl;
  cout<< node1 ->next<<endl;

    //head pointed to node1: 
    Node* head= node1; 
    print(head);
    InsertAtHead(head,12);
    print(head);
    InsertAtHead(head,15);
    print(head);




  return 0;
}
*/




/*Insert at tail or end: First was 10,then add 12 at the head ,,and then add 15 at the head...output:10 12 15

#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this ->data= data;
    this ->next=NULL;
  }
};

void insertAtTail(Node* &tail,int d){
  //New node create
  Node* temp = new Node(d);
  tail ->next=temp;
  tail = tail ->next;
}

void print(Node* &head){
  Node* temp = head;
  while(temp !=NULL){
    cout<<temp ->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

int main(){
  //created a new Node:
  Node* node1=new Node(10);

  cout<< node1 ->data<<endl;
  cout<< node1 ->next<<endl;

    //head pointed to node1: 
    Node* head= node1; 
    print(head);
    insertAtTail(head,12);
    print(head);
    insertAtTail(head,15);
    print(head);




  return 0;
}
*/



/* Insert at any position: 


#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this ->data= data;
    this ->next=NULL;
  }
};

void insertAtTail(Node* &tail,int d){
  //New node create
  Node* temp = new Node(d);
  tail ->next=temp;
  tail = tail ->next;
}
 
void print(Node* &head){
  Node* temp = head;
  while(temp !=NULL){
    cout<<temp ->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
void insearAtPosition(Node* &head,int position,int d){
   
   if(position == 1){
    insertAtHead(head, d);
    return ;
   }
   Node* temp= head;
   int cnt=1;

   while(cnt<position-1){
    temp= temp ->next;
    cnt++;
   }
   //Creating a node for d:
   Node* nodeToInsert =new Node(d);
   nodeToInsert -> next = temp ->next;
   temp -> next=nodeToInsert; 

}

int main(){
  //created a new Node:
  Node* node1=new Node(10);

  //cout<< node1 ->data<<endl;
  //cout<< node1 ->next<<endl;

    //head pointed to node1: 
    Node* head= node1; 
    Node* tail= node1;
    print(head);

    insertAtTail(head,12);
    print(head);

    insertAtTail(head,15);
    print(head);

    insearAtPosition(head,2,25);
    print(head);




  return 0;
}
*/

