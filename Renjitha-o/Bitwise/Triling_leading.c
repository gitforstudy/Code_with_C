//program to find trailing zeroes and leading zeroes of a number(Trailing zeroes:continuous zeroes from lsb
//								Leading zeroes:continuous zeroes from msb)

#include<stdio.h>
#include<stdlib.h>

int count_leading_set_bits(int num)
{
        int count = 0;
	int totalbits = sizeof(num) * 8;
        while((num &(1 <<(totalbits - 1) ))!= 0) {
		count++;
                num = num << 1;
                //count++;
        }
        return count;
}

int count_trailing_set_bits(int num)
{
	int count = 0;
	while((num & 1) != 0) {
		count++;
		num = num >> 1;
		//count++;
	}
	return count;
}

int main(){
   int number, i, lead = 0,trail = 0, Msb,size, x, y;//initialize count of leading and trailing as zero
   printf("Enter a number");
   scanf("%d",&number);
   size = sizeof(number) * 8;//find the number of bit
   //printf("%d",size);
   
   Msb=1<<(size-1);//make the msb bit as 1
   
   //count leading zeroes

   for(i = 0; i < size; i++){//iterate till 31
      if((number << i) & Msb) {//check if the bit is 1 or not
         break;
      }
      lead++;//else increase the count
   }
   
   //count trailing zeroes

   for(i = 0; i < size; i++){
      if((number >> i) & 1) {
         break;
      }
      trail++;//increase count
   }

   printf("Number of Leading ZERO is = %d  no.of Trailing Zeroes:%d\n", lead,trail);
   x = count_leading_set_bits(number);
   y = count_trailing_set_bits(number);
   printf("Number of Leading ONE'S is = %d  no.of Trailing ONE'S:%d\n", x, y);
   return 0;
}
