#include <iostream>
#define PI 3.14
#include <stack>
#include <vector>
#include <bitset>
#include <cmath>
#include <sstream>
#include <unordered_map>
#include <map>
#include <string>
#include <set>
using namespace std;
class Node{
    public:
      int data;
      Node* next;
      Node(int data){
        this->data=data;
        this->next=NULL;
      }
};
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertatposition(Node* &head,int position,int d){
    Node* temp=head;
    while(position--){
        temp=temp->next;
    }
    Node *temp2=new Node(d);
    temp2->next=temp->next;
    temp->next=temp2;
}
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){

     Node* node1=new Node(10);
     cout<< node1->data<<endl;
     cout<<node1->next<<endl;
        Node* head=node1;
        Node* tail=node1;
        // insertathead(head,12);
        // insertathead(head,17);
        // insertathead(head,27);
        // print(head);
        insertattail(tail,12);
        insertattail(tail,17);
        insertattail(tail,27);
        
        print(head);
         insertatposition(head,2,22);
         insertatposition(head,1,5);
         insertatposition(head,3,24);
            print(head);
    return 0;
}