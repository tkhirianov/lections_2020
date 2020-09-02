#include <iostream>

int main(int argc, char *argv[])
{
    if (argc > 1)
        return main(argc - 1, argv) * argc;
    else
        return 1;
}
