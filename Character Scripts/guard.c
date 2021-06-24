void talk(void)
{
	if (&story != 3)
	{
		freeze(1);
		say_stop("`3Move from here, boy", &current_sprite);
		unfreeze(1);
	}
	if (&story == 3)
	{
		freeze(1);
say_stop(" I would like to pass through the gate ", 1) 
wait(100);
say_stop("`3No can do. Orders came from the King" &current_sprite);
say_stop("`3it is too dangerous for civilians out there.", &current_sprite);
wait(100);
say_stop("I can handle myself out there!", 1);
wait(100);
say_stop ("`3There is nothing I can do.", &current_sprite);
say_stop("`3Now leave. If you approach and touch me you die", &current_sprite);
wait(100);
say_stop(" But I really want to explore the world outside the walls", 1); 
wait(300);
say_stop("`3If you want to cross the borders, go to the wise old man.", &current_sprite);
say_stop("`3visit him. He will help you", &current_sprite);
wait(300);
say_stop("I will. Thank you" 1);
&story = 4;
		unfreeze(1);
	    unfreeze(&current_sprite);
	}
	
}