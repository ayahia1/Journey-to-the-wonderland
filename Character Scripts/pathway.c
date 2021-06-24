void main( void )
{
	if (&story == 9)
	{	
sp_brain(&current_sprite, 9);
sp_speed(&current_sprite, 3);
sp_exp(&current_sprite, 5);
sp_base_walk(&current_sprite, 130);
sp_base_death(&current_sprite, 140);
sp_touch_damage(&current_sprite, 3);
sp_hitpoints(&current_sprite, 10);
preload_seq(131);
preload_seq(133);
preload_seq(141);
preload_seq(143);

if (random(2,1) == 1)
 {
 sp_target(&current_sprite, 1);
 }
	}
	else 
	{
		sp_active(&current_sprite, 0);
	}
}


void hit( void )
{
sp_target(&current_sprite, &enemy_sprite);
playsound(30, 21050, 4000, &current_sprite, 0);

}
void die( void )
{
  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  &story = 10;
  editor_type(&hold, 6); 
  &speed += 1;


&save_x = sp_x(&current_sprite, -1);
&save_y = sp_y(&current_sprite, -1);

 external("emake","small");

}