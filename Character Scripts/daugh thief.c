void main(void)
{
	if (&story > 5)
	{
		sp_active(&current_sprite, 0);
	}
if (&story == 5)
{
 wait(4500);
 screenlock(1);
 preload_seq(411);
 preload_seq(413);
 preload_seq(417);
 preload_seq(419);
 

 sp_hitpoints(&current_sprite, 1);
 sp_base_walk(&current_sprite, 410);
 sp_speed(&current_sprite, 5);
 sp_brain(&current_sprite, 9);
 sp_touch_damage(&current_sprite, 3);
 sp_target(&current_sprite, 1):
 sp_defense(&current_sprite, 5);
}
}

void hit(void)
{
 sp_target(&current_sprite, 1):
}

void die(void)
{
int &npcf = &current_sprite;
sp_brain(&npcf, 0);
sp_touch_damage(&npcf, 0);
sp_seq(&npcf, 415);
sp_frame(&npcf, 1);
sp_que(&npcf, -500);
script_attach(0);
freeze(1);
wait(10);
&save_x = sp_x(&npcf, -1);
&save_y = sp_y(&npcf, -1);
int &hold = create_sprite(&save_x, &save_y, 0, 415, 1);
sp_que(&hold, -500);
sp_active(&npcf, 0);

&hold = sp_editor_num(&npcf);
if (&hold != 1)
{
 editor_type(&hold, 1);
}

&story = 6;

unfreeze(1);
}