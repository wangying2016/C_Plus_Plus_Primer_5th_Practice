#include <stdlib.h>
#include "Sales_item.h"

int main()








{
	Sales_item total, trans;
	if (std::cin >> total) {
		while (std::cin >> trans) {
			if (compareIsbn(total, trans)) {
				total = total + trans;
			}
			else {
				std::cout << "isbn账号不一致" << std::endl;
				return -1;
			}
		}
		std::cout << total << std::endl;
	} 
	else {
		std::cout << "数据为空" << std::endl;
		return -1;
	}
	system("pause");
	return 0;
}