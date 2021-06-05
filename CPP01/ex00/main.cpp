#include "Pony.hpp"

void ponyOnTheHeap() 
{
    Pony *ponyHeap = new Pony("Lol", 100, 150);
    ponyHeap->outputInfo();
    delete ponyHeap;
}

void ponyOnTheStack() 
{
    Pony ponyStack("Kek", 200, 228);
    ponyStack.outputInfo();
}

int main() 
{
    // Heap
    ponyOnTheHeap();

    // Stack
    ponyOnTheStack();
}