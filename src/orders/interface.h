// order.h
#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order {
public:
    virtual void placeOrder(double amount, bool isBuy) = 0;  // Pure virtual function for placing an order
    virtual void cancelOrder(int orderId) = 0;                // Pure virtual function for cancelling an order
    virtual void updateOrder(int orderId, double newAmount) = 0;  // Updating an existing order

    virtual ~Order() = default;  // Virtual destructor
};

#endif
