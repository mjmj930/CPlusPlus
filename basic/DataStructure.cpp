#include<iostream>
#include<vector>

// 数组
class ArrayStru {
private:
    int arr[3] = {0x0001,2,3};
public:
    ArrayStru() {    
        std::cout << "Array Struct: " <<std::endl;
        std::cout << "origin array: ";
        for (int i = 0; i < 3; ++i) {
            std::cout << " " << arr[i]  ;
        };

        std::cout << "\n arr[1]: " << arr[1] << std::endl; 
        std::cout<< std::endl;
    }
};

// 向量
class VectorStru {
private:
    // initializtion
    std::vector<int> vec;

public:
    VectorStru(){
        vec.push_back(1);
        for(int i=2; i <= 5; ++i) {
            vec.push_back(i);
        }
        std::cout << "Vector Struct: " <<std::endl;
        std::cout << "Vector Element add: " <<std::endl;
        for(int i=0; i < 5; ++i) {
            std::cout<< vec[i] << " ";
        }

        std::cout << "\n Delete last Element: " <<std::endl;

        vec.pop_back();
        for (int num : vec) {
            std::cout << num << " ";
        }
        std::cout<< std::endl;
    }
};

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class LinkedList {
private:
    ListNode* head;
    ListNode* second;
    ListNode* third;
    ListNode* fourth;

public:
    LinkedList(){
        head = new ListNode(1);
        second = new ListNode(2);
        third = new ListNode(3);
        fourth = new ListNode(4);

        head->next = second;
        second->next = third;
        third->next = fourth;

        ListNode* current = head;
        while(current != nullptr) {
            std::cout << current->val << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    ~LinkedList() {
        ListNode* current = head;
        while (current != nullptr) {
            ListNode* temp = current;
            current = current -> next;
            delete temp;
        }
    }
};




int main() {

    // ArrayStru arr;

    // VectorStru VecStru;

    LinkedList LikedList; 

    return 0;
}