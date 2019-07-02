//
// Created by Amirkhan on 02-Jul-19.
//

//#include<stdio.h>

int dtmf(n)
{
    int flg=0;
    for (int i = 2; i < n; ++i) {
        if (n%i == 0)
        {
            flg = 1;
            break;
        }
    }
    if (flg)
        return 1;
    else
        return 0;


}