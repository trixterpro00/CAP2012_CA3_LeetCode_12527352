/*
Single linked list containing roll number as data and a pointer to the next student:

1.Create an initial single linked list containing three student roll numbers
2.Insert  a new student at the beginning position in the linked list
3.Display all the student roll numbers in the linked list
*/

#include <iostream>
using namespace std;

struct Node{
    int rollno;
    Node *next=NULL;
};

void insertBeg(Node *&head, int rollno){
    Node *temp = new Node;
    temp->rollno = rollno;
    temp->next = head;
    head = temp;
}

void display(Node *head){
    Node *r = head;
    while (r != NULL){
        cout << r->rollno << " ";
        r = r->next;
    }
    cout << endl;
}

int main(){
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;

    head->rollno=10;
    head->next=second;

    second->rollno=20;
    second->next=third;

    third->rollno=30;
    third->next=NULL;

    int choice;
    do {
        cout << "Menu:\n1. Insert roll no. at beginning\n2. Display\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int rollno;
                cout << "Enter roll number: ";
                cin >> rollno;
                insertBeg(head, rollno);
                break;
            }
            case 2:
                display(head);
                break;
            case 3:
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 3);

    return 0;
}
