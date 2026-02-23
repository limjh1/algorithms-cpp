// https://www.hackerrank.com/challenges/counter-game/problem

bool IsPowerOfTwo(long long n)
{
    while(true)
    {
        if (1 == n % 2)
            break;
        
        n = n >> 1;
    }  
    
    return (1 == n);
}

long long GetMaxPower(long long n)
{
    long long Power = 1;
    while(true)
    {
        if (n < (Power << 1))
            break;
        
        Power = (Power << 1);
    }
    return Power;
}

string counterGame(long long n) {
    
    bool bIsWinLouise = true;
    while (1 < n)
    {   
        //if (true == IsPowerOfTwo(n))       
        if (0 == n % 2)
        {
            n = n >> 1;
        }
        else
        {            
            long long MaxPower = GetMaxPower(n);
            n -= MaxPower;
        }        
        
        if (1 == n)
            break;
            
        bIsWinLouise = !bIsWinLouise;
    }
    
    return bIsWinLouise ? "Louise" : "Richard";
}