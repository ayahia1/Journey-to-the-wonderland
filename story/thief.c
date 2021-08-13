void main(void)
{
 if (&story == 1)
 {
  freeze(1);
  freeze(&current_sprite);
  
  wait(0);
  
  external("farmer", "move");
  
  wait(500);
  
  say_stop("What are you doing man ?!", 1);
  wait(200);
  say_stop("`6I am going to kill thse pigs and steal their meat.", &current_sprite);
  wait(200);
  say_stop("I am going to stop you. These are my pigs.", 1);
  wait(200);
  say_stop("`6You can't stop me, kid! Leave or die", &current_sprite);
  wait(200);
  say_stop("I will fight you", 1);
  wait(200);
  say_stop("`6Fine, prepare to your death", &current_sprite);
 
  unfreeze(&current_sprite);
  unfreeze(1);
  int &hold = &current_sprite;
  script_attach(0);
  sp_script(&hold, "Thief attached");
  &story = 2;
  kill_this_task();
 }
 else 
 {
	 sp_active(&current_sprite, 0);
 }
}