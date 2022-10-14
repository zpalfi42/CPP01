#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string filename, filename_replace, s1, s2, aux;
	std::fstream filein, fileout;
	int			i, j;
	char        c;
	
	if (argc != 4)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	filename = argv[1];
	filename_replace = filename;
	filename_replace.append(".replace");
	s1 = argv[2];
	s2 = argv[3];

	filein.open(filename.c_str(), std::ios::in);
	if (!filein)
	{
		std::cout << "Couldn't open input file. Try Again!" << std::endl;
		return (1);
	}

	fileout.open(filename_replace.c_str(), std::ios::out);
	if (!fileout)
	{
		std::cout << "Couldn't open output file. Try Again!" << std::endl;
		return (1);
	}

	j = 0;
	while (!filein.eof())
	{
		if (j == 0)
			filein >> std::noskipws >> c;
		else
			j = 0;
		if (filein.eof())
			break;
		if (c == s1.c_str()[0])
		{
			aux = "";
			aux.append(1, c);
			i = 1;
			while (i < (int)s1.length() && !filein.eof())
			{
				filein >> std::noskipws >> c;
				if (c != s1.c_str()[i])
				{
					j = 1;
					break ;
				}
				aux.append(1, c);
				i++;
				std::cout << i << std::endl;
			}
			if (i == (int)s1.length())
				fileout << s2;
			else
				fileout << aux;
		}
		else
			fileout << c;
	}
}