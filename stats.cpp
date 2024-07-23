#include "stats.h"
#include <numeric>
#include <algorithm>
#include <iostream>
#include <limits>
using namespace Statistics;

double findAverage(const std::vector<double> &data)
{
    double sum = std::accumulate(data.begin(),data.end(),0.0);
    auto n = data.size();
    double avg = sum/n;
    return avg;
}

double findMax(const std::vector<double> &data)
{
    double mx = *std::max_element(data.begin(),data.end());
    return mx;
}

double findMin(const std::vector<double> &data)
{
    double mn = *std::min_element(data.begin(),data.end());
    return mn;
}

Stats Statistics::ComputeStatistics(const std::vector<double>& data) {
    //Implement statistics here
    
    double avg=NAN, mn=NAN, mx=NAN;
    auto n = data.size();
    if(n)
    {
        avg = findAverage(data);
        mx = findMax(data);
        mn = findMin(data);
    }

    Stats obj;
    obj.average = avg;
    obj.max = mx;
    obj.min = mn;
    return obj;
}

