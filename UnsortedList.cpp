
#include "UnsortedList.h"

template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    currentPos = 0;
}

template<class T>
void UnsortedList<T>::MakeEmpty() {
    length = 0;
}

template<class T>
bool UnsortedList<T>::IsFull() const {

    if (length == MAX_ITEMS) {
        return true;
    }

    return false;
}

template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}

template<class T>
bool UnsortedList<T>::Contains(T someItem) {

    for (int i=0; i<length; i++) {
        if (info[i] == someItem) {
            return true;
        }
    }
    return false;
}

template<class T>
void UnsortedList<T>::PutItem(T item) {
    if (length == MAX_ITEMS) {
        throw "List is full";
    } else {
        info[length] = item;
        length++;
    }
}

template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    if (length == 0) {
        throw "List is Empty";
    } else {
        for (int i=0; i<length; i++) {
            if (info[i] == item) {
                info[i] = info[length-1];
                length--;
                return;
            }
        }
    }

}

template<class T>
void UnsortedList<T>::ResetIterator() {
    currentPos = 0;
}

template<class T>
T UnsortedList<T>::GetNextItem() {
    return info[currentPos++];
}


