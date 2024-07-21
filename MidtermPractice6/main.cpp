#include <iostream>
#include <string>
#include "Animals.h"

using namespace std;

int main()
{
    cout << "Below is the following information about your chosen dog breed: "  << endl;

    Temperment t;
    t.displayAttributes();

    return 0;
}
