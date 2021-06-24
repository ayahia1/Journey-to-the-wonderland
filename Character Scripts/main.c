//main.c run when dink is started

void main()
{

//let's initialize all our globals first.........
// These globals are REQUIRED by dink.exe (it directly uses them)

  make_global_int("&exp",0);
  make_global_int("&strength", 1);
  make_global_int("&defense", 0);
  make_global_int("&cur_weapon", 0);
  make_global_int("&cur_magic", 0);
  make_global_int("&gold", 0);
  make_global_int("&magic", 0);
  make_global_int("&magic_level", 0);
  make_global_int("&vision", 0);
  make_global_int("&result", 0);
  make_global_int("&speed", 1);
  make_global_int("&timing", 0);
  make_global_int("&lifemax", 10); 
  make_global_int("&life", 10);
  make_global_int("&level", 1);
  make_global_int("&player_map", 0);
  make_global_int("&last_text", 0);
  make_global_int("&update_status", 0);
  make_global_int("&missile_target", 0);
  make_global_int("&missle_source", 0);
  make_global_int("&enemy_sprite", 0);
  make_global_int("&magic_cost", 0);
  make_global_int("&save_x", 0);
  make_global_int("&save_y", 0);
  make_global_int("&dinklogo", 0);

// Add your own globals here. Remember, you only get about 200 of them
// total, so be sure you don't go overboard.
  
  make_global_int("&story", 0);

//Now we're done... Dink knows to run START.C automatically next....

    debug("Dink started. Time to <Your Dmod Name Goes Here>");
    kill_this_task();
}
