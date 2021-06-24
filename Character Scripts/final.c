void main(void)
{

		wait(600);
		freeze(1);
		choice_start();
		title_start();
		Congratulations, You have reached the end of the wonderlands
		title_end();
		"Restart game"
		"Leave"
		choice_end();
		if (&result == 1)
		{
			&story = 1;
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
		
		if (&result == 2)
		{
			say_stop ("We have made it. You are now free to quit the game", 1); 
		}
}


