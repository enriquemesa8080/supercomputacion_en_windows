#include <stdio.h>
#include <stdlib.h>

class project_manager{
  private:
    int x = 0;
    int y = 0;
    int z = 0;
  public:
    project_manager(int x, int y, int z);
    ~project_manager();
}


project_manager(int x, int y, int z){
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    this->x = x;
    this->y = y;
    this->z = z;
    return;
}
