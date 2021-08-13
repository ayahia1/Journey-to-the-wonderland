void main(void)
{
	if (&story == 10)
	{
		sp_active(&current_sprite, 1);
		screenlock(1);
	}
	else if (&story == 15)
	{
		sp_active(&current_sprite, 1);
		screenlock(1);
	}
	else if (&story > 19) {
		sp_active(&current_sprite, 1);
		screenlock(1);
	}
	else 
	{
		sp_active(&current_sprite, 0);
	}
}

void talk(void)
{
	if (&story == 10)
	{
	freeze(1);
	say_stop("`5Hello traveller", &current_sprite);
	wait(100);
	say_stop( "A talking tree?!!!!! Okay.", 1);
	wait(100);
	say_stop("`5Welcome to Wonderland, where imagination becomes reality.", &current_sprite);
	wait(100);
	say_stop("I want to visit the ends of this land.", 1);
	wait(100);
	say_stop("`5The ends of Wonderland is an ocean.", &current_sprite);
	wait(100);
	say_stop("`5The ocean would get you out of the island, Dink", &current_sprite);
	wait(100);
	say_stop("Yessss, this is my goal", 1);
	wait(100);
	say_stop("Oh! Wait a minute, How do you know my name?", 1);
    wait(200);
	screenlock(0);
	&story = 11;
	unfreeze(1);
	sp_active(&current_sprite, 0);
	say_stop("Damn, what happens ?!!!!", 1);
   }
   
   if (&story == 15)
   {
	freeze(1);
	say_stop("`5Hey, you again...", 1);
	wait(100);
	say_stop("`5You are nealy there. Don't give up", &current_sprite);
	wait(100);
	say_stop("I don't know what to do", 1);
	wait(100);
	say_stop("`5I am your guide", &current_sprite);
	wait(100);
	say_stop("`5Up ahead are two caves. Visit both of them", &current_sprite);
	say_stop("`5Kill all the enemies and take the items", &current_sprite);
	wait(100);
	say_stop("Each cave will unlock the next path untill you reach your goal", &current_sprite);
	wait(200);
	say_stop("Th...", 1);
	screenlock(0);
	&story = 16;
	unfreeze(1);
	sp_active(&current_sprite, 0);
	say_stop("Again?!!!!, Thanks any way", 1);
   }

   if (&story > 20)
   {
	   freeze(1);
	   say_stop("`5There is a final test to your adventure, Dink.", &current_sprite);
	   wait(100);
	   say_stop("What is it ?", 1);
	   wait(100);
	   say_stop("`5There are four doors ahead, and only one leads to your ultimate goal", &current_sprite);
	   wait(100);
	   say_stop("`5If you want to test your might, choose the path you think is right", &current_sprite);
	   wait(100);
	   sp_active(&current_sprite, 0);
	   say_stop("I am not surprised anymore", 1);
	   unfreeze(1);
   }
}