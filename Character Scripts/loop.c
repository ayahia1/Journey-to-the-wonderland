

void main(void)
{
      sp_nodraw(&current_sprite,1);
      screenlock(1);
loop:
      wait(200);
      if (get_sprite_with_this_brain(9, 0) == 0)
      {
            if (get_sprite_with_this_brain(10, 0) == 0)

            {
                  screenlock(0);
                  playsound(43, 22050,0,0,0);
                  kill_this_task();
            }
      }
      goto loop;
}



