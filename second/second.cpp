#include <iostream>
#include <vector>
#include <string>

using namespace std;

int mainSecond(){
    cout << "A" << endl;

    int *intP = {nullptr};
    int *intPGarbage;

    cout << intP << endl;
    cout << intPGarbage << endl;
    cout <<  &intPGarbage << endl;
    cout << sizeof(intPGarbage) << endl;
    cout << sizeof(int) << endl;

    vector<int> vec{1, 2, 3, 4, 5};

    vector<int> *vecP = &vec;

    cout << vec[0] << endl;

    cout << "===========" << endl;

    vector<int> vectorTwo = *vecP;

    cout << vecP << endl;
    cout << addressof(vec) << endl;
    cout << vectorTwo[0] << endl;

    cout << "===========" << endl;

    cout << addressof(vecP) << endl;
    cout << &vecP << endl;

    cout << "===========" << endl;

    int a = 100;
    int *aP = &a;

    cout << a << endl;
    cout << *aP << endl;

    *aP = 200; // important

    cout << a << endl;

    cout << "===========" << endl;

    string firstName = "d9d9";

    string *str_ptr = &firstName;

    cout << str_ptr << endl;
    cout << *str_ptr << endl;
    *str_ptr = "Oops";

    cout << str_ptr << endl;
    cout << *str_ptr << endl;

    cout << "===========" << endl;

    vector<string> letters{"A", "B", "C"};

    vector<string> *let_ptr = &letters;

    cout << (*let_ptr).at(0) << endl;

    for (const auto &letter : *let_ptr) {
        cout << letter << endl;
    }

    cout << "===========" << endl;

    int *var_ptr = new int(10);

    cout << *var_ptr << endl;

    int *array_ptr = new int[3]{0, 1, 2};

    cout << (array_ptr + 2) << endl;
    cout << *(array_ptr + 2) << endl;

    cout << array_ptr[2] << endl;

    cout << "before" << endl;

    for (int i = 0; i < 3; ++i) {
        cout << *array_ptr << endl;
        array_ptr++;
    }
    cout << "after" << endl;


    for (int j = 0; j < 3; ++j) {
        array_ptr--;
        cout << *array_ptr << endl;

        /*
         * note ptr++ and ptr--
         */
    }

    delete[] (array_ptr);
    delete var_ptr;

    cout << array_ptr[1] << endl;

    cout << "===========" << endl;
}