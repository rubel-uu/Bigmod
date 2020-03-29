#include<vector>
#include<queue>
using namespace std;
vector<int>adj[100];
int visited[100];
void bfs(int s,int n)
{
	for(int i=0;i<n;i++)
	{
	   visited[i]=0;
	}
	queue<int>Q;
	Q.push(s);
	visited[s]=1;
	while(!Q.empty())
	{
	  int u=Q.front();
	  Q.pop();
	  for(int i=0;i<adj[u].size();i++)
	  {
	    if(visited[adj[u][i]]==0)
	    {
	      int v=adj[u][i];
	      visited[v]=1;
	      Q.push(v);
	    }
	  }
	}
}
int main()
{
	int edge,node;
	cin>>edge>>node;
	int n1,n2;
	for(int i=0;i<node;i++)
    {
        cin>>n1>>n2;
    }


	}
