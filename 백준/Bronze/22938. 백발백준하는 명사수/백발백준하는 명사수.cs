StreamReader sr = new StreamReader(Console.OpenStandardInput());
StreamWriter sw = new StreamWriter(Console.OpenStandardOutput());

string[] input1 = sr.ReadLine().Split();
double x1 = double.Parse(input1[0]);
double y1 = double.Parse(input1[1]);
double r1 = double.Parse(input1[2]);

string[] input2 = sr.ReadLine().Split();
double x2 = double.Parse(input2[0]);
double y2 = double.Parse(input2[1]);
double r2 = double.Parse(input2[2]);

double distance = Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2));

if (distance < (r1+r2))
{
    sw.Write("YES");
}
else
{
    sw.Write("NO");
}

sw.Flush();
sw.Close();
sr.Close();