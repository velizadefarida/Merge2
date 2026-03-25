template<class T>
T* merge(const T* a, size_t sa, const T* b, size_t sb, T* c)
{
    T* cur = c;
    size_t i = 0, j = 0;
    while (i < sa && j < sb)
    {
        if (a[i] < b[j])
        {
            *cur = a[i];
            ++i;
        }
        else
        {
            *cur = b[j];
            ++j;
        }
        ++cur;
    }
    while (i < sa)
    {
        *cur = a[i];
        ++i;
        ++cur;
    }
    while (j < sb)
    {
        *cur = b[j];
        ++j;
        ++cur;
    }
    return cur;
}
