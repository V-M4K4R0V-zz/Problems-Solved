int numberOfSteps (int num)
{
    int jolia, mistir, stepdaddy;
    stepdaddy = 0; 
        while(num != 0)
        {
            if(num % 2 == 0)
            {
                jolia = num / 2;
                stepdaddy ++;
                num = jolia;
            }
            else
            {
                mistir = num - 1;
                stepdaddy ++;
                num = mistir;
            }
        }
    return stepdaddy;
}


