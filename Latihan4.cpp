#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertHead(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = head;
    head = baru;
}

void insertTail(int nilai) {
    Node* baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if (head == NULL) head = baru;
    else {
        Node* temp = head;
        while (temp->next != NULL) temp = temp->next;
        temp->next = baru;
    }
}

void tampilkanList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int n, nilai;
    cout << "Masukkan jumlah data: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Masukkan data ke " << i << ": ";
        cin >> nilai;
        insertTail(nilai);
    }

    cout << "\nMasukkan data yang ditambahkan di awal: ";
    cin >> nilai;
    insertHead(nilai);

    cout << "\nData setelah ditambah di awal:\n";
    tampilkanList();
    return 0;
}

