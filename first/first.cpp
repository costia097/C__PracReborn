#include <iostream>
#include <climits>
#include <vector>
#include <string>

int a;
float  b;
bool bol;
char  cha;

const char ca{'a'};

void doSwap(int &first, int &second) {
    int temp = first;

    first = second;
    second = temp;
}

void doProcessOfValue(const int *first, const int *second) {
    std::cout << first << " P " << second << std::endl;
    int tempOne =  *first;
    int tempTwo = *second;

    std::cout << tempOne << " Ad " << tempTwo << std::endl;
    std::cout << &tempOne << " Ad " << &tempTwo << std::endl;
    std::cout << std::addressof(tempOne) << " Ad " << std::addressof(tempTwo) << std::endl;
}

int mainFirst() {

    std::string string = "A A A";

    for (char j : string) {
        std::cout << j << std::endl;
    }

    int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i : arr) {
        std::cout << i << std::endl;
    }

    int value {3'000'000};

    std::vector<int> vector (5);

    vector.push_back(5);

    std::cout << "Test" << std::endl;
//    std::cin >> value;

    std::cout << "Nice: " << value << " " << sizeof(unsigned int) << std::endl;

    std::cout << CHAR_MAX << std::endl;

    int first = 1;
    int second = 2;

    std::cout << first << " "<< second << std::endl;

    doSwap(first, second);

    std::cout << first << " "<< second << std::endl;

    int *firstP = &first;
    int *secondP = &second;

    doProcessOfValue(firstP, secondP);

    return 0;
}