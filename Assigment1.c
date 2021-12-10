#include <stdio.h>
float sum(float arr []) {
int i;
int n= sizeof(arr)/sizeof(float);
float sum=0.0;
for(i=0; i<=n;i++){
sum+=arr[i];
}
return sum;
}

int main() {
float arr[]={1.1,2.2,3.3};
float like=sum(arr);
printf("\n sum is %.2f",like);
return o;
}
