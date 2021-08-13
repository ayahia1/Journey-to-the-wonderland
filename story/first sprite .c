
void main(void)
{
	freeze(&current_sprite);
}
	void talk(void)
{
	if (&story == 0)
	{
	freeze(1);
	say_stop("Hi, Mom", 1);
	wait(200);
	say_stop("`9Hi, dink", &current_sprite);
	wait(200);
	say_stop("you know how it's been a lifelong dream of mine to cross the walls around this city?", 1);
	wait(200);
	say_stop("`9Yes, and before you say anything, the answer is no. It's too dangerous.", &current_sprite);
	wait(200);
	say_stop("But- ", 1);
	wait(200);
	say_stop("`9No but. Now go do your cho- Oh my God! Ramez the thief is attacking our pigs!", &current_sprite);
	wait(200);
	say_stop("I'll take care of it! and then you'll see how I can handle myself! *after killing Ramez*", 1);
	wait(200);
	&story = 1;
	unfreeze(1);
	unfreeze(&current_sprite);
	
	}
	if (&story == 2)
	{
		freeze(1);
	say_stop("Mom, I killed the thief and saved our farm", 1);
	wait(200);
	say_stop("`9Oh, Thanks dink!", &current_sprite);
	wait(200);
	say_stop("I'm not like I was when I was a kid, Mom", 1);
	say_stop("It's time for me to adventure into the unknown!", 1);
	wait(200);
	say_stop("`9I can see that now, honey.", &current_sprite);
	say_stop("`9You're becoming a man and you have the right to cross the walls", &current_sprite);
	wait(200);
	say_stop("`9I'll miss you", &current_sprite);
	wait(200);
	say_stop("Don't worry ma. Bye!!", 1);
	unfreeze(1);
	unfreeze(&current_sprite);
	&story = 3;
	say_stop("I am heading to the door of the gates", 1);
	}
	}