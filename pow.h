#ifndef POW_H
#define POW_H


using namespace std;

int pow(int a, int b)
{
    int result=1;
    for (int i=0; i<b; i++)
        result*=a;
    return result;
}



#endif // POW_H
