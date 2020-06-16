#ifndef smart_pointer_h
#define smart_pointer_h


class smart_pointer
{
  public:
    smart_pointer(int* pTest);            //Konstruktor mit erwartetem Parameter (Pointer auf int-Variable)
    ~smart_pointer();                     //Destruktor

  private:
    int* mpPointer;                       //Pointer auf int-Variable
};

#endif // smart_pointer_h
