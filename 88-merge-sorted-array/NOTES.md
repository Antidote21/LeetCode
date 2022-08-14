// 배열의 오름차순 정렬	
	static void sortAcendingArr(int[] arr){
		for(int i=0; i<arr.length-1; i++)
			for(int j=0; j<arr.length-1-i; j++)
				if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
		}
	}
						
// 배열의 내림차순 정렬	
	static void sortDecendingArr(int[] arr){
		for(int i=0; i<arr.length-1; i++)		// 배열의 총 길이 수 만큼 반복문 수행
			for(int j=0; j<arr.length-1-i; j++)	// 가장 작은 수를 맨 뒤로 밀면서 반복문 수행, 수행 횟수는 1씩 줄어듦
				if(arr[j] < arr[j+1]){			// 앞수와 뒷수 비교
					int tmp = arr[j];			// 낮은 수를 tmp로 넣고
					arr[j] = arr[j+1];			// 높은 수는 앞수로 교체
					arr[j+1] = tmp;				// 낮은 수는 뒷수로 교체하여, 반복문 수행될 때마다 낮은 수가 뒤로 밀리게끔 swap 
		}
	}
