/*
    จงรับค่าจากผู้ใชิ และวิเคราะห์ว่าจำนวนดังกล่าวเป็นจำนวนเต็มบวก หรือจำนวนเต็มลบ
    
    Test case:
        Input :
            49

    Output:
        Positive

    Test case:
        Input :
            -90

    Output:
        Negative

*/
#include <stdio.h> //The program calculates the number whether it is a positive or negative integer.
int main() {
    int Number ;
    
    printf( "Input :\n") ;
    scanf( "%d", &Number) ;

    if(Number > 0) {
        printf( "Positive") ;
    }else {
        printf( "Negative") ;
    }

    return 0 ;


}//end fuction


