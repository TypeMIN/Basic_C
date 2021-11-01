#include <stdio.h>

typedef struct complex
{
  double real;
  double imaginary;
} Complex;

Complex AddComplexNumber(Complex a, Complex b)
{
  Complex addResult;
  addResult.real = a.real + b.real;
  addResult.imaginary = a.imaginary + b.imaginary;
  return addResult;
}

Complex MulComplexNumber(Complex a, Complex b)
{
  Complex mulResult;
  mulResult.real = (a.real * b.real) - (a.imaginary * b.imaginary);
  mulResult.imaginary = (a.imaginary * b.real) + (a.real * b.imaginary);
  return mulResult;
}

int main(void)
{
  Complex numbers[2];
  printf("복소수 입력1[실수 허수] : ");
  scanf("%lf %lf", &(numbers[0].real), &(numbers[0].imaginary));
  printf("복소수 입력2[실수 허수] : ");
  scanf("%lf %lf", &(numbers[1].real), &(numbers[1].imaginary));

  printf("합의 결과] 실수 : %f, 허수 : %f \n", AddComplexNumber(numbers[0], numbers[1]).real, AddComplexNumber(numbers[0], numbers[1]).imaginary);
  printf("곱의 결과] 실수 : %f, 허수 : %f \n", MulComplexNumber(numbers[0], numbers[1]).real, MulComplexNumber(numbers[0], numbers[1]).imaginary);
  return 0;
}