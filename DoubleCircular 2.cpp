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
        baru->next = head;
        baru->prev = tail;
        tail->next = baru;
        head->prev = baru;
        tail = baru;
    }
}

void traverseDoubleCircular() {
    if (head == NULL) {
        cout << "List kosong\n";
        return;
    }

    Node* temp = head;
    Node* bantu = NULL;
    int i = 0;
    int terbesar = head->data;

    // Traversal maju
    cout << "Traversal Forward\n";
    do {
        cout << "Data ke " << i+1 << " : " << temp->data << endl;
        if (temp->data > terbesar) {
            terbesar = temp->data;
        }
        bantu = temp;
        temp = temp->next;
        i++;
    } while (temp != head);

    // Traversal mundur
    cout << "\nTraversal Backward\n";
    do {
        cout << "Data ke " << i << " : " << bantu->data << endl;
        bantu = bantu->prev;
        i--;
    } while (bantu != tail);

    cout << "\nTerbesar adalah : " << terbesar << endl;
}

int main() {
    insertTail(10);
    insertTail(20);
    insertTail(30);

    traverseDoubleCircular();

    return 0;
}

