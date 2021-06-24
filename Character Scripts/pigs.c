void main(void)
{
	sp_exp(&current_sprite, 0);
	sp_hitpoints(&current_sprite, 1);
	sp_defense(&current_sprite, 0);
	preload_seq(131); 
	preload_seq(133);
}

void hit(void)
{
playsound(13, 8000,0,0,0);	
}


