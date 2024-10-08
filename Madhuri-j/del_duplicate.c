#include <stdio.h>
void del_duplicate(int n, int a[]);
int main(void)
{
	int n, a[10], i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter array elements: ");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	del_duplicate(n, a);
	return 0;
}

void del_duplicate(int n, int a[]) {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n - 1; j++) {
			if(a[i] == a[j]){
				for(int k = j; k < n - 1; k++) {
					a[k] = a[k + 1];
				}
				n--;
				j--;
			}
		}
	}
	printf("Array After del duplicates: ");
	for(int i = 0; i < n; i++) {
		printf("%d", a[i]);
	}
}



/*
int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) {
    return 0;
  }

  int ans = 1;
  for(int i = 1; i<numsSize; i++){
    for(int j=i-1;j<i;j++){
      if(nums[i] == nums[j]){
        continue;
      }else{
        nums[ans] = nums[i];
        ans++;
      }
    }
  }
  return ans;
}
*/
