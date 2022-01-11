#include <stdio.h>

typedef struct {
  unsigned int field1;
  unsigned int field2;
} bitfield1_t;

// saving space
typedef struct {
  unsigned int field1:1;
  unsigned int field2:1;
} bitfield2_t;

// restricting data types
typedef struct {
  unsigned int age: 3;
} age_t;

// as flags
typedef struct {
  unsigned int zf: 1;
  unsigned int cf: 1;
  unsigned int of: 1;
} flags_t;

void interpret_flags(const flags_t *);

int main(int argc, char *argv[])
{
  printf("%lu, %lu\n", sizeof(bitfield1_t), sizeof(bitfield2_t));

  age_t age;

  printf("%lu\n", sizeof(age_t));

  age.age = 1;
  printf("age = %d\n", age.age);

  age.age = 7;
  printf("age = %d\n", age.age);

  //age.age = 8;
  //printf("age = %d\n", age.age);
  
  flags_t f;
  f.zf = 1;
  f.cf = 0;
  f.of = 1;

  printf("%lu\n", sizeof(flags_t));
  interpret_flags(&f);
}

void interpret_flags(const flags_t *f)
{
  if (f->zf) {
    printf("Zero Flag is set\n");
  }

  if (f->cf) {
    printf("Carry Flag is set\n");
  }

  if (f->of) {
    printf("Overflow Flag is set\n");
  }
}