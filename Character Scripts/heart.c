void main(void)
{
        sp_seq(&current_sprite, 52);
        sp_frame(&current_sprite, 1); 
        sp_brain(&current_sprite, 6);
        sp_touch_damage(&current_sprite, -1);
        sp_nohit(&current_sprite, 1);
}

void touch(void)
{
sp_touch_damage(&current_sprite, 0);
&life = &lifemax;
Playsound(10,22050,0,0,0);
sp_brain_parm(&current_sprite, 5);
sp_brain(&current_sprite, 12);
sp_timing(&current_sprite, 0);

  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
    {
     editor_type(&hold, 1); 
    }



}
