#include <string>

class Employee{
private:
  std::string name;
  int ssn, salary;

public:
  Employee(std::string name, int ssn, int salary) :
           name(name), ssn(ssn), salary(salary) {}

  std::string get_name(){
    return name;
  }

  int get_ssn(){
    return ssn;
  }

  int get_salary(){
    return salary;
  }

  void set_name(std::string in_name){
    name = in_name;
  }

  void set_ssn(int in_ssn){
    ssn = in_ssn;
  }

  void set_salary(int in_salary){
    salary = in_salary;
  }
};

class LLNode{
private:
  Employee * record;
  LLNode * next;

public:
  LLNode(Employee * record) : record(record){};

  Employee * get_record(){
    return record;
  }

  LLNode * get_next(){
    return next;
  }

  void set_record(Employee * in_record){
    record = in_record;
  }

  void set_next(LLNode * in_next){
    next = in_next;
  }
};

class List{
private:
  LLNode * head;
  int size;

public:
  List(){}

  void add(Employee * record){
    LLnode * temp = new LLNode(record);
    head.setNext(temp);
    head = temp;
    size++;
  }

  void remove(Employee * record){
    if(head.get_record() == record){
      head = head.get_next();
      size--;
      return;
    }
    LLNode * prev = head;
    LLNode * curr = head.get_next();
    while(curr != null){
      if(curr.get_record() == record){
        prev.set_next(curr.get_next());
        size--;
        return;
      }
      prev = prev.get_next();
      curr = curr.get_next();
    }
    std::cout<<"Employee not in list"<<std::endl;
  }
}
