BGMPlay("BGM_PLACE_TRAVEL");
BGOpen("sc820",0);
ChLayout(1);
MsgClose();
ChOpen(21,254,4,4,0,-1,-1,0,1);
ChOpen(22,254,0,0,3,-1,-1,0,2);
ScrFadeIn(0);
VoicePlay("Q070D00000_21_000");
MsgDisp("Michiru","It has a outlandic aesthetic, so pretty.");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("Q070D00000_22_000");
MsgDisp("Hikaru","Such a huge windmill～!
I can't believe it spins by the wind......");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("Q070D00000_22_010");
MsgDisp("Hikaru","Wait, I have an idea!
Let's take a photo with the windmill♪");
MsgDisp("主人公","Great idea!");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("Q070D00000_22_020");
MsgDisp("Hikaru","Yay▼
Scooch together.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO",0,0.6);
ChClose(21,0,30);
ChClose(22,0,30);
SEWait();
SEPlay("EV_SE_045");
MsgDisp("","(Flash)");
MsgClose();
ChOpen(21,254,0,0,0,-1,-1,0,1);
ChOpen(22,254,0,0,3,-1,-1,0,2);
ScrFadeIn(0);
VoicePlay("Q070D00000_21_010");
MsgDisp("Michiru","......How is it?
Did it come out okay?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
ChEyeOpenLevel(22,0);
VoicePlay("Q070D00000_22_030");
MsgDisp("Hikaru","Ahaha!
Both of you blinked!");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,5);
ChCheek(21,10);
VoicePlay("Q070D00000_21_020");
MsgDisp("Michiru","Oh no...... Take it again, please!");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("Q070D00000_22_040");
MsgDisp("Hikaru","But it's so funny. Even Hikaru would ask
for another take though♪");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("Q070D00000_21_030");
MsgDisp("Michiru","C'mon, let's take one more.
It has to be memorable, okay?");
MsgDisp("主人公","Hehe, sure!");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc821",0);
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0);
ChEyeOpenLevel(22,10);
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
ChCheek(21,0);
ScrFadeIn(0);
VoicePlay("Q070D00000_22_050");
MsgDisp("Hikaru","So tall!");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("Q070D00000_21_040");
MsgDisp("Michiru","It seems it was modeled after a tall tower
overseas. It was originally a church's
bell.");
MsgDisp("主人公","Huh, wow......!");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("Q070D00000_21_050");
MsgDisp("Michiru","I love how it looks.
I hope I can get to see the real one
one day.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("Q070D00000_22_060");
MsgDisp("Hikaru","Right!
Let's go to see the real one one day!");
MsgDisp("主人公","Nice idea!");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("Q070D00000_21_060");
MsgDisp("Michiru","How about as graduation trip?");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("Q070D00000_22_070");
MsgDisp("Hikaru","Great idea▼
Let's go together Mari, let's go!");
MsgDisp("主人公","Hehe, well I guess we have to save up.");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("Q070D00000_21_070");
MsgDisp("Michiru","Hehe.");
MsgClose();
ScrFadeOut(0);
MsgDisp("主人公","(After this, we're going to 
Nagasaki city. Huis ten Bosch was
so much fun and pretty......!)");
BGMStop(2);
Wait(60,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc823",0);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,0);
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
BGMPlay("BGM_C23_HIKARU_MICHIRU",0.01,0.9);
ScrFadeIn(0);
VoicePlay("Q070D00000_21_080");
MsgDisp("Michiru","Because it's old, It has a certain
nobleness.");
ChEye(22,0);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("Q070D00000_22_080");
MsgDisp("Hikaru","It's as if we're traveling through time.
Retro...?");
MsgDisp("主人公","Yeah, retro!");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,2);
VoicePlay("Q070D00000_21_090");
MsgDisp("Michiru","Now I remember......");
MsgDisp("主人公","What did you figure out?");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("Q070D00000_21_100");
MsgDisp("Michiru","The cobblestone contains a heart-shaped
stone. It's said that if you're able
to find it, your love will come true.");
ChSet(21,0);
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("Q070D00000_22_090");
MsgDisp("Hikaru","Yepyep. Apparently love will find you if
you touch it, so let's search together♪");
MsgDisp("主人公","Huh, ｛みちる＊｝, ｛ひかる＊｝, do you two
have a crush?");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("Q070D00000_22_100");
MsgDisp("Hikaru","Non non!
I'm doing it for you▼");
MsgDisp("主人公","Eh......");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("Q070D00000_22_110");
MsgDisp("Hikaru","On to the search!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(22);
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("Q070D00000_21_110");
MsgDisp("Michiru","I'll help, of course.
Leave this side to me!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(21);
MsgDisp("主人公","(It turned into a search for the
heart...... That's fun too, though!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
