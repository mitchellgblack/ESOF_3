class BTNode{

private:
  int val;
  BTNode * left, * right;

public:
  BTNode(int val) : val(val){}

  int get_val(){
    return val;
  }

  int set_val(int in_val){
    val = in_val;
  }

  BTNode * get_left(){
    return left;
  }

  BTNode * get_right(){
    return right;
  }

  BTNode * set_left(BTNode * in_left){
    left = in_left;
  }

  BTNode * set_right(BTNode * in_right){
    right = in_right;
  }
};
