#include<iostream>

using namespace std;


void prefixSum2D()
{

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
	prefixSum1D();


	return 0;
}