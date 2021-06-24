void main(void)

{

      sp_touch_damage(&current_sprite, -1);

}
void touch(void)

{


      sp_touch_damage(&current_sprite, 0);
	  
	  &story = 0;

      freeze(1);

      script_attach(1000);

      wait(500);

      fade_down();

      &player_map = 400;

      sp_x(1, 320);

      sp_y(1, 200);

      sp_dir(1, 2);

      load_screen();

      draw_screen();

      draw_status();

      fade_up();

      kill_this_task();

}



