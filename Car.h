#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

#define CAR 2

class Car : public Vehicle
{
    public:
        Car(DirectionType direction, int lane, wxPoint basePosition, wxPoint offsetPosition, int arena);
        virtual ~Car();

        static int Getcount() { return count; }
        static void Setcount(int val) { count = val; }

        void show() override;
        bool move() override;

    protected:

    private:
        static int count;
};

#endif // CAR_H
