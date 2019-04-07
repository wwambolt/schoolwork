#include <iostream>
#include <cstdlib>

int main()
{
    // Read input numbers
    int num = 0;
    int min_num = 101; // always begins as larger than valid input
    int num_sum = 0;
    int num_count = 0;
    float avg_num;

    // Take input until sentinel values found
    while (1)
    {
        if (!(std::cin >> num))
            break;

        if (num == -1 || num > 100)
            break;

        if (num < min_num)
            min_num = num;

        num_sum += num;
        num_count++;
    }

    // Error and quit if no numbers found
    if (num_count == 0)
    {
        std::cerr << "No integer values found.\n";
        return EXIT_FAILURE;
    }

    // Take the avg of the numbers
    avg_num = (float) num_sum / (float) num_count;

    // Print minimum value and average
    std::cout << "Minimum Number: " << min_num << "\n";
    std::cout << "Average:        " << avg_num << "\n";

    return EXIT_SUCCESS;
}