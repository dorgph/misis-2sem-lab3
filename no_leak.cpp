#include <memory>

int main(){
    std::unique_ptr<char> data = nullptr;
    for (int i = 0; i < 1000; ++i){
        data = std::unique_ptr<char> (new char(0));
    }
    return 0;
}