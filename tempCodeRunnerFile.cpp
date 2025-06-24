if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            if (FRONT == max - 1)
                FRONT = 0;
            else 
                FRONT = FRONT +  1;
        }