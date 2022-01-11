#include <stdio.h>
#include <string.h>

typedef struct {
  char title[50];
  char author[50];
  char subject[50];
  int id;
} book_t;

void print_book_details(const book_t);
void print_book_details2(const book_t*);

int main(int argc, char *argv[])
{
  book_t book1;

  strncpy(book1.title, "Tolstoy", strlen("Tolstoy"));
  strncpy(book1.author, "War and Peace", strlen("War and Peace"));
  strncpy(book1.subject, "Historical drama", strlen("Historical drama"));
  book1.id = 1;

  print_book_details(book1);
  print_book_details2(&book1);

  return 0;
}

void print_book_details(const book_t b)
{
  printf("Title: %s, author: %s, subject: %s, id: %d\n", b.title, b.author, b.subject, b.id);
}

void print_book_details2(const book_t *b)
{
  printf("Title: %s, author: %s, subject: %s, id: %d\n", b->title, b->author, b->subject, b->id);
}