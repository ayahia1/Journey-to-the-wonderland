void main( void )
{
sp_seq(&current_sprite, 449);
sp_sound(&current_sprite, 34);
sp_brain(&current_sprite, 6);
sp_hitpoints(&current_sprite, 0);
}

void hit( void )
{
 say("What a waste of energy!! The machine doesn't die", 1);
}

void talk( void )
{
Playsound(18,22050,0,0,0);

       freeze(1);
        choice_start();
        "Save your game"
        "Leave the machine"
        choice_end();
         unfreeze(1);

        if (&result == 2)
        {
         unfreeze(1);
         return;
        }
        choice_start();
        "&savegameinfo"
        "&savegameinfo"
        "&savegameinfo"
        "&savegameinfo" 
        "&savegameinfo" 
         "Nevermind"
        choice_end();

  unfreeze(1);

  if (&result < 11)
 {
  save_game(&result);
  say_xy("`%Game saved", 1, 30);
  }

}
