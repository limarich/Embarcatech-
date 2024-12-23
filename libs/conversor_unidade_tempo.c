float conversor_de_tempo(char unidade, char conversor, float valor)
{
    if (unidade == 's')
    {
        if (conversor == 'm')
        {
            return valor / 60.0;
        }
        else if (conversor == 'h')
        {
            return valor / 3600.0;
        }
    }
    else if (unidade == 'm')
    {
        if (conversor == 's')
        {
            return valor * 60.0;
        }
        else if (conversor == 'h')
        {
            return valor / 60.0;
        }
    }
    else if (unidade == 'h')
    {
        if (conversor == 's')
        {
            return valor * 3600.0;
        }
        else if (conversor == 'm')
        {
            return valor * 60.0;
        }
    }
    return -1;
}
