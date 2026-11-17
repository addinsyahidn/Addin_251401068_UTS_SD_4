#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *kiri;
    Node *kanan;
};

Node *tambah(Node *root, int data) {
    if (root == NULL) {
        root = new Node();
        root->data = data;
        root->kiri = NULL;
        root->kanan = NULL;
        return root;
    }

    if (data < root->data) {
        root->kiri = tambah(root->kiri, data);
    }
    if (data > root->data) {
        root->kanan = tambah(root->kanan, data);
    }
    return root;
}

bool cari(Node *root, int data) {
    Node *temp = root;
    while (temp != NULL) {
        if (data == temp->data) {
            return true;
        } else if (data < temp->data) {
            temp = temp->kiri;
        } else {
            temp = temp->kanan;
        }
    }
    return false;
}

void inOrder(Node *root, int bawah, int atas) {
    if (root != NULL && root->data > bawah  && root->data < atas) {
        inOrder(root->kiri);
        cout << root->data << " ";
        inOrder(root->kanan);
    }
}

int main() {
    Node *root = NULL;
    int input;

    cout << "Masukkan angka (-1 = stop): ";
    cin >> input;
    while (input != -1) {
        system("cls");
        root = tambah(root, input);
        cout << "Masukkan angka (-1 = stop): ";
        cin >> input;
    }

    int bawah;
    int atas;

    cin >> bawah;
    cin >> atas;

    

    cout << "periksa: ";
    cin >> input;
    cout << "angka" << input;
    if (cari) {
        cout << " ditemukan";
    } else {
        cout << " tidak ditemukan";
    }

    return 0;
}