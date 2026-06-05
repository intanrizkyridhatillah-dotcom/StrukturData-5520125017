#include <iostream>


using namespace std;

int main() {
    // Stack untuk menyimpan riwayat seluruh dokumen (LIFO)
    stack<string> history;
    string currentDocument = "";
    int choice;

    do {
        cout << "\n===== TEXT EDITOR =====" << endl;
        cout << "1. Ketik Teks" << endl;
        cout << "2. Undo" << endl;
        cout << "3. Tampilkan Dokumen" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                history.push(currentDocument);
                cout << "Masukkan teks: ";
                {
                    string inputText;
                    getline(cin, inputText);
                    if (currentDocument == "") {
                        currentDocument = inputText;
                    } else {
                        currentDocument += " " + inputText;
                    }
                }
                cout << ">> Teks berhasil ditambahkan." << endl;
                break;

            case 2:
                if (!history.empty()) {
                    currentDocument = history.top();
                    history.pop();
                    cout << ">> Undo berhasil dilakukan." << endl;
                } else {
                    cout << ">> Tidak ada yang bisa di-undo!" << endl;
                }
                break;

            case 3:
                cout << "--- Isi Dokumen Saat Ini	 ---\n" << endl;
                if (currentDocument == "") {
                    cout << "(Kosong)" << endl;
                } else {
                    cout << currentDocument << endl;
                }
                cout << "----------------------------" << endl;
                break;

            case 4:
                cout << "Keluar dari program..." << endl;
                break;

            default:
                cout << ">> Pilihan tidak valid!" << endl;
        }
    } while (choice != 4);

    return 0;
}
