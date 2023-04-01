#include <iostream>
#include <sstream>

int main() {
    std::string buffer;
    std::cout << "Enter the  command: " << std::endl;
    std::cin>>buffer;

    std::stringstream buffer_stream(buffer);

    double a,b;
    char operation;
    buffer_stream >> a >> operation >> b;

    std::cout<<(operation=='+'? a+b:(operation=='-'? a-b:(operation=='*'? a*b:a/b)));
}
