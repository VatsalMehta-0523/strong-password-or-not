#include <stdio.h>

int main(){
    char str[100];
    int up = 0 , low = 0 , space = 0 , sp = 0 ,dig = 0 ;
    printf("A strong password includes combinations of : \nupper case , lower case , special charcters and digits.\n");
    printf("\nenter your password : ");
    gets(str);                                         // alternate of scanf function used to take srting inputs

    for (int i = 0 ; str[i] ; i++){
        if(str[i] >= 'a' && str[i] <= 'z' ){
            low++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z' ){
            up++;
        }
        else if(str[i] == ' ' ){
            space++ ;
        }
        else if ( str[i] >= '0' && str[i] <= '9'){
            dig++;
        }
        else{
            sp++;
        }
    }


    if( low == 0 ){
        printf("lower character missing\nPLEASE TRY AGAIN ");
    }
    else if (up == 0 ){
        printf("upper character missing\nPLEASE TRY AGAIN ");
    }
    else if ( sp == 0 ){
        printf("special character missing\nPLEASE TRY AGAIN ");
    }
    else if (dig == 0 ){
        printf("digit is missing\nPLEASE TRY AGAIN ");
    }
    else{
        printf("password entered is strong. THANK YOU . ");
    }

    return 0;
}
