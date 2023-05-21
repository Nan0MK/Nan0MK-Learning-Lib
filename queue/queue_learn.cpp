#include <iostream>
#define string std::string

struct Item{
    string data;
};

struct Section{
    Item *next;
    Item *prev;
};

int main(){
    return 0;
}