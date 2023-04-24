class ParkingSystem {
    vector<int> veh;
    
public:
    ParkingSystem(int big, int medium, int small) {
        veh={big, medium, small};
    }
    
    bool addCar(int carType) {
        if(veh[carType-1]>0) {
            veh[carType-1]--;
            return true;
        }
        return false;
    }
};