class Singleton
{
public:
    static Singleton *getInstance();

private:
    Singleton();
    ~Singleton();

    static Singleton *instance;
};
