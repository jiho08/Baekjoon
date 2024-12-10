int count = 0;

            while (true)
            {
                bool isSame = true;

                ++count;

                char[] firstWord = Console.ReadLine().ToCharArray();
                char[] secondWord = Console.ReadLine().ToCharArray();

                if (firstWord[0] == 'E' && firstWord[1] == 'N' && firstWord[2] == 'D')
                    break;

                Array.Sort(firstWord);
                Array.Sort(secondWord);

                if (firstWord.Length != secondWord.Length)
                    Console.WriteLine($"Case {count}: different");
                else
                {
                    for (int i = 0; i < firstWord.Length; ++i)
                        if (firstWord[i] != secondWord[i])
                            isSame = false;

                    Console.WriteLine(isSame ? $"Case {count}: same" : $"Case {count}: different");
                }
            }