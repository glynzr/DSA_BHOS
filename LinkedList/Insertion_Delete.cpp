#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(){
        this->next=NULL;
        this->value=0;
    }

    Node(int x){
        this->next=NULL;
        this->value=x;
    }
};

class LinkedList{
    public:
    Node* head,*tail;
    LinkedList(){
        this->head=this->tail=NULL;
    }

    void addFirst(int data){
        Node* node= new Node(data);
        if(head==NULL) head=tail=node;
        else{
            node->next=head;
            head=node;
            }
    }

    void addLast(int data){
        Node* node= new Node(data);
        if(head==NULL) head=tail=node;
        else{
            tail->next=node;
            tail=tail->next;
        }

    }
    void addIndex(int data,int index){
        Node* node = new Node(data);
        if(head==NULL) head=tail=node;
        else{
            Node* temp=head;
            int i=0;
            while(i!=index-1){
                    temp=temp->next;
                    i++;
            }
            if(temp->next==NULL) temp->next=node;
            else{
                Node* middle= temp->next;
                temp->next=node;
                node->next=middle;

            }
        }
    }

    void deleteFirst(){
        if(head==tail && tail!=NULL) head=tail=NULL;
        if(head!=tail){
            head=head->next;
        } 
    }

    void deleteLast(){
        if(head==tail && tail!=NULL) head= tail=NULL;
        if(head!=tail){
            Node* node= head;
            while(node->next!=tail) node=node->next;
            tail=node;
            tail->next=NULL;
        }
    }
    void deleteIndex(int index){
        if(head==tail && tail!=NULL) head=tail=NULL;
        if(head!=tail){
            int i=0;
            Node* node=head;

            while(i<index-1){
                node=node->next;
                i++;
            }
            node->next=node->next->next;
        }
    }
    void printList(){
        Node* node= head;
        if(node==NULL) cout<<"No element\n";
        while(node!=NULL){
            cout<<node->value<<" ";
            node=node->next;
        }
    }

};  
int main(){
    LinkedList* list= new LinkedList();
    list->addFirst(5);
    list->addLast(10);
    list->addLast(15);
    list->addFirst(1);
    list->printList();
    cout<<"\n\n";
    list->addIndex(6,2);
    list->printList();

    list->deleteLast();

    cout<<"\n\n";
    list->printList();

}
