string[] s = Console.ReadLine().Split();
int h = int.Parse(s[0]), m = int.Parse(s[1]) + int.Parse(Console.ReadLine());

h = (h + m / 60) % 24;
m %= 60;

Console.WriteLine($"{h} {m}");