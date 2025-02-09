// vector.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <iostream>
#include <string>
#include <vector>
 #include<cstdio>//for using printf
using namespace std;

int main() {
    cout << "Vector from initializer list: " << endl;
    vector<int> vi1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    cout << "size: " << vi1.size() << endl;
    cout << "front: " << vi1.front() << endl;
    cout << "back: " << vi1.back() << endl;
    
    // iterator
    cout << endl << "Iterator:" << endl;
    vector<int>::iterator itbegin = vi1.begin();
    // well if you thought
    //  about using pointers think about what variable
    //   type it points to since it is a
    //    template you would have no idea .
    vector<int>::iterator itend = vi1.end();
      
 printf("itbegin:%d \t itend:%d\n",itbegin,itend);//itbegin:7149152          itend:7149192
printf("%d\n",vi1[(vi1.end()-vi1.begin())/4 - 2]);// prints 1


    for (auto it = itbegin; it < itend; ++it) {
        cout << *it << ' ';
    }
    cout << endl;

    vi1.insert(vi1.end(),11);
cout<<vi1.back()<<endl;// prints 11
    
    cout << endl << "Index:" << endl;
    cout << "element at 5: " << vi1[5] << endl;
    cout << "element at 5: " << vi1.at(5) << endl;
    
    
    cout << endl << "Range-based for loop:" << endl;
    for (int & i : vi1) {
        cout << i << ' ';
    }
    cout << endl;
    
    cout << endl << "Insert 42 at begin + 5: " << endl;
    vi1.insert(vi1.begin() + 5, 42);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1[5]: " << vi1[5] << endl;
    
    cout << "Erase at begin + 5: " << endl;
    vi1.erase(vi1.begin() + 5);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1[5]: " << vi1[5] << endl;
    
    cout << "push_back 47: " << endl;
    vi1.push_back(47);
    cout << "size: " << vi1.size() << endl;
    cout << "vi1.back() " << vi1.back() << endl;
    
    cout << "Range-based for loop: " << endl;
    for(int & v : vi1) {
        cout << v << ' ';
    }
    cout << endl << endl;
    
    // from C-array
    const static size_t size = 10;
    int ia[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << endl << "Vector from C-array: " << endl;
    vector<int> vi2(ia, ia + size);
    printf("ia : %d\n",ia);//this prints out the address
    // ia : 6421504
    for( int & i : vi2 ) {
        cout << i << ' ';
    }
    cout << endl << endl;
    
    // vector of strings
    cout << "Vector of strings:" << endl;
    vector<string> vs = { "one", "two", "three", "four", "five" };
    for(string & v : vs) {
        cout << v << endl;
    }
    
    return 0;
}
