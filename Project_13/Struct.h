#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>

using namespace std;

struct library {
    int number_udk;
    string FIO_aftor;
    string title;
    int year_of_publication;
    int number_of_instances;
};

struct Node {
    library libr;
    Node* next;

    Node(library _libr) : libr(_libr), next(nullptr) {}
};

struct list {
    Node* first;
    Node* last;
    int count = 0;
    list() : first(nullptr), last(nullptr) {}

    bool is_empty() {
        return first == nullptr;
    }

    void push_back(library _libr) {
        Node* p = new Node(_libr);
        if (is_empty()) {
            first = p;
            last = p;
            return;
        }
        last->next = p;
        last = p;
        count++;
    }
    void push_head(library _libr) {
        Node* p = new Node(_libr);
        if (is_empty()) {
            first = p;
            last = p;
            return;
        }
        p->next = first;
        first = p;
        count++;
    }


    void print() {
        if (is_empty()) return;
        Node* p = first;
        while (p) {
            cout << p->libr.title << " " << '\n';
            cout << p->libr.FIO_aftor << " " << '\n';
            cout << p->libr.number_of_instances << " " << '\n';
            cout << p->libr.number_udk << " " << '\n';
            cout << p->libr.number_of_instances << " " << '\n';
            p = p->next;
        }
        cout << endl;
    }

    Node* find(library _libr) {
        Node* p = first;
        while (p && p->libr.title != _libr.title) p = p->next;
        return (p && p->libr.title == _libr.title) ? p : nullptr;
    }
    void remove_first() {
        if (is_empty()) return;
        Node* p = first;
        first = p->next;
        delete p;
    }

    void remove_last() {
        if (is_empty()) return;
        if (first == last) {
            remove_first();
            return;
        }
        Node* p = first;
        while (p->next != last) p = p->next;
        p->next = nullptr;
        delete last;
        last = p;
    }
    void remove(library _libr) {
        if (is_empty()) return;
        if (first->libr.title == _libr.title) {
            remove_first();
            return;
        }
        else if (last->libr.title == _libr.title) {
            remove_last();
            return;
        }
        Node* slow = first;
        Node* fast = first->next;
        while (fast && fast->libr.title != _libr.title) {
            fast = fast->next;
            slow = slow->next;
        }
        if (!fast) {
            cout << "This element does not exist" << endl;
            return;
        }
        slow->next = fast->next;
        delete fast;
    }


    void deleteNode(int position)
    {



        // Store head node
        Node* temp = first;

        // If head needs to be removed
        if (position == 0)
        {

            // Change head
            first = temp->next;

            // Free old head
            free(temp);
            return;
        }

        // Find previous node of the node to be deleted
        for (int i = 0; temp != NULL && i < position - 1; i++)
            temp = temp->next;

        // If position is more than number of nodes
        if (temp == NULL || temp->next == NULL)
            return;

        // Node temp->next is the node to be deleted
        // Store pointer to the next of node to be deleted
        Node* next = temp->next->next;

        // Unlink the node from linked list
        free(temp->next); // Free memory

        // Unlink the deleted node from list
        temp->next = next;
    }
};
