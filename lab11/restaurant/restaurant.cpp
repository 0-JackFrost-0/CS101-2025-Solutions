// Author: Om Godage
// Date: 5/4/25

#include "restaurant.h"

void Restaurant::getOrder(){
    string cId, cName;
    int n;
    cin >> cId >> cName >> n;
    Order order;
    order.customer_id = cId;
    order.customer_name = cName;
    cin.ignore();
    while(n--){
        string o;
        getline(cin, o);
        order.order_details.push_back(o);
    }
    orderList.push_back(order);
}

void Restaurant::updateOrder(){
    string cId, o;
    cin >> cId >> o;
    for(Order &order: orderList){
        if(order.customer_id == cId)
            order.order_details.push_back(o);
    }
}

void Restaurant::deleteOrder(){
    orderList.erase(orderList.begin());
}