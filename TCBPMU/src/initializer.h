#ifndef INITIALIZER_H
#define INITIALIZER_H

public ref class Initializer {
  
public:
    Initializer(void);

protected:
    virtual ~Initializer();

private:
    System::Windows::Forms::ApplicationContext^ tcbpmu_context;
    void init(void);
   
};

#endif // INITIALIZER_H
