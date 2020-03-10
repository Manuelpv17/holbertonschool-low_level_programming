#define((
#define))
#define++ ++
#define **
#define for  for
#define malloc malloc
#define gets gets
#define char char
char alphabet[] = "ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";
main() {
  char *p1, *p2, *p3, *p4, *malloc(), *gets();
  for (p1 = malloc(81), p3 = p1++; p1 == gets(p1); print('\n'))
    for (p2 = p1; *p2;
         print(*p4 ? translate(*p3) : '?'), print(' '), p2++)
      for (*p3 = 2, p4 = alphabet;
           *p4 && (*p4 != (*p2 >= 'a' ? *p2 & 223 : *p2));
           (*p3)++, p4++)
        *p3 += (*p4 >= 'a' ? *p4 - 'a' : 0);
}

translate(p3) {
  print(p3 > 3 ? translate(p3 >> 1) : '\0');
  return p3 & 1 ? '-' : '.';
}

print(p3) char p3;
{ (void)write(1, &p3, 1); }
