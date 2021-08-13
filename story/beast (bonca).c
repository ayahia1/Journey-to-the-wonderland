
void main( void )
{
	if (&story > 10)
	{
	screenlock(1);
int &mcounter;
sp_brain(&current_sprite, 9);

if (&story == 14)
{

sp_speed(&current_sprite, 3);
}
else
{
sp_speed(&current_sprite, 2);
}

sp_nohit(&current_sprite, 0);
sp_distance(&current_sprite, 50);
sp_timing(&current_sprite, 0);
sp_exp(&current_sprite, 5);
sp_base_walk(&current_sprite, 610);
sp_base_death(&current_sprite, 550);
sp_base_attack(&current_sprite, 620);
sp_defense(&current_sprite, 10);
sp_strength(&current_sprite, 4);
if (&story == 14)
{
sp_touch_damage(&current_sprite, 10);
}
else
{
sp_touch_damage(&current_sprite, 8);
}
sp_hitpoints(&current_sprite, 1);
sp_target(&current_sprite, 1):
preload_seq(611);
preload_seq(613);
preload_seq(617);
preload_seq(619);
preload_seq(621);
preload_seq(623);
preload_seq(627);
preload_seq(629);
preload_seq(542);
preload_seq(544);
preload_seq(546);
preload_seq(548);
}
else 
	{
		sp_active(&current_sprite, 0);
	}
}

void attack( void )
{
playsound(31, 22050,0,&current_sprite, 0);
&mcounter = random(4000,0);
sp_attack_wait(&current_sprite, &mcounter);
}

void hit( void )
{
playsound(29, 22050,0,&current_sprite, 0);

sp_target(&current_sprite, &enemy_sprite);
}


void die(void)
{

&defense += 1;
&story += 1;
&save_x = sp_x(&npcf, -1);
&save_y = sp_y(&npcf, -1);
sp_active(&npcf, 0);

int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
    {
     editor_type(&hold, 1); 
    }
	if (&story == 12)
	{
screenlock(0);
	}
	if (&story == 14)
	{
		screenlock(0);
	}
	if (&story == 15)
	{
screenlock(0);
	}
unfreeze(1);
}