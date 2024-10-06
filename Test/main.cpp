#include <iostream>
#include <chrono>
#include <cmath>

int main() {
    // Get the starting point of the time
    auto start = std::chrono::high_resolution_clock::now();

    // Loop 400 times
    for (int i = 0; i < 400; i++) {
        // Perform a heavier operation (e.g., some math functions)
        volatile double result = std::sin(i) * std::cos(i);

        // Print the iteration number
        std::cout << "Iteration: " << i << " Result: " << result << std::endl;
    }

    // Get the ending point of the time
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the elapsed time in microseconds
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    // Output the elapsed time in microseconds
    std::cout << "Time taken: " << duration << " µs" << std::endl;

    return 0;
}
