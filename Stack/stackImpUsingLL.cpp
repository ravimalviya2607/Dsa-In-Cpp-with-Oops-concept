#include<iostream>
#include<stack>
using namespace std;

class Node {

    //properties
    public:
        int data;
        Node* next;

    Node(int n) {

        this -> data = n;
        this -> next = NULL;
    } 
};

class Stack {

    Node* head;

    public:

    Stack() {
        head = NULL;
    }

    void push(int d) {
        
        Node* temp = new Node(d);

        if(head -> next == NULL) {
            cout << "Stack OverFlow " << endl;
        }

        temp -> data = d;
        temp -> next = head;
        head = temp;
    }

    int peek() {
        if(head != NULL)
           return head -> data;
    
    else {
        cout << "Stack is Empty " << endl; 
        return -1;
        }
    }
};

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {

    Stack st ;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.peek();




    return 0;
}