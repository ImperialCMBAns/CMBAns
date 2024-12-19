#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    double a, de;
    fp1 = fopen("a_omega_1.d","r");
    fp2 = fopen("mde.d","w");



    for(int i=0;i<50000;i++)
    {
        fscanf(fp1,"%lf %lf",&a,&de);
        fprintf(fp2,"%e %e\n",a,1.0);
    }    
}
