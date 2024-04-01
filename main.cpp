#include "doublyLinkedlist.h"
using namespace std;

int main(int argc, char ** argv) {
    DoublyLinkedlist ll;
    for(int i=1; i<argc; i++)
    {
        ll.insert(atoi(argv[i]));
    }
    ll.print();
    ll.printReversed();
}