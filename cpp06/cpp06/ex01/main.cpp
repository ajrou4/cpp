#include "Data.hpp"
#include "Serialize.hpp"

int main() {
    Data* data = new Data;
    Serialize serializer;
    
    uintptr_t serializedPtr = serializer.serialize(data);
    Data* deserializedData = serializer.deserialize(serializedPtr);

    if (data == deserializedData) {
        std::cout << "Deserialization successful" << std::endl;
    } else {
        std::cout << "Deserialization failed" << std::endl;
    }

    delete data;
    return 0;
}
