	void main(void)
	{
	if (&story > 6)
	{
		sp_active(&current_sprite, 0);
	}
    }

void talk(void)
{
	if (&story == 6)
	{
	freeze(1);
	say_stop("You are free to go", 1);
	wait(200);
	say_stop("Thank you my hero", &current_sprite);
	wait(200);
	screenlock(0);
	sp_speed(&current_sprite, 3);
	sp_base_walk(&current_sprite, 360);
	move_stop(&current_sprite, 6, 650, 1);
	wait(1);
	sp_active(&current_sprite, 0);
	&story = 7;
	unfreeze(1);
	say_stop("I am going back to the wise man", 1);
	}
}
	
