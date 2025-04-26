/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
   *returnSize=2;
   double *fr=(double*)malloc(2*sizeof(double));
   fr[0]=celsius+273.15;
    fr[1]=(celsius*1.80)+32.00;
  return fr;
}