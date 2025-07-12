BGOpen("sc824",0);
BGMPlay("BGM_PLACE_TRAVEL");
MsgClose();
ChOpen(3,254,2,0,4,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("Q100300001_03_000");
MsgDisp("Honda","Hmm, what should I do.");
MsgDisp("主人公","Is it the souvenirs......?");
ChMotion(3,0,1);
VoicePlay("Q100300001_03_010");
MsgDisp("Honda","Yeah it is,
My little sister told me to \"Buy me a 
cute one\".");
MsgDisp("主人公","Your little sister really is funny.");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("Q100300001_03_020");
MsgDisp("Honda","Eeeh?　She isn't at all. When I
make a mistake, she says stuff like
\"You have bad taste\" all the time.");
MsgDisp("主人公","Yeah, she really is funny.");
ChEye(3,0);
ChMotion(3,0,1);
VoicePlay("Q100300001_03_030");
MsgDisp("Honda","How come-?
Even you're enjoying it.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
VoicePlay("Q100300001_03_040");
MsgDisp("Honda","Ah, look!
That castella mascot,
Isn't it cute?");
MsgDisp("主人公","Eh?");
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(3);
SEWait();
VoicePlay("Q100300001_03_050");
MsgDisp("Honda","
Mhmhm, it's well made. There's some 
coarse grains at the bottom,
And it's mouth-watering.");
VoicePlay("Q100300001_03_060");
MsgDisp("Honda","Wait a bit!
I'm gonna buy a keyholder of this 
mascot.");
MsgDisp("主人公","(Is he gonna be ok......?)");
MsgClose();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
ChOpen(3,254,0,0,3,#1,#1,0,0);
VoicePlay("Q100300001_03_070");
MsgDisp("Honda","Sorry to keep you waiting.
The main problem has now been cleared 
up.");
MsgDisp("主人公","Yeah, I hope your sister is happy with
it.");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("Q100300001_03_080");
MsgDisp("Honda","I hope so.
Now let's look around the shops you're 
interested in.");
MsgDisp("主人公","Yeah, where should we go......");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
