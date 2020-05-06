// 3.2 迭代器类位置
template <class T>
class MyLink
{
public:
    struct Unit         // 链表单元
    {
        T value;
        Unit* next;
    };

    class LinkIterator
    {
        Unit* init;
    public:
        LinkIterator(Unit* init)
        {
            this->init = init;
        }
        bool operator != (LinkIterator& it)
        {
            return this->init != it.init;
        }
        void operator++(int)
        {
            init = init->next;
        }
        Unit operator*()
        {
            return *init;
        }
    };
    Unit* head;   // 链表头
    Unit* tail;   // 链表尾
    Unit* prev;

public:
    MyLink()
    {
        head = tail = prev = NULL;
    }

    void Add(T &value)
    {
        Unit* u = new Unit();
        u->value = value;
        u->next = NULL;
        if(head == NULL)
        {
            head = u;
            prev = u;
        }
        else
        {
            prev->next = u;
            prev = u;
        }
        tail = u->next;
    }

    Unit* Begin()
    {
        return head;
    }

    Unit* End()
    {
        return tail;
    }

    virtual ~MyLink()
    {
        if(head != NULL)
        {
            Unit* prev = head;
            Unit* next = NULL;
            while(prev != tail)
            {
                next = prev->next;
                delete prev;
                prev = next;
            }
        }
    }
};

template<class T>
ostream& operator<<(ostream& os, MyLink<T>::Unit& s)
//由Unit<T>&s 变为MyLink<T>::Unit& s
{
    os << s.value;
    return os;
}

int main()  // 原来返回值是void
{
    int m = 0;
    MyLink<int>m1;
    for(int i=0;i<5;i++)
    {
        m = i+1;
        m1.Add(m);
    }
    MyLink<int>::LinkIterator start = obj2.Begin();
    MyLink<int>::LinkIterator end = obj2.End();
    display(start,end);
}

