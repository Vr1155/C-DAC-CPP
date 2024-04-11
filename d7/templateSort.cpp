// instructor copy pasts code using ":set paste"
// when inserting in vi, right click and select insert also

#include<iostream>
using namespace std;

// template class with a pure virtual function:
template<typename T>
class ISort
{
    public:
        virtual void sortArr(T* coll, int size) = 0;
};

template<typename T, int size>
class ArrayContainer{
    T* ar;
    ISort<T>* srt;
    public:
    ArrayContainer(T* ar):ar(ar), srt(NULL){

    }
    void setSort(ISort<T>* srt){
        this->srt = srt;
    }
    void Sort(){
        if(srt != NULL){
            this->srt->sortArr(ar, size);
        }
    }

    void Display(){
        cout << "-------------------------------------------\n";
        for(size_t i =0; i<size; i++){
            cout << ar[i] << ' ';
        }
        cout << "\n-------------------------------------------\n";
    }
};

template<typename T>
class LinearSort: public ISort<T>{
public:
    void SortArr(T* coll, int size){
        for(size_t i=0; i<size-1; i++){
            for(size_t j = i+1; j < size; j++){
                if(coll[i] >= coll[j]){
                    swap(coll[i], coll[j]);
                }
            }
        }
    }
};

template<typename T>
    class BubbleSort :public ISort<T>{
        public:
            void sortArr(T* coll, int size){
                for(size_t i=0; i<size-1; i++){
                    for(size_t j=size-1; j>= i+1; j--){
                        if(coll[j] <= coll[j-1]){
                            swap(coll[j], coll[j-1]);
                        }
                    }
                }
            }
    };

int main(){
    int arr[5] = {5,2,1,3,4};
    ArrayContainer<int, 5> cnt(arr);
    BubbleSort<int> bubleSrt;
    cnt.setSort(&bubleSrt);
    cnt.Display();
    cnt.Sort();
    cnt.Display();
    return 0;
}