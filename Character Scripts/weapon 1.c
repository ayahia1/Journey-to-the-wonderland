void talk(void)
{	
if (&story == 8)
{
freeze(1);
say_stop("Hello, I was sent by Master Gedo to pick up a weapon.", 1);
wait(200);
say_stop("`9Yes, he has told me about you. Quite a hero.", &current_sprite);
say_stop("`9Pick your weapon", &current_sprite);
wait(200);
choice_start();
		title_start();
		Pick up your weapon
		title_end();
		"Axe"
		"Sword"
		
		choice_end();
		if (&result == 1)
		{
			add_item("item-axe", 437, 1);
            say_stop("Great! An axe!", 1);
            wait(200);
            say_stop("`9Fine choice", &current_sprite);
			wait(200);
		}
		if (&result == 2)
		{
			add_item("item-sw1", 437, 1);
            say_stop("Great! A sword!", 1);
            wait(200);
		}
say_stop("There is an opening in the gate near your mothers house.", &current_sprite);
say_stop("I will open it now for you just this once.", &current_sprite);
say_stop("Go quickly before I change my mind!", &current_sprite);
wait(200);
say_stop("Thanks", 1);
&story = 9;
unfreeze(1);
}
}
