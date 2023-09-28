#include<stdio.h>
int main(){
    double u, v, t1, t2, s;
    printf("u=");scanf("%lf", &u);
    printf("v=");scanf("%lf", &v);
    printf("t1=");scanf("%lf", &t1);
    printf("t2=");scanf("%lf", &t2);
    //scanf("%lf %lf %lf %lf", &u, &v, &t1, &t2);
    if (u>=v)
    printf("error");
    else {
        s=v*t1+(v-u)*t2;
        printf("s=");
        printf("%lf",s);
    }
    return 0;
}