void talk(void)
{
	if (&story == 7)
	{
		freeze(1);
		say_stop("Hello again, I have saved your daughter. ", 1);
		wait(200);
		say_stop("`3Oh thank you! My name is Gedo, and I am a man of my word.", &current_sprite);
		say_stop("`3Go to my weapon vendor, he will give you a weapon for free", &current_sprite);
		say_stop("`3He is usually stationed east of here. This is my reward", &current_sprite);
		wait(200);
		say_stop("Many thanks, but I want one more thing", 1);
		say_stop("I heard you know a way out of these walls", 1);
		wait(200);
		say_stop("`3Yes, but it is very dangerous outside", &current_sprite);
		wait(200);
		say_stop("I know and I am ready for it", 1);
		wait(200);
		say_stop("`3If you want to get out of here, there is a secret passage near where my vendor is stationed", &current_sprite); 
		say_stop("`3After you get your weapon, go through there.", &current_sprite);
		wait(200);
		say_stop("Thank you, see you", 1);
		say_stop("`3Take care of yourself", &current_sprite);
		&story = 8;
		unfreeze(1);
	}
	if (&story == 4)
	{
		freeze(1);
		say_stop("Hello, I was wondering if - ", 1);
		wait(40);
		say_stop("`3Please help, My daughter has been kidnapped !", &current_sprite);
		say_stop("I will reward you handsomely! Just help me!", 1);
		wait(100);
		choice_start();
		title_start();
		What would you say ?
		title_end();
		"Where did they take her?"
		"I can't help you"
		"Leave"
		choice_end();
		if (&result == 1)
		{
			say_stop("Ok, where did they take her?", 1);
			wait(200);
			say_stop("`3Just north from here! They are in the big house there!", &current_sprite);
			wait(200);
			say_stop("Do not worry, I will be back soon with your daughter", 1);
			unfreeze(1);
			&story = 5;
		}
		if (&result == 2)
		{
			say_stop("I can't help you", 1);
			wait(200);
			say_stop("`3So, Go away!", &current_sprite);
			unfreeze(1);
		}
		unfreeze(1);
	}
	
}
