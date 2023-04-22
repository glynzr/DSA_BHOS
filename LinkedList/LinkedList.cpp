#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(){
        this->value=0;
        this->next=NULL;
    }

    Node(int x){
        this->value=x;
        this->next=NULL;
    }
};


class LinkedList{
    public:
    Node* head,*tail;
    LinkedList(){
        head=tail=NULL;
    }

    void addFirst(int x){
        Node* node= new Node(x);
        if(head==tail && tail==NULL) head=tail=node;
        else{
            node->next=head;
            head=node;
        }
    }

    void addLast(int x){
        Node* node = new Node(x);
        if(head==tail && tail==NULL) head=tail=node;
        else{
            tail->next=node;
            tail=tail->next;
        }
    }
    void deleteFirst(){
        if(head==tail && tail!=NULL) head=tail=NULL;
        if(head!=tail){
            head=head->next;
        }
    }
    void deleteLast(){
        if(head==tail && tail!=NULL) head=tail=NULL;
        if(head!=tail){
            Node* node=head;
            while(node->next!=tail){
                node=node->next;
            }
            tail=node;
            tail->next=NULL;

        }
    }

    void printList(){
        if(head!=NULL){
            while(head!=NULL){
                cout<<head->value<<"\n";
                head=head->next;
            }
        }
    }

    void addMiddle(int data,int index){
        int i=0;
        Node* temp= head;
        while(i!=index-1){
            temp=temp->next;
            i++;
        }
        Node* a=temp->next;
        temp->next=new Node(data);
        temp->next->next=a;

    }
    void deleteMiddle(int index){
        int i=0;
        Node* temp=head;
        while(i!=index-1){
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;

    }

};
int main(){
   LinkedList* list= new LinkedList();
   list->addFirst(2);
   list->addFirst(1);
   list->addLast(3);
   list->addLast(4);
   list->addLast(5);

   list->addMiddle(6,2);
  

   list->deleteMiddle(3);
    list->printList();
  

}
