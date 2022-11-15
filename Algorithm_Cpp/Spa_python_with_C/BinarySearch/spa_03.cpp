//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	vector<string> shop_menus = { "만두", "떡볶이", "오뎅", "사이다", "콜라" };
//	vector<string> shop_orders = { "오뎅", "콜라", "만두" };
//
//	sort(shop_menus.begin(), shop_menus.end());
//
//	int sum = 0;
//	for (int i = 0; i < shop_orders.size(); i++) {
//
//		string temp = shop_orders[i];
//
//
//		int st = 0;
//		int en = shop_menus.size() - 1;
//
//		while (st <= en) {
//			int mid = (st + en) / 2;
//			if (shop_menus[mid] < temp)
//				st = mid + 1;
//			else if (shop_menus[mid] > temp)
//				en = mid - 1;
//			else {
//				sum++;
//				break;
//			}
//
//		}
//
//	}
//
//	if (sum == shop_orders.size()) {
//		cout << "주문가능";
//	}
//	else {
//		cout << "주문불가";
//	}
//
//
//}
//
