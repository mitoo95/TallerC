#include <iostream>

int main(){

    int cout;
    int *p;
    char *cp;
    char **ccp;
    cout = 10;

    std::cout << "Sizeof(int) is:" << sizeof(cout) << '\n';
    std::cout << "Sizeof(char *) is:" << sizeof(char *) << '\n';
    std::cout << "Sizeof(int *) is:" << sizeof(int *) << '\n';
    std::cout << "Sizeof(p) is:" << sizeof(p) << " Sizeof(*p) is:"<< sizeof(*p) << '\n';
    std::cout << "Sizeof(cp) is:" << sizeof(cp) << " Sizeof(*cp) is:"<< sizeof(*cp) << '\n';
    std::cout << "Sizeof(ccp) is:" << sizeof(ccp) << " Sizeof(*ccp) is:"<< sizeof(*ccp) 
        << " Sizeof(*ccp) is:"<< sizeof(**ccp) <<'\n';


    std::cout << cout << "; Hello World!\n";

}