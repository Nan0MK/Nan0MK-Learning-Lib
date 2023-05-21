#include <iostream>

//I guess this makes the language treat year as it's own type.
typedef int year;

//But why not just do this? Whatever...
int century;

//What makes this diferent from a normal enum?
typedef enum night{// nvm. Ii ignored the typedef for this enum.
    sun,
    mon,
    tue,
    wed,
    thur,
    fri,
    sat,
};// I guess that typedef doesn't work on tnums because they are already "typey" enough

//What's less "typey" about this?
enum day{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
};

//So what's the difference here then...
typedef struct stuff{// Ok.. It was ignored in this one too.
    int Books;
    int Plates;
    int Phones;
    int Trash;
};

//This looks to be the exact same to me...
struct things{
    int Bananas;
    int Tables;
    int Pianos;
    int Sedans;
};

int main(){

    year twentyNineteen = 2019;// See. It's just like* a type
    int update = 1;
    year twentyTwenty = twentyNineteen + update;

    std::cout << twentyTwenty << "\n";
    std::cout << day::SUNDAY << "\n";
    std::cout << night::mon << "\n";

    stuff junk;
    junk.Phones = 5;

    things hoarding;
    hoarding.Bananas = 36541;

    std::cout << junk.Phones << "\n";
    std::cout << hoarding.Bananas << "\n";

    return 0;
}