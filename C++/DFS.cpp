void dfs(int point)
{
	if(!f[point])
	{
		f[point]=true;
		for(int i=0;i<titik[point].size();i++) //titik[point itu jumlah tetangga
			dfs(titik[point][i]);
	}
}
