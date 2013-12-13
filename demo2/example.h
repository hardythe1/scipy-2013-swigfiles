/* File: example.h */

#include <vector>
#include <string>

class example{
    private:
        std::string key;
        std::vector<int> values;

    public:
        std::string getKey();
        std::vector<int> getValues();
        void setKey(std::string key);
        void setValue(int value);
}; 

