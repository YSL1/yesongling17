Funcation insertionSort(arr) {
		
var len = arr.length;
			
var preIndex, current;
				
for (var i = 1; i< len; i++) {
	
	preIndex = i - 1;
	
	current =arr[i];
	
	while (perIndex >= 0 && arr[perIndex > current] ) {
		
		arr[perIndex + 1] = arr[preIndex];
		
		preIndex--
																						
		arr[preIndex + 1 ] = current;
															
							  }
	return arr
		;
}
