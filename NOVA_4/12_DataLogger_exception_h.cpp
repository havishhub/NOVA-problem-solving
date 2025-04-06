#include <iostream>
#include <string>
using namespace std;

class DataLogger {
public:
    template <typename T>
    void logData(const T& data) {
        cout << "[LOG] Data: " << data << endl;
    }
};

int main() {
    DataLogger logger;
    logger.logData(3500);                          
    logger.logData(98.6f);                         
    logger.logData("Vehicle speed exceeds limit"); 
    logger.logData(false);                         
    logger.logData('N');                           
    return 0;
}
