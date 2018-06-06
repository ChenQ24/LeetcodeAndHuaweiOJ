#include<iostream>
#include<string>
#include<vector>

#define INF 100000000

using namespace std;

int getlength(string a, string b)
{
	int numa = a.length();
	int numb = b.length();

	int nummin = numa > numb ? numb : numa;

	int i;
	// for(i=nummin; i>0; i--)
	// {
	i = 3;
	bool flag = true;
	for (int j = 0; j<i; j++)
	{
		if (a[numa - i + j] != b[j])
			flag = false;
	}
	//if(flag) break;
	//}
	if (flag == false)
		return 0;
	else
		return 1;
	//return numb-i;
}

//sovle
void dfs(int start, int num, int &now, int &max, vector<int> &path, vector<int> &maxpath, int **graph, int *flag)
{
	bool hasone = false;
	for (int i = 0; i<num; i++)
	{
		if (graph[start][i] > 0 && flag[i] == 1)
		{
			hasone = true;
			flag[i] = 0;
			now += graph[start][i];
			path.push_back(i);

			dfs(i, num, now, max, path, maxpath, graph, flag);

			flag[i] = 1;
			now -= graph[start][i];
			path.pop_back();
		}
	}

	if (hasone == false)
	{
		if (now > max)
		{
			max = now;
			maxpath.clear();
			for (unsigned int i = 0; i<path.size(); i++)
			{
				maxpath.push_back(path[i]);
			}
		}
	}
}

void printit(vector<int> &path, vector<string> &vstr, int **graph)
{
	int i = 0;
	for (unsigned int j = 0; j<path.size(); i = path[j], j++)
	{
		//cout<<path[j]<<','<<graph[i][path[j]]<<endl;
		int leng = vstr[path[j] - 1].length();
		for (int k = leng - graph[i][path[j]]; k<leng; k++)
		{
			cout << vstr[path[j] - 1][k];
		}
	}

}

int main()
{
	vector<string> vstr;
	string tmp;

	while (cin >> tmp)
	{
		vstr.push_back(tmp);
	}

	int **graph;
	int num = vstr.size() + 1;

	graph = new int*[num];
	for (int i = 0; i<num; i++)
	{
		graph[i] = new int[num];
	}


	//init graph
	for (int i = 1; i<num; i++)
	{
		graph[0][i] = vstr[i - 1].length();
	}
	for (int i = 0; i<num; i++)
	{
		graph[i][0] = 0;
	}
	for (int i = 1; i<num; i++)
	{
		for (int j = 1; j<num; j++)
		{
			graph[i][j] = getlength(vstr[i - 1], vstr[j - 1]);
			if (i == j)
			{
				graph[i][j] = 0;
			}
		}
	}

	//show
	/*
	for(int i=0; i<num; i++)
	{
	for(int j=0; j<num; j++)
	{
	cout<<graph[i][j]<<' ';
	}
	cout<<endl;
	}
	*/

	// init flag
	int *flag;
	flag = new int[num];
	for (int i = 0; i<num; i++)
	{
		flag[i] = 1;
	}

	int now = 0;
	int max = 0;
	vector<int> path;
	vector<int> maxpath;
	//dfs
	dfs(0, num, now, max, path, maxpath, graph, flag);



	//output
	//cout<<max<<endl;
	printit(maxpath, vstr, graph);

	//free space
	delete[] flag;
	for (int i = 0; i<num; i++)
	{
		delete[] graph[i];
	}
	delete[] graph;


	return 0;
}