#include "Sales_data.h"
#include <iostream>

int main()
{
	Sales_data total, data;
	double price = 0;
	if (std::cin >> data.bookNo >> data.unites_sold >> price) {
		data.revenue = data.unites_sold * price;
		total.bookNo = data.bookNo;
		total.unites_sold = data.unites_sold;
		total.revenue = data.unites_sold * price;
		while (std::cin >> data.bookNo >> data.unites_sold >> price) {
			if (data.bookNo != total.bookNo) {
				std::cerr << "读取数据失败" << std::endl;
				break;
			}
			else {
				data.revenue = data.unites_sold * price;
				total.bookNo = data.bookNo;
				total.unites_sold += data.unites_sold;
				total.revenue += data.unites_sold * price;
			}
		}
		std::cout << total.bookNo << " " << total.unites_sold
			<< " " << total.revenue << std::endl;
	}
	else {
		std::cerr << "读取数据失败" << std::endl;
		return -1;
	}
	return 0;
}