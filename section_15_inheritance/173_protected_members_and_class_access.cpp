/*

            Protected member and class access


    The protected class member modifier

    class Base {
        protected:
            // protected Base class members . . .
    };


    - Accessible from the Base class itself
    - Accessible from classes Derived from Base
    - Not accessible by objects of Base or Derived


    -------------------------------------------------------------

    The protected class member modifier

    class Base {
        public:
            int a;      // public Base class members . . .

        protected:
            int b;      // protected Base class members . . .

        private:
            int c;      // private Base class members . . .
    };


    ------------------------------------------------------------------------
    Access with public inheritance (most common inheritance!)


        Base class                      Access in Derived Class
    public: a            public             public: a
    protected: b       inheritance          protected: b
    private: c                              c: no access

    ---------------------------------------------------------------------------------------

    Access with protected inheritance


        Base class                      Access in Derived Class
    public: a           protected           protected: a
    protected: b       inheritance          protected: b
    private: c                              c: no access

    ---------------------------------------------------------------------------------------

    Access with private inheritance


        Base class                      Access in Derived Class
    public: a           private             private: a
    protected: b       inheritance          private: b
    private: c                              c: no access


*/