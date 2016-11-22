#include "polymorphism.h"
#include <iostream>
using namespace std;

void printTalk(Animal *a) {
    a->talk();
}

int main() {
    printTalk(new Dog);
    printTalk(new Cat);
    printTalk(new Pig);
    return 0;
}
