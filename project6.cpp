#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <thread>
#include <mutex>

using namespace std;

void test_vector(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << endl;
    }
}

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i < sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void get_primes(int start, int end, ofstream& output) {
    int count = 0;

    for (int num = start; num <= end; ++num) {
        if (is_prime(num)) {
            output << num << endl;
            count++;
        }
    }
    std::lock_guard<std::mutex> lock(mutex);

    cout << "Thread " << std::this_thread::get_id() << " found " << count << " primes." << endl;
}

vector<int> split(int& num) {
    std::vector<int> partNums;

    num = num / 2;
    int p1 = num / 4;
    int p2 = 2 * p1;
    int p3 = 3 * p1;
    int p4 = 4 * p1;

    partNums.push_back(p1);
    partNums.push_back(p2);
    partNums.push_back(p3);
    partNums.push_back(p4);

    return partNums;
}

int main() {
    ofstream outputFile("primes.dat");
    int ceiling = 2000000;

    std::vector<int> parts = split(ceiling);

    std::vector<std::thread> threads;

    for (size_t i = 0; i < parts.size(); ++i) {
        int start = (i == 0) ? 2: parts[i - 1] + 1;
        int end = parts[i];

        threads.emplace_back(get_primes, start, end, std::ref(outputFile));
    }

    for (auto& thread : threads) {
        thread.join();
    }

    //test_vector(parts);

    return 0;
}
