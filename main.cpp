#include <iostream>
#include "Stacks and Queues/SortableStack.h"

int main() {
    SortableStack st;

    st.push(100);
    st.push(22);
    st.push(34);
    st.push(0);
    st.push(101);

    st.sort();

    while(!st.empty()) {
        std::cout<<st.pop()<<", ";
    }

    return 0;
}