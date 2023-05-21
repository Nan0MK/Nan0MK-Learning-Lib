#include <iostream>
#include <queue>

typedef std::string string;

class Pipe{
    public:
    int location[3];
    string color;
    
    Pipe(int xIn, int yIn, int zIn, string colorIn){
        location[0] = xIn;
        location[1] = yIn;
        location[2] = zIn;
        color = colorIn;
    }
};

Pipe pip0(32, -15, 12, "grey");
Pipe pip1(33, -15, 12, "brown");
Pipe pip2(34, -15, 12, "blue");

std::queue<Pipe> pipes;

int main(){
    pipes.push(pip0);
    pipes.push(pip1);
    pipes.push(pip2);

    std::cout << pipes.front().color << "\n";
    std::cout << pipes.back().color << "\n";

    return 0;
}
/*
Very cool! So I don't need to make a queue from scratch to do my idea!(I think)
*/