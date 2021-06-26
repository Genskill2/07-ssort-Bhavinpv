void swap_max(int arr[], int l, int n){
int max = arr[n+1] ;
int max_pos;
for (int i = n+1; i<l ; i++){
 if( arr[i] > max) {
  max= arr[i];
  max_pos=i;
  }
  }
  
  int temp= arr[n];
  arr[n]=max;
  arr[max_pos]=temp;
  }
 

void ssort(int arr[], int l){
for (int i =0 ; i<= l-1 ; i++){
   swap_max(arr, l, i);
   }
   }
