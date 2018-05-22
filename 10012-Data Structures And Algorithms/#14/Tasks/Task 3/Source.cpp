#include <iostream>
#include <unordered_set>

int main() {
	bool goon = 1;
	std::unordered_set<int> us;
	int current = 1;
	int limiter = 20;
	while (goon==1)
	{
		while (current <= limiter) { us.insert(current++); }
		limiter += 20;
		for (auto i = 0; i < us.bucket_count(); i++)
		{
			std::cout << "Bucket " << i <<
				" (" << us.bucket_size(i) << ")\n";
		}
		std::cout << "---------------------------------------------\n";
		std::cout << "Goon:";
		std::cin>>goon;
	}

	return 0;
}