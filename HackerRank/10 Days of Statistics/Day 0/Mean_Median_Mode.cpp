#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

double mean(const vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
    {
        return 0.0; // Return 0 for an empty array
    }

    int sum = 0;
    for (int num : arr)
    {
        sum += num;
    }

    return static_cast<double>(sum) / n;
}

// Function to calculate the median of an array
double median(const vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
    {
        return 0.0; // Return 0 for an empty array
    }

    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    if (n % 2 == 0)
    {
        int mid1 = sortedArr[n / 2 - 1];
        int mid2 = sortedArr[n / 2];
        return static_cast<double>(mid1 + mid2) / 2.0;
    }
    else
    {
        return static_cast<double>(sortedArr[n / 2]);
    }
}

// Function to calculate the mode of an array
int mode(const vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
    {
        return 0; // Return 0 for an empty array
    }

    map<int, int> freqMap;
    for (int num : arr)
    {
        freqMap[num]++;
    }

    int maxFreq = 0;
    int modeValue = arr[0];

    for (const auto &pair : freqMap)
    {
        if (pair.second > maxFreq)
        {
            maxFreq = pair.second;
            modeValue = pair.first;
        }
    }

    return modeValue;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cout << "Enter Number of integer" << endl;
    cin >> n;
    cout << "Enter Values" << endl;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    double meanValue = mean(arr);
    double medianValue = median(arr);
    int modeValue = mode(arr);

    cout << "Mean: " << meanValue << endl;
    cout << "Median: " << medianValue << endl;
    cout << "Mode: " << modeValue << endl;
    return 0;
}
