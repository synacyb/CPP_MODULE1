#include <iostream>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for(int i = 1; av[i]; i++){
			for(int j = 0; av[i][j]; j++){
				std::cout<<(char)toupper(av[i][j]);
			}
		}
		std::cout<<"\n";return 0;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}
