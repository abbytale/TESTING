#include <iostream>
#include "add.h"
#include "test.h"
#include "multiply.h"
#include "pow.h"
using namespace std;

int main()
{
    // testy
    //areEquals(4,add(2,2));
    //areEquals(16,pow(4,2) );

    cout << pow(add(multiply(2,2),4),3) << endl;


}
