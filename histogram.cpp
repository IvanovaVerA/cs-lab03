#include "histogram.h"

void
find_minmax(vector<double> numbers, double& min, double& max) {
    min = numbers[0];
    max = numbers[0];
    if (!numbers.size()==0)
    for (double number : numbers) {
        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }
    }

}
