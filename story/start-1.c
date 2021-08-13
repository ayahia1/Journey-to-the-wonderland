//for start button

void main( void )
{
    int &crap;
}

void buttonon( void )
{
    sp_pframe(&current_sprite, 2);
    Playsound(20,22050,0,0,0);
}

void buttonoff( void )
{
    sp_pframe(&current_sprite, 1);
    Playsound(21,22050,0,0,0);
}

void click ( void )
{
    //lets start a new game
    Say_xy("`%Please wait. (Creating new game)", 0, 394);
    wait(1);

    //This is where you would change the room Dink starts in!!
    &player_map = 400;

    //This is where you would change the location Dink is going to show up
    //on this first screen...
    sp_x(1, 180);
    sp_y(1, 250);

    //Change dink from a mouse pointer into a human being. :)
    sp_base_walk(1, 70);
    sp_base_attack(1, 100);
    set_mode(2); //turn game on
    reset_timer();
    sp_dir(1, 8);
    sp_brain(1, 1);
    sp_que(1, 0);
    sp_noclip(1, 0);

    //Now, if you WANTED, you could set Dink's orininal variables so he
    //could start out with a little money & power if you want... Simply
    //comment out these lines if you want Dink to have nothing as far as
    //stats go when the game begins. Also, Dink starts with 10 LifeMax
    //(hit points).

    &strength = 3;
    &defense = 2;
    &magic = 1;
    &gold = 25;
    //&lifemax = 20;
    //&life = &lifemax;
    //&level = 2;

    //lets give him fists to start out with, and arm him with the fists.
    add_item("item-fst",438, 1);
    &cur_weapon = 1;
    arm_weapon();

    //Clear the screen black in preparation for the first room of the game.
    fill_screen(0);

    //This turns on the "status bar" for the beginning of the game. If you
    //want to have an "intro", simply comment out the next two lines, then
    //do them both after your intro is over...

    &update_status = 1;
    draw_status();

    //We're done, so let's kill this task & the game will begin!
    kill_this_task();
}
