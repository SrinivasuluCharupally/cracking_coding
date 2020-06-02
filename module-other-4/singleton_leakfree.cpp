#include<iostream>

using namespace std;

class Singleton {
        int val;
        static Singleton* instance_;
//      Singleton() {}

  public:
        Singleton() { cout << "Singleton constructor" << endl; }
        static Singleton* getInstance() {
                if(instance_ ==NULL)  {
                        instance_ = new Singleton;
                }
                return instance_;
        }

        void setVal(int d) { val = d; }
        int getVal() { return val; }
        ~Singleton() { cout << "Singleton destructor" << endl; }
        static void Release() { // you should release instance_ from class memberfunction. 
								// otherwise use delete(singletonPointerObj1) from main()
								// or, use delete(singletonPointerObj2) from main()
                delete(instance_);
        }
};

Singleton* Singleton::instance_ = NULL;

int main() {
        Singleton* singletonPointerObj1 = Singleton::getInstance();
        Singleton* singletonPointerObj2 = Singleton::getInstance();
cout << "obj1 = " << singletonPointerObj1 << endl << "Obj2 = " << singletonPointerObj2 << endl;
        Singleton* singletonPointerObj3 = new Singleton; // this is possible because constructor is not private, if you make private then it's not possible..
        cout << "Obj3 = " << singletonPointerObj3 << endl;
        // delete(singletonPointerObj3); // double free because you have Release() from class memeber
									// you either of two
        Singleton::Release();
}
