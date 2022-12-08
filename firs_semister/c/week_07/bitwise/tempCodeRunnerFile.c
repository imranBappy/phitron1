 printf("Please enter your number (0 to exit): ");
        scanf("%d", &n);
        if (!n)
            break;
        printf("How many bits you want to shift left: ");
        scanf("%d", &x);
        m = n >> x;