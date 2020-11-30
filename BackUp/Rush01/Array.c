#include <stdio.h>

int main(void)
{

int c[2][3] = {{1, 3, 0}, {-1, 5, 9}};
for (int i=0 ; i<2 ; i++){
    for (int j=0 ; j<3 ; j++){
        int x =c[i][j];
    printf ( "%i ", x);
}
printf("\n") ;
}

return (0);
}