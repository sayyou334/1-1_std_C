

/*
	******************1託据 壕伸*******************

	壕伸=汽戚斗亜 弦聖 凶 紫遂敗

	壕伸 識情
		int Arr[7];			-1牒雁 滴奄澗 4byte
								いsizeof(Arr)稽 溌昔亜管

	陥呪税 舛左研 煽舌馬奄 是背辞澗 陥呪税 壕伸 識情

	
	1託据 壕伸 識情拭 琶推廃 依
	int		: 壕伸聖 戚欠澗 推社(痕呪)税 切戟莫
	Arr		: 壕伸税 戚硯
	[7]		: 壕伸税 掩戚


	壕伸税 舌繊 : 授託旋生稽 羨悦戚 亜管馬陥
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];           
	}
	

	壕伸税 段奄鉢
	int Arr[5]={1,2,3,4,5};		: 段奄鉢 軒什闘稽 段奄鉢
	int Arr[5]={1,2};				: 段奄鉢 葵戚 採膳廃 井酔 - 採膳廃 採歳 0生稽 辰趨像
	int Arr[]={1,2,3,4,5,6};		: 段奄鉢 軒什闘澗 赤走幻 掩戚亜 蒸製 - 葵幻鏑 掩戚研 辰崇
			≧int Arr[6]={1,2,3,4,5,6};

	
	char 壕伸拭 庚切伸 煽舌
	char str[30] = "simple";
	s		i		m		p		l		e

	char str[14]="Good morning!";
	壕伸税 掩戚亜 庚切伸税 鯵呪+1昔 戚政 : 庚切伸税 魁拭 庚切伸税 魁聖 税耕馬澗 NULL(\0) 庚切亜 級嬢姶
		いNULL庚切澗 因拷戚 焼還, 庚切莫生稽澗     , 舛呪莫生稽澗 0戚陥.


	NULL	!= ""			/陥硯				=>NULL庚切亜 赤嬢醤幻 庚切伸稽 毒舘吉陥

	庚切伸 脊径閤奄
	scanf("%s", str);
		い壕伸 戚硯 str蒋拭澗 &尻至切研 細戚走 省製

*/



/*
	******************陥託据 壕伸*******************

	けけけけけけけけけけけ <-1託据 壕伸

	けけけけけけけ
	けけけけけけけ  <-2託据 壕伸		int Arr[室稽][亜稽];
	いint Arr[2][7];


		- 切戟莫 壕伸誤[row][col]; // 昔畿什 2鯵
		- int arr[3][5]

		楳゜伸		arr[0]	arr[1]	arr[2]	arr[3]	arr[4]
		arr[0]		1			2			3			4			5
		arr[1]		6			7			8			9			10
		arr[2]		...



	int ArrOne[10];			: 掩戚亜 10昔 1託据 壕伸
	int ArrTwo[5][5];		: 亜稽, 室稽税 掩戚亜 唖唖 5昔 2託据 壕伸
	int ArrThree[3][3][3]	:  亜稽, 室稽, 株戚税 掩戚亜 唖唖 3昔 3託据 壕伸



	2託据 壕伸 識情引 疑獣拭 段奄鉢
	int Arr[3][3] = {
		{1, 0, 0},
		{4, 5, 0},
		{7, 8, 9}
	};												//辰趨走走 省精 朔 因娃精 0生稽 辰趨遭陥.




	2託据 壕伸 脊径閤奄
		int villa[4][2];
	
		for(int i=0 ; i<4 ; i++)		//4寵
		{		
			for(int j=0 ; j<2 ; j++)		//2硲猿走
			{
				printf("%d寵 %d硲 昔姥呪 : ", i+1, j+1);
				scanf("%d", &villa[i][j];
			}
		}


		//柵虞税 寵紺 昔姥呪 窒径馬奄
		for(int i=0 ; i<4 ; i++)
		{
			int people=0;
			people += villa[i][0];
			people += villa[i][1];
			printf("%d寵 昔姥呪 : %d\n", i+1, people);
		}




    3託据 壕伸 // 設照掌
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