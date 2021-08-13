void main(void)
{
	if (&story == 5)
	{
	wait(800);
	freeze(1);
	wait(100);
	say_stop("I will kill you and get the girl with me", 1);
	unfreeze(1);
	}
	if (&story < 5)
	{
		wait(800);
		freeze(1);
		wait(100);
		say_stop("What am I doing here ?", 1);
		wait(100);
		say_stop("Sorry, I will get out", 1);
		unfreeze(1);
	}
	if (&story == 10)
	{
		wait(400);
		freeze(1);
		&level += 1;
		choice_start();
		title_start();
		Up to level 2
		title_end();
		"increase magic"
		"increase defense"
		"Leave"
		choice_end();
		if (&result == 1)
		{
			&magic += 1;
		}
		if (&result == 2)
		{
			&defense += 1;
		}
		unfreeze(1);
	}
	if (&story == 15)
	{
		wait(400);
		freeze(1);
		&level += 1;
		choice_start();
		title_start();
		Up to level 3
		title_end();
		"increase magic"
		"increase defense"
		"Leave"
		choice_end();
		if (&result == 1)
		{
			&magic += 1;
		}
		if (&result == 2)
		{
			&defense += 1;
		}
		unfreeze(1);
	}
	

}