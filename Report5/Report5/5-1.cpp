#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define N 3

// Çà·Ä »ý¼º
void makeMatrix(int m[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            m[i][j] = rand() % 11 - 5;
        }
    }
}

// Çà·Ä Ãâ·Â
void printMatrix(int m[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
          
            printf("%4d ", m[i][j]);
        }
        printf("\n");
    }
}

// µ¡¼À
void addMatrix(int a[N][N], int b[N][N], int r[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
           
            r[i][j] = a[i][j] + b[i][j];
        }
    }
}

// »¬¼À
void subMatrix(int a[N][N], int b[N][N], int r[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            r[i][j] = a[i][j] - b[i][j];
        }
    }
}

// ½ºÄ®¶ó °ö
void scalarMatrix(int a[N][N], int s, int r[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            r[i][j] = a[i][j] * s;
        }
    }
}

// Çà·Ä °ö
void mulMatrix(int a[N][N], int b[N][N], int r[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            r[i][j] = 0; // ÃÊ±âÈ­
            for (int k = 0; k < N; k++) {
                
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}


double detMatrix(int m[N][N]) {
    double d = 0;
    
    d += m[0][0] * (m[1][1] * m[2][2] - m[1][2] * m[2][1]);
    d -= m[0][1] * (m[1][0] * m[2][2] - m[1][2] * m[2][0]);
    d += m[0][2] * (m[1][0] * m[2][1] - m[1][1] * m[2][0]);
    return d;
}

// ¿ªÇà·Ä °è»ê ÇÔ¼ö
int inverseMatrix(int m[N][N], double inv[N][N]) {
    double d = detMatrix(m);
   
    if (fabs(d) < 1e-6) return 0;

 
  
    inv[0][0] = (m[1][1] * m[2][2] - m[1][2] * m[2][1]) / d;
   
    inv[0][1] = -(m[0][1] * m[2][2] - m[0][2] * m[2][1]) / d;
    
    inv[0][2] = (m[0][1] * m[1][2] - m[0][2] * m[1][1]) / d;

   
    inv[1][0] = -(m[1][0] * m[2][2] - m[1][2] * m[2][0]) / d;
  
    inv[1][1] = (m[0][0] * m[2][2] - m[0][2] * m[2][0]) / d;

    inv[1][2] = -(m[0][0] * m[1][2] - m[0][2] * m[1][0]) / d;


    inv[2][0] = (m[1][0] * m[2][1] - m[1][1] * m[2][0]) / d;

    inv[2][1] = -(m[0][0] * m[2][1] - m[0][1] * m[2][0]) / d;
 
    inv[2][2] = (m[0][0] * m[1][1] - m[0][1] * m[1][0]) / d;

    return 1;
}

// Ãâ·Â
void printInv(double m[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%8.3f ", m[i][j]);
        }
        printf("\n");
    }
}


int main() {
    srand((unsigned)time(NULL));

    
    int A[N][N], B[N][N];
    int add[N][N], sub[N][N], sca[N][N], mul[N][N];
    double inv[N][N];
    int s;

    
    makeMatrix(A);
    makeMatrix(B);
    s = rand() % 6 + 1;

    printf("A:\n"); printMatrix(A);
    printf("\nB:\n"); printMatrix(B);
    printf("\nScalar = %d\n\n", s);

    addMatrix(A, B, add);
    printf("A + B:\n"); printMatrix(add);

    subMatrix(A, B, sub);
    printf("\nA - B:\n"); printMatrix(sub);

    scalarMatrix(A, s, sca);
    printf("\nScalar * A:\n"); printMatrix(sca);

    mulMatrix(A, B, mul);
    printf("\nA * B:\n"); printMatrix(mul);

    double d = detMatrix(A);
    printf("\nDet(A) = %.3f\n", d);

    if (inverseMatrix(A, inv)) {
        printf("\nInverse of A:\n");
        printInv(inv);
    }
    else {
        printf("\nInverse does NOT exist (det=0)\n");
    }

    return 0;
}
