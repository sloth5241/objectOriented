#ifndef polymorphism_h
#define polymorphism_h
#include <iostream>
using namespace std;

class Animal {
    public:
        virtual void talk() {
            cout << "animal is talking" << endl;
        } 
};

class Pig:public Animal {
    public:
        void talk() {
            cout << "嗷嗷" << endl;            
        }
};


class Cat:public Animal {
    public:
        void talk() {
            cout << "喵喵" << endl;            
        }
};


class Dog:public Animal {
    public:
        void talk() {
            cout << "汪汪" << endl;            
        }
};
#endif
