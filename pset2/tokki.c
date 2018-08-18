// typedef struct {
//     string name;
//     int age;
// } Tokki;

// Tokki* tokki(string name) {
//     Tokki* tokki = (Tokki*) malloc(sizeof(Tokki));
//     tokki->name = name;
//     tokki->age = 1;

//     return tokki;
// }

// int main(void)
// {
//     Tokki* gaonita = tokki("Gaonita");

//     string x = reverse("hello");
//     printf("%s\n", gaonita->name);
//     free(x);
// }

// string hechuper() {
//     string current = malloc(sizeof(char));
//     for (int i = 0; i < 10; i++) {
//         current[i] = 97 + i;
//         current = realloc(current, sizeof(char) * (strlen(current) + 1));
//     }

//     return current;