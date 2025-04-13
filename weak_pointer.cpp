#include <iostream>
#include <memory>


int main(){
    std::shared_ptr<int> sp = std::make_shared<int>(42);
    std::weak_ptr<int> wp = sp;     // weak_ptr ссылается на shared_ptr

    std::cout << "Use count (shared_ptr) " << sp.use_count() << std::endl;

    if (auto shared = wp.lock()) {      // метод lock предоставляет доступ к объекту
        std::cout << "Value from weak_ptr: " << *shared << std::endl;
    }
    else{
        std::cout << "Object has been destroyed" << std::endl;
    }

    sp.reset();   //метод reset уничтножает объект, управляемый shared_ptr

    if (wp.expired()){    //expired проверяет существует ли объект
       std::cout << "Object is no longer avalable." << std::endl;
    }

    return 0;
}