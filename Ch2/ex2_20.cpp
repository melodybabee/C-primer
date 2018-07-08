int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;

//define i's value is 42
//declaim a pointer p1, which points to i
//change the value of what p1 points to, now *p1 = i = 42*42