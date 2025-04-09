#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <iostream>
#include <vector>

using namespace std;

struct Order {
    string customer_id;
    string customer_name;
    vector<string> order_details;
};

struct Restaurant {
    vector<Order> orderList;
    void getOrder(); // Function to take an order and add it to the vector
    void deleteOrder(); // Function to remove an order (FIFO - remove first element)
    void updateOrder(); // Function to update an order by customer ID

    void showOrder() {
        if (orderList.empty()) {
            cout << "NO ORDERS" << endl;
            return;
        }

        for (const Order& order : orderList) {
            cout << order.customer_id << endl;
            cout << order.customer_name << endl;
            for (const string& item : order.order_details) {
                cout << item << endl;
            }
        }
    }

};

#endif // RESTAURANT_H
