#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    // class defining explicitly friends
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);    // binary in this case 2 params
    friend Mystring operator-(const Mystring &obj);                      // unary in this case 1 param
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); // binary again 2 params

private:
    char *str; // pointer to a char[] that hold a C-style string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);

    void display() const;

    int get_length() const;
    const char *get_str() const;
};

#endif // _MYSTRING_H_
