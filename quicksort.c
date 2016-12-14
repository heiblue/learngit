//round 4 new file created
////round 3
//test sample for YJ
#include <stdio.h>

int main(){
	int list[] = {3,5,2,7,9,6,8,1,4};
	int len = sizeof(list)/sizeof(list[0]);

	int l = 0, r = len;
	
	int quicksort(int i, int j){	
		i = l, j = r;
		int mark = list[i];
		while(i < j){
			while(i < j && list[j] >= mark){
				j--;
			}
			if(i < j){
				list[i++] = list[j];
			}
			
			while(i < j && list[i] <= mark){
				i++;
			}
			if(i < j){
				list[j++] = list[i];
			}
	
		}
		list[i] = mark;
		
		return i;
	}
	
	quicksort(l, i-1);
	quicksort(i+1, r);


//quicksort(l, r);


for(int x = 0; x< len; x++){
	printf("%d,", list[x]);

}
	
	return 0;
}
