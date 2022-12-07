// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

int main()
{
    std::cout << "Starting...\n";

    const clock_t begin_time = clock();
    {
        for (int i = 0; i < 100000; i++)
            new int;
    }
    std::cout << float(clock() - begin_time) / CLOCKS_PER_SEC << " seconds\n";

    std::cout << "Finished...\nPress any key to exit";

    _getch();
}
