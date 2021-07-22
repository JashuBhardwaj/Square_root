#include <stdio.h>

float perfect_square(int no,int precision){
    
    int left = 0,right = no,mid = 0;
    float res;
    while(left <= right){
        mid = ( left + right )/2;
        if( mid * mid == no) {
            res = mid;
            break;
        }
        else if ( mid * mid < no ) {
            left = mid + 1;
            res = mid;
        }
        else {
            right = mid - 1;
        }

    }
    
    float prec=0.1;
    for(int i=0;i<precision;i++) {
        while(res*res<=no) {
            res+=prec;
        }

        res=res-prec;
        prec=prec/10;
    }
    return res;
}

int main() {
    int no=0;
    int precision=0;
    printf("Enter a no: ");
    scanf("%d",&no);
    printf("Enter a precision: ");
    scanf("%d",&precision);s

    float result= perfect_square(no, precision);
    
    printf("%.*lf",precision,result);
    return 0;
}
