BGMStop();
ChLayout(1);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I finished just in time but, 
it's finally the runway...I'm nervous..)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(31,254,3,0,0,-1,-1,0,0);
VoicePlay("P733100000_31_000");
MsgDisp("Goro","The backstage of a fashion show is a
battlefield!");
MsgDisp("主人公","Ah, ＧＯＲＯ-sensei!
You came to watch?");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,2);
VoicePlay("P733100000_31_010");
MsgDisp("Goro","I had intended to watch obediently, but
this gets my blood pumping～.");
SEPlay("EV_SE_038");
SEWait();
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("P733100000_31_020");
MsgDisp("Goro","That is your cue to battle.
Please go forth!");
MsgDisp("主人公","(Yes!
Alright, let's believe in ourselves!)");
MsgClose();
ScrFadeOut(0);
ChClose(31,0,0);
BGOpen("sc725",0);
ScrFadeIn(0);
