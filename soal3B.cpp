#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* next;
};

int count = 0;

void enqueue(Node*& front, Node*& rear, string data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (front = nullptr) {
        front = newNode;
    } else {
        rear->next = newNode;
    }
    rear = newNode;

    count++;
}

void dequeue(Node*& front, Node*& rear) {
    cout << front->data;
    Node* temp =  front;
    front = front->next;
    delete temp;

    if (front == nullptr) {
        rear = front;
    }

    count--;
}



int main() {
    Node* front = nullptr;
    Node* rear = nullptr;
    int input;
    string nama;
    while (true) {
        cout << "1. tambah pelanggan\n2. layani pelanggan\n3. depan & belakang\n4. jumlah antrean\n5. keluar\ninput: ";
        cin >> input;

        if (input == 1) {
            cout << "pelanggan: ";
            getline(cin >> ws, nama);
            enqueue(front, rear, nama);
        } else if (input == 2) {
            cout << "melayani: ";
            dequeue(front, rear);
        }else if (input == 3) {
            cout << "paling depan: " << front->data << endl; 
            cout << "paling belakang: " << rear->data << endl; 
        }else if (input == 4) {
            cout << "jumlah antrean: " << count;
        }else if (input == 5) {
            break;
        }

        system("pause");
        system("cls");
    }

    return 0;
}