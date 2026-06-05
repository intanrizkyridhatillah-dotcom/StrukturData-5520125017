#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;
Node* tail = NULL;

void insertHead(int nilai) {
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
        head = baru; // head pindah ke node baru
    }
}

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
        tail = baru; // tail pindah ke node baru
    }
}

void tampilkanList() {
    if (head == NULL) {
        cout << "List kosong\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "HEAD" << endl;

    temp = tail;
    do {
        cout << temp->data << " -> ";
        temp = temp->prev;
    } while (temp != tail);
    cout << "TAIL" << endl;
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

