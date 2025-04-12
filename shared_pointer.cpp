#include <iostream>
#include <memory>

int main(){
    std::shared_ptr<int> sp1 = std::make_shared<int>(10);
    std::cout << "Value: " << *sp1 << ", Use count " << sp1.use_count() << std::endl;
    {
        std::shared_ptr<int> sp2 = sp1;
        std::cout << "Inside block - Use count: " << sp1.use_count() << std::endl;
    }
    std::cout << "After block - Use count: " << sp1.use_count() << std::endl;
    return 0;
}