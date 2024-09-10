String[] str = Console.ReadLine().Split(' ');
int[] arr = Array.ConvertAll(str, int.Parse);
int a = arr[0];
int b = arr[1];
Console.WriteLine(a - b);