#include <stdio.h0>

struct subject {
    char name[100];
    char code[10];
};

int main() {
  int n;
 struct subject *s = malloc(sizeof(struct subject));
  printf("Please enter number of subjects \n");
  scanf("%d",&n);
    for (int i = 0; i < n; i++) {
    printf("Enter subject name: ");
    scanf("%s", s[i].name);

    printf("Enter subject code: ");
    scanf("%s", s[i].code);

    // other fields for subject details
}

  


}
