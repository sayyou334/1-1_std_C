/*


		07 01
		C언어 수업내용

		9장 배열


		────────────────────


		1. 2차원 배열

		- 자료형 배열명[row][col]; // 인덱스 2개
		- int arr[3][5]

		행＼열		arr[0]	arr[1]	arr[2]	arr[3]	arr[4]
		arr[0]		1			2			3			4			5
		arr[1]		6			7			8			9			10
		arr[2]		...

		int num = 1;
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 5; j++)
			{
				arr[i][j] = num++;
			}
		}

		- 2차원 배열 초기화
			arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

			col(열)은 사이즈 들어가야함
			>> col[SIZE]보다 작은 {}, 0으로 채워짐.
			row(행)은 비워져도 ok


		2. 3차원 배열 // 잘안씀

		- int arr[6][3][5]

		int res = 0;
		for(int i = 0; i < 6; i++)
		{
			for(int j = 0; j < 3; j++)
			{
				for(int k = 0; k < 5; k++)
				{
					arr[i][j][k] = res++;
				}
			}
		}		
*/