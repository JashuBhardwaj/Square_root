// program to find square root of an no with precision using binary search
//Author name - Jashu Bhardwaj
// Roll No - 1910991028
// Date : 20/07/2021


#include <stdio.h>

// Function to find square root and return result
// it takes the no and the precision as arguments

float perfect_square(int no,int precision){
    
    int left = 0,right = no,mid = 0;
    float res=0;

    // calculating the int part of the result using binary search

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

    // finding the precision of the no 

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

    //scanning the no and the precision from user 

    printf("Enter a no: ");
    scanf("%d",&no);
    printf("Enter a precision: ");
    scanf("%d",&precision);

    // calling the perfect_square function to calculate result

    float result= perfect_square(no, precision);
    
    printf("%.*lf",precision,result);
    return 0;
}
