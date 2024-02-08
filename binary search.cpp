#include <stdio.h>
int main()
{
int i, low, high, mid, n, s, array[100];
printf("Enter number of elements");
scanf("%d",&n);
printf("Enter %d integersn", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to findn");
scanf("%d", &s);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < s)
low = mid + 1;
else if (array[mid] == s) {
printf("%d found at location %d", s, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("%d isn't present in the list", s);
return 0;
}
