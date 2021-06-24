//pillbug brain

void main( void )
{
sp_brain(&current_sprite, 9);
sp_speed(&current_sprite, 1);
sp_exp(&current_sprite, 5);
sp_base_walk(&current_sprite, 130);
sp_base_death(&current_sprite, 140);
sp_touch_damage(&current_sprite, 1);
sp_hitpoints(&current_sprite, 8);
preload_seq(131);
preload_seq(133);
preload_seq(141);
preload_seq(143);

if (random(2,1) == 1)
 {
 sp_target(&current_sprite, 1);
 }
}


void hit( void )
{
sp_target(&current_sprite, &enemy_sprite);
playsound(30, 21050, 4000, &current_sprite, 0);
//lock on to the guy who just hit us
//playsound
}
void die( void )
{
  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  editor_type(&hold, 6); 

&save_x = sp_x(&current_sprite, -1);
&save_y = sp_y(&current_sprite, -1);

 external("emake","small");

}



if (&story == 2)
	{
		freeze(1);
		say_stop("Oh thank you Dink! What would I have done without you?", &current_sprite);
		wait(100);
		say_stop("I'm not like I was when I was a kid, Mom.", 1);
		wait(100);
		say_stop("It's time for me to adventure into the unknown!", 1);
		wait(100);
		say_stop("Nothing can stop human curiosity. Go", &current_sprite);
		wait(100);
		say_stop("I will miss you", &current_sprite);
		wait(100);
		say_stop("I will be back before you do", 1);
		wait(100);
		unfreeze(&current_sprite);
		unfreeze(1);
		wait(300);
		say_stop("I am heading east north to the gate", 1);
		&story = 3;
		unfreeze(1);
	    unfreeze(&current_sprite);
	}