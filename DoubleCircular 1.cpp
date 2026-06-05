#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;
Node* tail = NULL;

void insertTail(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;

    if (head == NULL) {
        head = tail = baru;
        head->next = head;
        head->prev = head;
    } else {
        baru->next = head;   // node baru menunjuk ke head
        baru->prev = tail;   // node baru menunjuk ke tail
        tail->next = baru;   // tail menunjuk ke node baru
        head->prev = baru;   // head menunjuk ke node baru
        tail = baru;         // tail pindah ke node baru
    }
}

void tampilkanMaju() {
    if (head == NULL) {
        cout << "List kosong\n";
        return;
    }
    Node* temp = head;
    int count = 0;
    cout << "Traversal maju:" << endl;
    do {
        count++;
        cout << "Data ke " << count << ": " << temp->data << endl;
        temp = temp->next;
    } while (temp != head);
    cout << "Jumlah data: " << count << endl;
}

void tampilkanMundur() {
    if (tail == NULL) {
        cout << "List kosong\n";
        return;
    }
    Node* temp = tail;
    int count = 0;
    cout << "Traversal mundur:" << endl;
    do {
        count++;
        cout << "Data ke " << count << ": " << temp->data << endl;
        temp = temp->prev;
    } while (temp != tail);
    cout << "Jumlah data: " << count << endl;
}

int main() {
    insertTail(10);
    insertTail(20);
    insertTail(30);

    tampilkanMaju();
    cout << "-------------------" << endl;
    tampilkanMundur();

    return 0;
}

