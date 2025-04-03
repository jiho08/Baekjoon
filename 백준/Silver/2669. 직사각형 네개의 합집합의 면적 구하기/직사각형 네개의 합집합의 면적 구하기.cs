var f = new bool[100, 100];

for (int i = 0; i < 4; ++i)
{
	int[] r = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
	FillSquare(r, f);
}

int cnt = f.Cast<bool>().Count(v => v);
Console.Write(cnt);

static void FillSquare(int[] r, bool[,] f)
{
    for (int i = r[0]; i < r[2]; ++i)
        for (int j = r[1]; j < r[3]; ++j)
	        f[i, j] = true;
}
