#include<iostream>

using namespace std;



void prefixsumofRowOrderKadane()
{
	int a[][5] = { {6,-5,-7,4,-4},{-9,3,-6,5,2},{-10,4,7,-6,3},{-8,9,-3,3,-7} };
	int r = 4, c = 5,sum=0,maxs=0,mt,mb,ml,mr;
	int p[] = { 0,0,0,0 };

	for (int L = 0;L < c;L++)
	{
		for (int R = L;R < c;R++)
		{
			for (int i = 0,s=i;i < r;i++)
			{
				if (L == R)
				{
					p[i] = a[i][R];
				}
				else
				{
					p[i] = p[i] + a[i][R];

				}
				//kadane's applied on the p[]

				sum += p[i];

				if (sum < 0)
				{
					sum = 0;
					s = i + 1;
				}
				else if (sum > maxs)
				{
					maxs = sum;
					mt = s;
					mb = i;
					ml = L;
					mr = R;

				}


			}
			for (int x : p)
				cout << x << " ";
			cout << endl;
			cout << sum << " -> " << maxs << endl;
			cout << ml << " ->" << mr << " ->" << mt << " ->" << mb << endl;
			sum = 0;
		}
	}




}


void prefixsumofRowOrder()
{
	int a[][5] = { {6,-5,-7,4,-4},{-9,3,-6,5,2},{-10,4,7,-6,3},{-8,9,-3,3,-7} };
	int r = 4, c = 5;
	int p[]={0,0,0,0};

	for (int L = 0;L < c;L++)
	{
		for (int R = L;R < c;R++)
		{
			for (int i = 0;i < r;i++)
			{
				if (L == R)
				{
					p[i] = a[i][R];
				}
				else
				{
					p[i] = p[i] + a[i][R];

				}
			}
			for (int x : p)
				cout << x << " ";
			cout << endl;
		}
	}




}



void sufixSum1D()
{
	int a[] = { 10,20,30,40 };
	int n = sizeof(a) / sizeof(a[0]), k;
	int p[] = { 0,0,0,0 };

	for (int i = n-1;i>=0;i--)
	{
		if (i == n-1)
			p[i] = a[i];
		else
		{
			k = i +1;
			p[i] = p[k] + a[i];

		}

	}
	cout << "sufix array of a -> ";
	for (int x : p)
		cout << x << " ";
	cout << endl;



}


void prefixSum2D()
{
	int a[][3] = { {2,3,4},
				  {10,20,30},
				  {11,15,16},
				  {40,80,120} };

	int p[4][3]={0},r=4,c=3,k;

	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			if (j == 0)
				p[i][j] = a[i][j];
			else
			{
				k = j - 1;
				p[i][j] = p[i][k] + a[i][j];
			}
		}

	}

	for (int i = 0;i < r;i++)
	{
		for (int j = 0;j < c;j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}

}



void prefixSum1D()
{
	int a[] = { 10,20,30,40 };
	int n = sizeof(a) / sizeof(a[0]),k;
	int p[]={0,0,0,0};

	for (int i = 0;i < n;i++)
	{
		if (i == 0)
			p[i] = a[i];
		else
		{
			k = i - 1;
			p[i] = p[k] + a[i];

		}

	}
	cout << "prefix array of a -> ";
	for (int x : p)
		cout << x << " ";
	cout << endl;
}


void printMaxValue2DSubarray2()
{
	int a[4][5] = { {6,-5,-7,4,-4},
					{-9,3,-6,5,2 },
					{-10,4,7,-6,3},
					{-8,9,-3,3,-7 } };

	int r = 4, c = 5, sum = 0,maxs=INT_MIN,msr,msc,mer,mec;

	for (int sr = 0;sr < r;sr++)
	{
		for (int sc = 0;sc < c;sc++)
		{
			for (int er = sr;er < r;er++)
			{
				for (int ec = sc;ec < c;ec++)
				{
					for (int i = sr;i <= er;i++)
					{
						for (int j = sc;j <= ec;j++)
						{
							sum += a[i][j];
							cout << a[i][j] << "->";

						}
					}
					cout << "(" << sr << "," << sc << ") ->" << "(" << er << "," << ec << ") -> sum = " << sum;
					cout << endl;
					if (sum > maxs)
					{
						msr = sr;
						msc = sc;
						mer = er;
						mec = ec;
					}
					maxs = max(sum, maxs);
					
					sum = 0;

				}
			}
		}
	}

	cout << endl << endl << "Maximum Value in All possible Subarray in 2D is = " << maxs << endl<<endl;

	cout << "(" << msr << "," << msc << ") ->" << "(" << mer << "," << mec << ") ->";

}


void printMaxValue2DSubarray()
{
	int a[2][2] = { 10,20,30,40 };
	int r = 2, c = 2,sum=0;

	for (int sr = 0;sr < r;sr++)
	{
		for (int sc = 0;sc < c;sc++)
		{
			for (int er = sr;er < r;er++)
			{
				for (int ec = sc;ec < c;ec++)
				{
					for (int i = sr;i <= er;i++)
					{
						for (int j = sc;j <= ec;j++)
						{
							sum += a[i][j];
							cout << a[i][j] << "->";
							
						}
					}
					cout << "(" << sr << "," << sc << ") ->" << "(" << er << "," << ec << ") -> sum = " << sum;
					cout << endl;
					sum = 0;

				}
			}
		}
	}


}



void printAllSubarrayValues2DArray()
{
	int a[2][2] = { 10,20,30,40 };
	int r = 2, c = 2;

	for (int sr = 0;sr < r;sr++)
	{
		for (int sc = 0;sc < c;sc++)
		{
			for (int er = sr;er < r;er++)
			{
				for (int ec = sc;ec < c;ec++)
				{
					for (int i = sr;i <= er;i++)
					{
						for (int j = sc;j <= ec;j++)
						{
							cout << a[i][j] << "->";
						}
					}
					cout << endl;

				}
			}
		}
	}


}


void printAllSubarrayIndex2DArray()
{
	int a[2][2] = { 10,20,30,40 };
	int r = 2, c = 2;

	for (int sr = 0;sr < r;sr++)
	{
		for (int sc = 0;sc < c;sc++)
		{
			for (int er = sr;er <r;er++)
			{
				for (int ec = sc;ec < c;ec++)
				{
					for (int i = sr;i <=er;i++)
					{
						for (int j = sc;j <=ec;j++)
						{
							cout << i << "," << j << " -> ";
						}
					}
					cout << endl;
				
				}
			}
		}
	}
}



void printsumofsubarray()
{
	int a[] = { 10,20,30,40,50 };
	int n = sizeof(a) / sizeof(a[0]);
	int sum = 0,maxs=0;
	//cout << n;

	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			for (int k = i;k <= j;k++)
				sum += a[k];
		
			cout <<i<<" to "<<j <<" -> " << sum << endl;
			maxs = max(sum, maxs);
			sum = 0;

		}

	}
	cout << "max of all the subarrays = " << maxs;

}


void printAllpossibleSubarrayValues()
{
	int a[] = { 10,20,30,40,50 };
	int n = sizeof(a) / sizeof(a[0]);
	//cout << n;

	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			for (int k = i;k <=j;k++)
				cout << a[k] << " ";
			cout << endl;
		}
	
	}

}



void printsubarrayIndex()
{
	int a[] = {10,20,30,40,50};
	int n = sizeof(a) / sizeof(a[0]);
	//cout << n;

	for (int i = 0;i < n;i++)
	{
		for (int j = i;j < n;j++)
		{
			cout << i << "," << j << endl;
		}
		cout << endl;
	}

}


int main()
{
	//printsubarrayIndex();
	//printAllpossibleSubarrayValues();
	//printsumofsubarray();
	//printAllSubarrayIndex2DArray();
	//printAllSubarrayValues2DArray();
	//printMaxValue2DSubarray();
	//printMaxValue2DSubarray2();
	//prefixSum1D();
	//prefixSum2D();
	//sufixSum1D();
	//prefixsumofRowOrder();
	prefixsumofRowOrderKadane();


	return 0;
}