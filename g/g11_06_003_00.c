BGOpen("sc130",1);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛氷室＊＊｝.
Are you heading home now?");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(6,254,0,0,0,-1,-1,0,0);
VoicePlay("G110600300_06_000");
MsgDisp("Himuro","No, I'm going to the beach today.
There's some good waves coming.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600300_06_010");
MsgDisp("Himuro","......Are you coming too?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(6,0,0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ev006",1);
BGMPlay("BGM_C06_INORI_I");
ChOpen(6,100,2,2,1,0,-1,0,0);
ScrFadeIn(0);
VoicePlay("G110600300_06_020");
MsgDisp("Himuro","Are you going on a school trip soon?");
MsgDisp("主人公","Ah, yeah.
｛氷室＊＊｝ can go next year too?");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110600300_06_030");
MsgDisp("Himuro","I knew that even without you telling me.
Actually, it's not about that——");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600300_06_040");
MsgDisp("Himuro","......I'm just worried you'll cut loose.");
MsgDisp("主人公","I'll be okay.");
ChEye(6,2);
ChMouth(6,1);
ChMotion(6,1);
VoicePlay("G110600300_06_050");
MsgDisp("Himuro","Even if you're fine, your other classmates
won't be understand not to.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("G110600300_06_060");
MsgDisp("Himuro","Don't get caught up in it and don't ened
up having to stand in the hallway.");
MsgDisp("主人公","Yeees.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChCheek(6,10);
VoicePlay("G110600300_06_070");
MsgDisp("Himuro","......And, if you feel like it, contact
me.");
MsgDisp("主人公","Eh?
Contact you......");
ChEye(6,2);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("G110600300_06_080");
MsgDisp("Himuro","I mean to contact me by email or by phone.
I'm guessing there'll be lots of things
for you to talk about.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("G110600300_06_090");
MsgDisp("Himuro","......Well, I won't force you to.
Just do it if you feel like it.");
MsgDisp("主人公","Yes, I got it!");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("G110600300_06_100");
MsgDisp("Himuro","......Let's turn off silent mode.");
MsgDisp("主人公","(Already???)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
