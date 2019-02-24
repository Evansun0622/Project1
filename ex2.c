#include <stdio.h>

int A[10][10];
int B[10][10];
int C[10][10];
int a,b,c,m,i;
int main() {
 scanf("%d\n",&m);
for(a=0;a<m;a++){
   for(b=0;b<m;b++){
      scanf("%d\n",&A[a][b]);
}
}
for(a=0;a<m;a++){
   for(b=0;b<m;b++){
      scanf("%d\n",&B[a][b]);
}
}
for(a=0;a<m;a++){
   for(b=0;b<m;b++){
     for(c=0;c<m;c++){
      C[a][b]+=A[a][c]*B[c][b];
}
}
}
for(a=0;a<m;a++){
   for(b=0;b<m;b++){
    printf("%6d",C[a][b]);
}
    printf("\n");
}
}

