
#include <stdio.h>
#include <stdlib.h>
#define stacksize 10
#define TRUE 1
#define FALSE 0
#define max 100
#include <string.h>
struct stack

{
  int item[stacksize];
  int top;
};

struct stack s;
/***************/
int initialize() { s.top = -1; }

/***************/

int isempty() {
  if (s.top == -1)
    return TRUE;
  else
    return FALSE;
}

/***************/

int push(int x) {
  if (s.top == stacksize - 1) {
    printf("stack is overflowed");
    exit(1);
  }

  s.top++;
  s.item[s.top] = x;
}

/***************/

int pop() {
  int x;
  if (isempty()) {
    printf("stack underflowed");
    exit(1);
  }
  x = s.item[s.top];
  s.top--;
  return x;
}
/****************/
char stacktop() {
  char x;
  x = s.item[s.top];
  return x;
}

//************
// postfix to prefix

int precedence(char a, char b) {
  if (a == '^' || a == '*' || a == '/' || a == '%') {
    if (b == '^') {
      return FALSE;
    } else {
      return TRUE;
    }
  } else {
    if (b == '+' || b == '-') {
      return TRUE;
    } else {
      return FALSE;
    }
  }
}

void infix_to_prefix(char *infix) {
  int i = 0, j = 0;
  char prefix[20], s, x;
  initialize();
  while (infix[i] != '\0') {
    s = infix[i];
    i++;
    if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') ||
        (s >= '0' && s <= '9')) {
      prefix[j] = s;
      j++;
    } else {
      while (!isempty() && precedence(s,stacktop())) {
        push(s);
      }

       x = pop();
        prefix[j] = x;
        j++;
    }
  }
  while (!isempty()) {
    x = pop();
    prefix[j] = x;
    j++;
  }
  prefix[j] = '\0';
  printf("%s", prefix);
}
int main() {
  char infix[] = "a+b";


  infix_to_prefix(infix);
}

