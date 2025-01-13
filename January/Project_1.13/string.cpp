#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

namespace fmsaier
{
    class string
    {
        friend ostream& operator<<(ostream& _cout, const fmsaier::string& s);
        friend istream& operator>>(istream& _cin, fmsaier::string& s);

    private:
        char* _str;
        size_t _capacity;
        size_t _size;

    public:
        typedef char* iterator;
        typedef const char* const_iterator;

    public:
        string(const char* str = "")
        {
            _capacity = _size = strlen(str);
            _str = new char[_size + 1];
            strcpy(_str, str);
        }
        string(const string& s)
        {
            string tmp(s._str);
            swap(tmp);
        }
        string& operator=(string s)
        {
            swap(s);
            return *this;
        }
        ~string()
        {
            _size = _capacity = 0;
            delete[] _str;
            _str = nullptr;
        }

        //////////////////////////////////////////////////////////////
        // iterator
        iterator begin()
        {
            return _str;
        }
        iterator end()
        {
            return _str + _size;
        }
        const_iterator begin() const
        {
            return _str;
        }
        const_iterator end() const
        {
            return _str + _size;
        }

        /////////////////////////////////////////////////////////////
        // modify
        void push_back(char c)
        {

        }

        string& operator+=(char c)
        {

        }

        void append(const char* str)
        {

        }

        string& operator+=(const char* str)
        {

        }

        void clear()
        {
            _size = _capacity = 0;
            _str[0] = '\0';
        }

        void swap(string& s)
        {
            std::swap(_str, s._str);
            std::swap(_size, s._size);
            std::swap(_capacity, s._capacity);
        }

        const char* c_str()const
        {
            return _str;
        }

        /////////////////////////////////////////////////////////////
        // capacity
        size_t size()const
        {
            return _size;
        }
        size_t capacity()const
        {
            return _capacity;
        }
        bool empty()const
        {
            return _size == 0;
        }

        void resize(size_t n, char c = '\0')
        {

        }

        void reserve(size_t n)
        {
            if (n > _capacity)
            {
                char* newStr = new char[n + 1];
                strcpy(newStr, _str);
                delete[] _str;
                _str = newStr;
                _capacity = n;
            }
        }

        /////////////////////////////////////////////////////////////
        // access
        char& operator[](size_t index)
        {
            return *(_str + index);
        }

        const char& operator[](size_t index)const
        {
            return *(_str + index);
        }

        /////////////////////////////////////////////////////////////
        //relational operators
        bool operator<(const string& s)
        {

        }

        bool operator<=(const string& s)
        {

        }

        bool operator>(const string& s)
        {

        }

        bool operator>=(const string& s)
        {

        }

        bool operator==(const string& s)
        {

        }

        bool operator!=(const string& s)
        {

        }

        // ����c��string�е�һ�γ��ֵ�λ��
        size_t find(char c, size_t pos = 0) const
        {

        }

        // �����Ӵ�s��string�е�һ�γ��ֵ�λ��
        size_t find(const char* s, size_t pos = 0) const
        {

        }

        // ��posλ���ϲ����ַ�c/�ַ���str�������ظ��ַ���λ��
        string& insert(size_t pos, char c)
        {
            if (_size == _capacity)
            {
                int newCapacity = _capacity == 0 ? 4 : 2 * _capacity;
                reserve(newCapacity);
            }
            strcpy(_str + pos + 1, _str + pos);
            _str[pos] = c;
            _size++;
            return *this;
        }

        string& insert(size_t pos, const char* str)
        {

        }

        // ɾ��posλ���ϵ�Ԫ�أ������ظ�Ԫ�ص���һ��λ��
        string& erase(size_t pos, size_t len)
        {

        }
    };
}


ostream& operator<<(ostream& _cout, const fmsaier::string& s)
{
    return _cout;
}

istream& operator>>(istream& _cin, fmsaier::string& s)
{
    return _cin;
}

int main()
{
    fmsaier::string s("hello");
    for (char ch : s)
    {
        cout << ch << endl;
    }
    return 0;
}