#include <iostream>
#include "1.txt"

#define HELLO_MESSAGE "Hello, world!" 

#define MAX(x, y) x > y ? x : y

using namespace std;

int foo(int x)
{  
    cout << "foo(" << x << ")\n";
    return x;
}

int main()
{
    cout << HELLO_MESSAGE << endl;
    int x = 3;
    int z = MAX(foo(x), 2);  // LOOK HERE FOR A BUG!
    cout << z << endl;

    cout << MAX(5, 2) << endl;  // LOOK HERE FOR A BUG!

    return 0;
}
