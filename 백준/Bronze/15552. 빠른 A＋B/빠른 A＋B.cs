using System.Text;

StreamReader sr = new StreamReader(Console.OpenStandardInput());
int n = int.Parse(sr.ReadLine());
StringBuilder sb = new StringBuilder();
        
for (int i = n; i-- > 0 ;){
    int[] x = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
    sb.AppendLine((x[0] + x[1]).ToString());
}

Console.Write(sb);