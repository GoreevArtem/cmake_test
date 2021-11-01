#include <iostream>
#include <string>

int main(int, char **)
{
    std::cout << "hello world from the second example" << std::endl;
    //std::cout << "Version = " << examples::getVersions() << std::endl;
    int var = 2;
    int& ref = var;
    std::cout<<" ref "<<ref<<std::endl;
    ++var;
    std::cout<<" var "<<var<<std::endl;
    std::cout<<" ref "<<ref<<std::endl;
    ++ref;
    std::cout<<" var "<<var<<std::endl;
    std::cout<<" ref "<<ref<<std::endl;
    getchar();
    return 0;
}