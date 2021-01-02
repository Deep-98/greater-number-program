// Online C compiler to run C program online
#include <stdio.h>
int FunctionAddingDeepu(int first_num,int second_num, int third_num);
int FunctionMultiplicationDeepu(int first,int second, int third);
void FunctionifelseDeepu(int c, int d );
void ifelseladder(int total);
void ForDeepu();
int main() {
    // Write C code here
int a,b,i,c;    
//variable declaration
int total;
int multiplicationresult;
a=2;
b=3;
c=8;


total = FunctionAddingDeepu(a,b,c);
 printf(" \n %d",total);
 
 
 multiplicationresult=FunctionMultiplicationDeepu(a,b,c);
 printf("\n %d",multiplicationresult);
 
FunctionifelseDeepu(a,b);

ifelseladder(2000);

ForDeepu();

return 0;
}


int FunctionMultiplicationDeepu(int first,int second, int third){
     int total;
    total = first*second*third;
    return total;
}

 int FunctionAddingDeepu(int first_num,int second_num, int third_num){
     int total;
    total = first_num+second_num+third_num;
    return total;
 }
 
 void FunctionifelseDeepu(int c, int d ){
    if(c<d){
    printf("\n a is smaller number to b");
}
else{
    printf("\n b is greater than a");
}
}


 void ifelseladder(int total){
     
  //ielse-if ladder
if(total<10){
  printf("\n it is an single digit");
}
else if (total>99 && total<1000){
    printf(" \n it is an three digit number");
    
}
else if(total>10 && total<=99){
    printf("\n it is an two digit number");
}
else{
    printf("\n not a valid number");
}
printf("\n");   
 }
 
 void ForDeepu(){
     int i;
     //  
for(i=5; i>=1; i--){
    printf(" \n hello world");
}
 }
