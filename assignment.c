#include <stdio.h>

int HCF(int a, int b){
    if(b<=a){
        int temp=0;
        temp=a;
        a=b;
        b=temp;
    }
    for(;b!=0;){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    
    //Q1

    // int num,remainder,valuesaver,sum=0,valuesaver2;
    // double power;
    // printf("Enter the number:");
    // scanf("%d",&num);
    // valuesaver=num;
    // valuesaver2=num;
    // int digit=0;
    // for(;valuesaver>0;valuesaver/=10){
    //     digit++;
    // }
   
    // for(;num>0;num/=10){
    //     remainder=num%10;
    //     power=pow(remainder,digit);
    //     sum=sum+power;
        
    // }
    // printf("sum=%d\n",sum);
    // if(valuesaver2==sum){
    // printf("armstrong");
    // }
    // else{
    // printf("not armstrong");
    // }

    //Q2

    // int a,b;
    // printf("Enter Number 1:\n");
    // scanf("%d",&a);
    // printf("Enter Number 2:\n");
    // scanf("%d",&b);
    
    // printf("the HCF is %d",HCF(a , b));

    //Q3

    // int a, b, borrow;

    // printf("Enter two integers: ");
    // scanf("%d %d", &a, &b);

    
    // while (b != 0) {
    //     borrow = (~a) & b; 
    //     a = a ^ b;         
    //     b = borrow << 1;   
    // }

    // printf("Result = %d\n", a);

    //Q4

    //     int a, b;

    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);

    // printf("\nOriginal values:\n");
    // printf("a = %d, b = %d\n", a, b);

    // Using a temporary variable

    // int temp = a;
    // a = b;
    // b = temp;
    // printf("\nAfter swapping using temporary variable:\n");
    // printf("a = %d, b = %d\n", a, b);

    // Using arithmetic operations

    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("\nAfter swapping using arithmetic operations:\n");
    // printf("a = %d, b = %d\n", a, b);

    // Using bitwise XOR

    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // printf("\nAfter swapping using bitwise XOR:\n");
    // printf("a = %d, b = %d\n", a, b);

    // Using pointers

    // int *p1 = &a;
    // int *p2 = &b;
    // int temp2 = *p1;
    // *p1 = *p2;
    // *p2 = temp2;
    // printf("\nAfter swapping using pointers:\n");
    // printf("a = %d, b = %d\n", a, b);

    //Q5

    // int x,y;
    // printf("Enter x quadrant: ",x);
    // scanf("%d",&x);
    // printf("Enter y quadrant: ",y);
    // scanf("%d",&y);
    // if (x>0 &&y>0){
    //     printf("1st Quadrant");
    // }
    // else if (x<0 &&y>0){
    //     printf("2nd Quadrant");
    // }
    // else if (x<0 &&y<0){
    //     printf("3rd Quadrant");
    // }
    // else if (x>0 &&y<0){
    //     printf("4rth Quadrant");
    // }
    // else if (x==0 &&y==0){
    //     printf("origin");
    // }
    // else if (x>0 &&y>0){
    //     printf("1st Quadrant");
    // }
    // else if (x==0 &&(y>0 || y<0 )){
    //     printf("Y axis");
    // }
    // else{
    //     printf("X axis");
    // }

    //Q6

    // int choice;
    // long long binary;
    // int decimal = 0, i = 0, remainder;

    // printf("Number System Converter\n");
    // printf("------------------------\n");
    // printf("1. Binary to Decimal\n");
    // printf("2. Decimal to Binary\n");
    // printf("Enter your choice (1 or 2): ");
    // scanf("%d", &choice);

    // if (choice == 1) {
    //     // Binary to Decimal Conversion
    //     printf("\nEnter a binary number: ");
    //     scanf("%lld", &binary);

    //     long long temp = binary;
    //     while (binary != 0) {
    //         remainder = binary % 10;
    //         decimal += remainder * pow(2, i);
    //         binary /= 10;
    //         i++;
    //     }

    //     printf("Decimal equivalent of %lld = %d\n", temp, decimal);
    // }

    // else if (choice == 2) {
    //     // Decimal to Binary Conversion
    //     printf("\nEnter a decimal number: ");
    //     scanf("%d", &decimal);

    //     int bin[32], j = 0;
    //     int temp = decimal;

    //     if (decimal == 0) {
    //         printf("Binary equivalent of 0 = 0\n");
    //         return 0;
    //     }

    //     while (decimal > 0) {
    //         bin[j] = decimal % 2;
    //         decimal = decimal / 2;
    //         j++;
    //     }

    //     printf("Binary equivalent of %d = ", temp);
    //     for (int k = j - 1; k >= 0; k--) {
    //         printf("%d", bin[k]);
    //     }
    //     printf("\n");
    // }

    // else {
    //     printf("\nInvalid choice! Please enter 1 or 2.\n");
    // }

    //Q7

    // int n = 5; 
    // int i, j;

    // for(i = 1; i <= n; i++) {

    //     for(j = 1; j <= i; j++) {
    //         printf("%d", j % 2);
    //     }

    //     for(j = 1; j <= (n - i) * 2; j++) {
    //         printf(" ");
    //     }

    //     for(j = 1; j <= i; j++) {
    //         printf("%d", j % 2);
    //     }

    //     printf("\n");
    // }


    //Q8

    // int n;
    // int a=0,b=1,c;
    // printf("Enter the number of terms:");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     printf("%d ", a);     
    //     c = a + b;            
    //     a = b;                
    //     b = c;
    // }

    //Q9

    // int n ,found=0;
    // printf("Enter the size of array:");
    // scanf("%d",&n);
    // int arr[n];
    // printf("Enter the values\n");
    // for(int i=0;i<=n-1;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<=n-1;i++){
    //     if(arr[i]==99){
    //         printf("First occurrence is at position %d (index %d)\n", i + 1, i);
    //         found=1;
    //         break;
    //     }
    // }
    // if(found==0){
    //     printf("Not found");
    // }

    //Q10

    // int n, i, count = 0;

    // printf("Enter number of students: ");
    // scanf("%d", &n);

    // int marks[n];

    // printf("Enter marks of %d students:\n", n);
    // for(i = 0; i < n; i++) {
    //     scanf("%d", &marks[i]);
    // }

    // printf("\nStudents who scored 99:\n");

    // for(i = 0; i < n; i++) {
    //     if(marks[i] == 99) {
    //         printf("Student %d (Position %d)\n", i + 1, i);
    //         count++;
    //     }
    // }

    // if(count == 0) {
    //     printf("No student scored 99.\n");
    // } 
    // else {
    //     printf("\nTotal students who scored 99 = %d\n", count);
    // }

    //Q11

    // int n ,even=0,odd=0;
    // printf("Enter the size of array:");
    // scanf("%d",&n);
    // int arr[n];
    // printf("Enter the values\n");
    // for(int i=0;i<=n-1;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<=n-1;i++){
    //     if(arr[i]%2==0){
    //         even++;
    //     }
    //     else{
    //         odd++;
    //     }
    // }
    // int even_array[even];
    // int odd_array[odd];
    // int e=0,o=0;

    // for(int i=0;i<=n-1;i++){
    //     if(arr[i]%2==0){
    //         even_array[e++]=arr[i];
    //     }
    //     else{
    //         odd_array[o++]=arr[i];
    //     }
    // }
    
    // printf("Even numbers:\n");
    // if (even == 0)
    //     printf("No even numbers.\n");
    // else {
    //     for (int i = 0; i < even; i++)
    //         printf("%d ", even_array[i]);
    // }

   
    // printf("\nOdd numbers:\n");
    // if (odd == 0)
    //     printf("No odd numbers.\n");
    // else {
    //     for (int i = 0; i < odd; i++)
    //         printf("%d ", odd_array[i]);
    // }
    
    //Q12

    // int arr[5]={1,2,3,4,5};
    // int greatest=arr[0];
    // int smallest=arr[0];

    // for(int i=0;i<5;i++){
    //     if(arr[i]>=greatest){
    //         greatest=arr[i];
    //     }
    //     else if(arr[i]<=smallest){
    //         smallest=arr[i];
    //     }
    // }
    // printf("Greatest value:%d\nLeast value:%d",greatest,smallest);

    //Q13

    // int n;

    // printf("Enter the number of elements: ");
    // scanf("%d", &n);

    // int arr[n];

    // printf("Enter %d elements:\n", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // if (n == 1) {
    //     printf("Peak element is %d (only one element)\n", arr[0]);
    //     return 0;
    // }

    // printf("\nPeak elements are:\n");
    // for (int i = 0; i < n; i++) {
    //     if (i == 0) {  
    //         if (arr[i] >= arr[i + 1])
    //             printf("%d ", arr[i]);
    //     } 
    //     else if (i == n - 1) { 
    //         if (arr[i] >= arr[i - 1])
    //             printf("%d ", arr[i]);
    //     } 
    //     else { 
    //         if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
    //             printf("%d ", arr[i]);
    //     }
    // }

    //Q14

    //     int n, i, j, count = 0;
    // int arr[100];

    // printf("Enter how many numbers: ");
    // scanf("%d", &n);

    // printf("Enter the numbers:\n");
    // for(i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // for(i = 0; i < n; i++) {
    //     int num = arr[i];
    //     int isPrime = 1;

    //     if(num < 2)
    //         isPrime = 0;
    //     else {
    //         for(j = 2; j < num; j++) {
    //             if(num % j == 0) {
    //                 isPrime = 0;
    //                 break;
    //             }
    //         }
    //     }

    //     if(isPrime == 1)
    //         count++;
    // }

    // printf("\nTotal prime numbers in the array = %d\n", count);

    //Q15

    // int n;
    // printf("Enter the number of elements");
    // scanf("%d",&n);

    // int arr[n-1];

    // printf("Enter the elemnts\n");
    // for (int i=0; i<n; i++) {
    //     scanf("%d",&arr[i]);
    // }

    // int last=arr[n-1];
    // for(int i=n-1;i>0;i--){
    //     arr[i]=arr[i-1];
    // }

    // arr[0]=last;

    // printf("\nArray after clockwise rotation by one position:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }

    //Q16

    // int n, pos, value;

    // printf("Enter the number of elements: ");
    // scanf("%d", &n);

    // int arr[100];

    // printf("Enter %d elements:\n", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // printf("\nOriginal array:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }

    // printf("\nWhere do you want to insert the element?(enter 1 to %d)-",n);
    // scanf("%d",&pos);

    // printf("Enter the element to insert: ");
    // scanf("%d", &value);

    // arr[n]=arr[n-1];

    // for(int i=n-1;i>pos;i--){
    //     arr[i]=arr[i-1];
    // }

    // arr[pos-1]=value;
    // n++;

    // printf("\nArray after insertion:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }

    //Q17

    // int n, pos;

    // printf("Enter the number of elements: ");
    // scanf("%d", &n);

    // int arr[100];

    // printf("Enter %d elements:\n", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // printf("\nOriginal array:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }

    // printf("\nWhere do you want to delete the element?(enter 1 to %d)-",n);
    // scanf("%d",&pos);

    // for(int i=pos-1;i<=n;i++){
    //     arr[i]=arr[i+1];
    // }

    // n--;

    // printf("\nArray after deletion:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }

    //Q18

    // int n, i, j;
    // int found = 0;

    // printf("Enter number of elements: ");
    // scanf("%d", &n);

    // int arr[100];
    // printf("Enter %d elements:\n", n);
    // for(i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]);
    // }

    // printf("\nDuplicate elements are: ");

    // for(i = 0; i < n; i++) {
    //     for(j = i + 1; j < n; j++) {
    //         if(arr[i] == arr[j]) {
    //             printf("%d ", arr[i]);
    //             found = 1;
    //             break;
    //         }
    //     }
    // }

    // if(found == 0) {
    //     printf("-1");
    // }

    return 0;
}