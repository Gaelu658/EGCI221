#include "stack.h"
using namespace std;

int main(int argc, char ** argv) {
    Stack stk;
    for(int i=1; i<argc; i++)
    {
        int input = atoi(argv[i]);
        if(input)
        stk.push(input);
        else
        cout << "Pop: " << stk.pop() << endl;
    }
}