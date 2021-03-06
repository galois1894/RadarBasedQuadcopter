#include <math.h>
#include <stdio.h>
#include "complex_math.h"

void euler_formula(double *series, comp *data, int data_num)
{
	int i;

	for(i = 0; i < data_num; i++)
	{
		data[i].re = cos(series[i]);
		data[i].im = sin(series[i]);
	}
}

void complex_abs(comp *x, double *y, int data_num)
{
	int i;
	double temp_re, temp_im;

	//for(i = 0; i < 800; i++)
	for(i = 0; i < data_num; i++)
	{
		temp_re = fabs(x[i].re);
		temp_im = fabs(x[i].im);

		y[i] = sqrt(pow(temp_re, 2) + pow(temp_im, 2));
	}
}

void complex_sqrt(comp *z)
{
	double b, c;
	double tmp1, tmp2;
	b = -z->re;
	c = -pow((fabs(z->im) / 2.0), 2.0);
	//tmp1 = (-b + sqrt(pow(b, 2.0) - 4.0 * c)) / 2.0;
	//tmp2 = (-b - sqrt(pow(b, 2.0) - 4.0 * c)) / 2.0;
	z->re = (-b + sqrt(pow(b, 2.0) - 4.0 * c)) / 2.0;
	z->im = (-b - sqrt(pow(b, 2.0) - 4.0 * c)) / 2.0;
}

void complex_div(comp *z1, comp *z2, double *res, int num)
{
	int i;

	for(i = 0; i < num; i++)
		res[i] = z1[i].re / z2[i].re;
}

void print_complex(comp *data, int data_num)
{
	int i;

	for(i = 0; i < data_num; i++)
	{
		printf("real = %lf\n", data[i].re);
		printf("imag = %lf\n", data[i].im);
	}
}
