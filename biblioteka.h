#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef _BIBLIOTEKA_H
#define _BIBLIOTEKA_H

void ispisi_vektor(int n, double* u);
double beskonacna_norma (int n, double* u);
double euklidska_norma(int n, double* u);
void ispisi_matricu(double** A, int n);
void transponovana_matrica(double** A, double** B, int n);
double max_element_na_dijagonali(double** A, int n);
int simetricna_matrica(double** A, int n);
double skalarni_proizvod(int n, double* u, double* v);
void zbir_vektora(int n, double* u, double* v, double* z);
void konstanta_vektor(double a, int n, double* u, double* r);
void mnozenje_matrice_i_vektora(int n, double** A, double* u, double* v);
void mnozenje_matrica(int n, double** A, double** P);
double determinanta_matrice(double** A, int n);
void resavanje_sistema(int n, double** A, double* b, double *x);
int pozitivna_definitnost(double** A, int n);
#endif
