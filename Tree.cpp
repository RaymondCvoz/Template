#include <bits/stdc++.h>

const int lens = 1e4;
int n,use[lens];

class node
{
    public:
    int deg,c,num;
    std::vector <node*> v;
    public:node(int num = 0,int c = 0)
    {
        this -> c = c;
        this -> num = num;
    }
};
node *root;
bool cmp(node *a,node *b)
{
    return a -> p < b -> p;
}
std::set <node*> tmp;


void calc(node *cnt)
{
    if(cnt -> v.empty())
    {
        cnt -> deg = 1; return;
    }
    for(auto i : cnt -> v) calc(i);
    for(auto i : cnt -> v) cnt -> deg += i -> deg;
    return;
    
}
