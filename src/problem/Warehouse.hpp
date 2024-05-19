#pragma once
/**
 * @brief Class representing the Warehouses in a UFLP. 
*/
class Warehouse {
private:
    int capacity;
    int fixed_cost;

public:
    // Constructor
    Warehouse(int cap, int cost) : capacity(cap), fixed_cost(cost) {}

    // Getters
    int getCapacity() const {
        return capacity;
    }

    int getFixedCost() const {
        return fixed_cost;
    }
};