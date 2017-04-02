#include <iostream>
#include <string>

struct Sales_data {
	std::string bookNo;
	unsigned unites_sold = 0;
	double revenue = 0.0;
};

int main()
{
	Sales_data data1, data2;
	double price = 0;
	if (std::cin >> data1.bookNo >> data1.unites_sold >> price) {
		int item = 0;
		data1.revenue = data1.unites_sold * price;
		item++;
		while (std::cin >> data2.bookNo >> data2.unites_sold >> price) {
			data2.revenue = data1.unites_sold * price;
			if (data1.bookNo == data2.bookNo) {
				item++;
				continue;
			} else {
				std::cout << data1.bookNo << " " << item << std::endl;
				data1 = data2;
				item = 1;
			}
		}
		std::cout << data1.bookNo << " " << item << std::endl;
	} else {
		std::cerr << "输入数据有误" << std::endl;
		return -1;
	}
	return 0;
}