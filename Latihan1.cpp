#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
  Node* head = NULL;
  
void insertTail(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if (head == NULL) {
        head = baru;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = baru;
    }
}

void tampilkanData() {
    Node* temp = head;
    int count = 0;

    while (temp != NULL) {
        count++;
        cout << "Data ke " << count << ": " << temp->data << endl;
        temp = temp->next;
    }
    cout << "Jumlah data: " << count << endl;
}

int main() {

    insertTail(10);
    insertTail(20);
    insertTail(30);

    tampilkanData();

    return 0;
}

