#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, Node*& tail, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head = nullptr) {
        head = newNode;
    } else {
        tail->next = newNode;
    }
    tail = newNode;
}

void remove(Node* head, int target) {
    Node* temp = head;
    while (temp->data != target) {
        temp = temp->next;
    }
    cout << temp->data << " dihapus" << endl;

    delete temp;
}

void reverse(Node*& head, Node*& tail) {
    Node* curr = head;
    Node* prev1 = nullptr;
    Node* prev2 = nullptr;
    while (curr != nullptr) {
        prev1 = curr;
        prev1->next = prev2;
        prev2 = prev1;
        curr = curr->next;
    }
}

void view(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << ' ';
        temp = temp->next;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int input;

    while (true) {
        cout << "1. tambah data\n2. hapus sebelum\n3. balikkan\n4. lihat semua\n5. keluar\ninput: ";
        cin >> input;

        if (input == 1) {
            cout << "data: ";
            cin >> input;
            insert(head, tail, input);
        } else if (input == 2) {
            cout << "data: ";
            cin >> input;
            remove(head, input);
        } else if (input == 3) {
            
        } else if (input == 4) {
            view(head);
        }
        else if (input == 5) {
            break;
        }

        system("pause");
        system("cls");
    }

    return 0;
}