
void main( )
{
        sp_seq(&current_sprite, 54);
        sp_frame(&current_sprite, 1); //so the seq will start
        sp_brain(&current_sprite, 6);
        sp_touch_damage(&current_sprite, -1);
        sp_nohit(&current_sprite, 1);
}

void touch( void )
{
&life += 3;
if (&life > &lifemax)
 {
 &life = &lifemax;
 }
Playsound(10,22050,0,0,0);
sp_brain_parm(&current_sprite, 10);
sp_brain(&current_sprite, 12);
sp_touch_damage(&current_sprite, 0);
sp_timing(&current_sprite, 0);

  //kill this item so it doesn't show up again for this player
  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  editor_type(&hold, 1); 


}



