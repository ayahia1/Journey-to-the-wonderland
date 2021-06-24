//this is run when dink is loaded, directly after the dink.ini file
//is processed.

void main( void )
{
 debug("Loading sounds..");
 load_sound("QUACK.WAV", 1);
 load_sound("PIG1.WAV", 2);
 load_sound("PIG2.WAV", 3);
 load_sound("PIG3.WAV", 4);
 load_sound("PIG4.WAV", 5);
 load_sound("BURN.WAV", 6);
 load_sound("OPEN.WAV", 7);
 load_sound("SWING.WAV", 8);
 load_sound("PUNCH.WAV", 9);
 load_sound("SWORD2.WAV", 10);
 load_sound("SELECT.WAV", 11);
 load_sound("ENTER.WAV", 12);
 load_sound("PICKER.WAV", 13);
 load_sound("GOLD.WAV", 14);
 load_sound("GRUNT1.WAV", 15);
 load_sound("GRUNT2.WAV", 16);
 load_sound("SEL1.WAV", 17);
 load_sound("ESCAPE.WAV", 18);
 load_sound("NONO.WAV", 19);
 load_sound("SEL2.WAV", 20);
 load_sound("SEL3.WAV", 21);
 load_sound("HIGH2.WAV", 22);
 load_sound("FIRE.WAV", 23);
 load_sound("SPELL1.WAV", 24);
 load_sound("CAVEENT.WAV", 25);
 load_sound("SNARL1.WAV", 26);
 load_sound("SNARL2.WAV", 27);
 load_sound("SNARL3.WAV", 28);
 load_sound("HURT1.WAV", 29);
 load_sound("HURT2.WAV", 30);
 load_sound("ATTACK1.WAV", 31);
 load_sound("CAVEENT.WAV", 32);
 load_sound("LEVEL.WAV", 33);
 load_sound("SAVE.WAV", 34);
 load_sound("SPLASH.WAV", 35);
 load_sound("SWORD1.WAV", 36);
 load_sound("BHIT.WAV", 37);
 load_sound("SQUISH.WAV", 38);
 load_sound("STAIRS.WAV", 39);
 load_sound("STEPS.WAV", 40);
 load_sound("ARROW.WAV", 41);
 load_sound("FLYBY.WAV", 42);
 load_sound("SECRET.WAV", 43);
 load_sound("BOW1.WAV", 44);
 load_sound("KNOCK.WAV", 45);
 load_sound("DRAG1.WAV", 46);
 load_sound("DRAG2.WAV", 47);
 load_sound("AXE.WAV", 48);
 load_sound("BIRD1.WAV", 49);

//Playsound(36,22050,0,0,0);

int &crap;

//fill 255 fills the screen white... I use a full-sized BMP so it covers up
//The whole screen & doesn't really matter. You could use 0 to fill it with
//black if you weren't using a full-sized BMP for title-01.bmp.

fill_screen(255);

//Make sure the screen isn't locked now. Kinda fixes a bug where if you die
//when the screen is locked, the "screenlock" bars remain on the title.

screenlock(0);

//Get the "sprite #1" (which is actually Dink) set to be a mouse pointer

sp_seq(1, 0);
sp_brain(1, 13);
sp_pseq(1,10);
sp_pframe(1,8);
sp_que(1,20000);
sp_noclip(1, 1);

//This is where we create the TITLE SCREEN. This line is ok if you're using
//a 640 x 480 full-sized bitmap as the title (as I do, usually). If you
//don't, be sure to change this line to fit.

&dinklogo = create_sprite(426,344, 0, 453, 1);
sp_que(&dinklogo, -800);
sp_noclip(&dinklogo, 1);

//Create the START button....

&crap = create_sprite(76, 434, 14, 194, 1);
sp_script(&crap, "start-1");
sp_noclip(&crap, 1);
sp_touch_damage(&crap, -1);

//Create the CONTINUE button....

&crap = create_sprite(314, 434, 14, 195, 1);
sp_script(&crap, "start-2");
sp_noclip(&crap, 1);
sp_touch_damage(&crap, -1);

//Create the QUIT button....

&crap = create_sprite(560, 434, 14, 193, 1);
sp_noclip(&crap, 1);
sp_script(&crap, "start-4");
sp_touch_damage(&crap, -1); 

stopcd();

//If you're going to play a title midi, uncomment & change the following:
//playmidi("your-own.mid");

kill_this_task();
}
