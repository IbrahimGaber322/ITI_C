#include <stdio.h>


int main(){
//float x = 3.5;
// int y= 4;
//char z = 'b';

// printf("x = %f \ny = %d \nz = %d", x, y, z);

//scanf for c need //clear buffer before or space


//scanf("%c",&z);
//printf("%c \n",z);
//scanf("%f",&x);
//printf("%f \n",x);

//if(x>0) printf("Positive"); else if(x==0) printf("zero"); else printf("Negative");

/*int degree = 0;

scanf("%d",&degree);

if( degree >=0 && degree <50){
    printf("Corrective\n");
} else if(degree >=50 && degree <65){
    printf("Pass\n");
} else if (degree >=65 && degree <75){
    printf("Good\n");
} else if (degree >=75 && degree <85){
    printf("Very good\n");
} else if ( degree >=65 && degree <= 100) {
    printf("Excellent\n");
} else{
    printf("Enter valid value: 0-100\n");
}

char letter = 'z';
scanf(" %c", &letter);
switch(letter){
case 'a':
    printf("a");
    break;
case 'B':
    printf("B");
    break;
default:
    break;
}
*/

int ok = 0;
signed int n1 = 0;
signed int n2= 0;
signed int n3=0;
char op = 0;
int degree = 0;

printf("Please enter your degree\n");

while(ok==0){

    if( scanf("%d",&degree) == 1){
printf("good\n");
        if( degree >=0 && degree <50){
            printf("Corrective\n");
          } else if(degree >=50 && degree <65){
            printf("Pass\n");
          } else if (degree >=65 && degree <75){
            printf("Good\n");
          } else if (degree >=75 && degree <85){
            printf("Very good\n");
          } else if ( degree >=65 && degree <= 100) {
           printf("Excellent\n");
        } else{
           printf("Enter valid value: 0-100\n");
        }

  ok=1;
}else{
    printf("Please enter your degree\n");
    fflush(stdin);
ok=0;

}
}




ok=0;

printf("Enter number to check whether it's positive or negative\n");
while(ok==0){

    if( scanf("%d",&n1) == 1){
 if(n1>0) printf("Positive\n"); else if(n1==0) printf("zero\n"); else printf("Negative\n");

  ok=1;
}else{

printf("Enter number to check whether it's positive or negative\n");
    fflush(stdin);
ok=0;

}
}







ok=0;

printf("Enter number to check whether it's even or odd\n");
while(ok==0){

    if( scanf("%d",&n2) == 1){
 if(n2%2 == 0) printf("even\n");  else printf("odd\n");

  ok=1;
}else{

printf("Enter number to check whether it's even or odd\n");
    fflush(stdin);
ok=0;

}
}


ok=0;

printf("Please enter 3 numbers to check the biggest number:\n");

while(ok==0){

    if( scanf("%d %d %d",&n1, &n2, &n3) == 3){
 if(n1>n2 && n1>n3){
    printf("Biggest number is: %d\n", n1);
}else if(n2>n1 && n2>n3){
    printf("Biggest number is: %d\n", n2);
}else {
    printf("Biggest number is: %d\n", n3);
}

  ok=1;
}else{

printf("Please enter 3 numbers to check the biggest number:\n");

    fflush(stdin);
ok=0;

}
}







ok=0;

printf("Please enter first number:\n");

while(ok==0){

    if( scanf("%d", &n1) == 1){

  ok=1;
}else{

printf("Please enter first number:\n");

    fflush(stdin);
ok=0;

}
}



ok=0;

printf("Please enter operator + or - or * or /:\n");
fflush(stdin);
while(ok==0){

    if( scanf(" %c", &op) == ' +' || ' /' || ' -' || ' *'){

  ok=1;
}else{

printf("Please enter operator + or - or * or /:\n");

    fflush(stdin);
ok=0;

}
}




ok=0;

printf("Please enter second number:\n");

while(ok==0){

    if( scanf("%d", &n2) == 1){

  ok=1;
}else{

printf("Please enter second number:\n");

    fflush(stdin);
ok=0;

}
}





switch(op){
case('+'):
    printf("Result = %d\n", n1 + n2);
    break;
case('-'):
    printf("Result = %d\n", n1 - n2);
    break;
case('*'):
    printf("Result = %d\n", n1 * n2);
    break;
case('/'):
    printf("Result = %d\n", n1 / n2);
    break;
default:
    break;
}

return(0);
}
