#include <stdio.h>
#include <stdlib.h>

int main (){
    int a,b,c,d,e,f,g,h;
    int P,R,Q;

    printf("Digite os 8 digitos do RG (sem o digito verificador):");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d",&a,&b,&c,&d,&e,&f,&g,&h);

    P=2*a+3*b+4*c+5*e+6*f+7*g+8*h;
    R=P%11;
    Q=11-R;

    if(Q>=0 && Q<=9){
        printf("O digito verificador : %d",Q);

    }else{
    printf("O digito verificador : X");
    }
return 0;

}
