#include "options.h"

void show_usage()
{
    printf("%s", USAGES);
}

int parse_option(char *arg)
{
    if (!strcmp("help", arg))
    {
        return HELP;
    }
    else if (!strcmp("-with-color", arg))
    {
        return ENABLE_COLOR;
    }
    else if (!strcmp("-without-color", arg))
    {
        return DISABLE_COLOR;
    }
    else if (!strcmp("show", arg))
    {
        return SHOW;
    }
}
/*
 @param arg options length
 @param args options
 @return [COLORFUL,ELEMENT] 
 default no_color,aftereffect
 0 no_color 1 colorful
 */
void parse_options(int arg, char *args[], int options[])
{

    options[0] = 0;
    options[1] = AfterEffects;
    if (arg > 4)
    {
        printf("too many arguments,see help\n");
        exit(0);
    }
    else
    {

        for (int i = 1; i < arg; i++)
        {
            switch (parse_option(args[i]))
            {
            case HELP:
                show_usage();
                exit(1);
            case ENABLE_COLOR:
                options[0] = 1;
                break;
            case DISABLE_COLOR:
                options[0] = 0;
                break;
            case SHOW:
                if (i + 1 < arg)
                {
                    options[1] = parse_element(args[i + 1]);
                    i++;
                }
                else
                {
                    printf("%s", "bad argument\n");
                    exit(0);
                }
                break;
            }
        }
    }
}
int parse_element(char *arg)
{

    if (!strcmp("all", arg))
    {
        printf("%s", ADOBE_ELEMENTS);
        exit(1);
    }
    else
    {

        for (int i = 0; i < ELEMENT_SIZE; i++)
        {
            if (!strcmp(arg, elems[i]))
                return i;
        }
    }
    return 0;
}