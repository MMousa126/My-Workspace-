
void(*pf_help)(void) = 0;

void timer_set(int t,void(*pf)(void))
{
    for (int i=t;i>0;i--)
        printf("%d\n",i);
    pf_help = pf;
}
void timer_done(void)
{
    if (pf_help != 0)
        pf_help();

}
