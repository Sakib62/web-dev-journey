/**	  	 بِسْمِ اللَّهِ الرَّحْمَنِ الرَّحِيم
 *       Author  :   Sakib62
 *       Created :   Tue__11-Jun-2024__21:53:33
 *       File    :   specialStack.cpp
 **/

#include <iostream>
#include <stack>

using namespace std;
typedef long long ll;

// design a stack that supports getMinElement() in O(1) time and space.

struct stacky
{
    stack<int> st;
    int min;

    void push(int num)
    {
        if (st.empty())
        {
            st.push(num);
            min = num;
        }
        else
        {
            if (num >= min)
            {
                st.push(num);
            }
            else
            {
                st.push(num - min);
                min = num;
            }
        }
        cout << "Inserted: " << num << "\n";
    }

    void pop()
    {
        if (st.empty())
        {
            cout << "Stack empty!!";
        }
        else
        {
            int tmp;
            if (st.top() >= min)
            {
                tmp = st.top();
            }
            else
            {
                tmp = min;
                min = min - st.top();
            }
            st.pop();
            cout << "Popped: " << tmp << "\n";
        }
    }

    int getMin()
    {
        if (st.empty())
        {
            cout << "Stack empty!!";
            return 0;
        }
        else
        {
            cout << "Min element: " << min << "\n";
        }
        return min;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stacky st;
    st.push(18);
    st.push(19);
    st.getMin();
    st.push(29);
    st.push(15);
    st.getMin();
    st.push(16);
    st.pop();
    st.getMin();
    st.pop();
    st.getMin();
    st.pop();
}