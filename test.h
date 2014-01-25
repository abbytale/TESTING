#ifndef TEST_H
#define TEST_H
using namespace std;
void areEquals(double expected, double got)
{
    if (expected != got)
        cout << "Expected: " << expected << " but got value: " << got << endl;
    else
        cout << "Test passed! :-)" << endl;

}


#endif // TEST_H
