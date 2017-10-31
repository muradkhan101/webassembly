#include "variance.hpp"
#ifdef __cplusplus
extern "C" {
#endif
float singleVariance(int data[], int length) {
  int sum = 0;
  float squaredSum = 0.0;
  for (int i = 0; i < length; ++i) {
    sum += data[i];
    squaredSum += data[i] * data[i];
  }
  return ((squaredSum / length) - (sum * sum) / (length * length));
}

float totalVariance(int pixelData[], int indexArray[], int indexLength) {
  int *r = new int[length/4];
  int *g = new int[length/4];
  int *g = new int[length/4];


}

#ifdef __cplusplus
}
#endif
