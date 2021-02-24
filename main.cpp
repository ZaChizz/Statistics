#include <iostream>
#include "TextHandler.h"

int main() {
    TextHandler* handler = new TextHandler("symbol2.txt");

    handler->parseText();

    std::cout << *handler << std::endl;

    return 0;
}