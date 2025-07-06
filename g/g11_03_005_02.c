BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("G110300502_03_000");
MsgDisp("Honda?","｛主人公｝.");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(3,254,0,0,0,-1,-1,0,0);
ChOpen(3,254,0,0,0,-1,-1,0,0);
MsgDisp("主人公","Ah, ｛本多＊＊｝.
Are you heading home now?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4,1);
VoicePlay("G110300502_03_010");
MsgDisp("Honda","No, I'm heading to work. I got a phone
call from the manager asking me to come
in. See you later!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE",0,0.5);
ChClose(3);
MsgDisp("主人公","(......Should I go the the store as a
customer?)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE",0,0.6);
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGMPlay("BGM_C03_HONDA_A");
BGOpen("ev003",0);
ChOpen(3,100,0,1,1,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("G110300502_03_020");
MsgDisp("Honda","Huh-?
What's up?");
MsgDisp("主人公","Good work.
I came to see how ｛本多＊＊｝ is doing.");
VoicePlay("G110300502_03_030");
MsgDisp("Honda","Really?
I'm happy.
A lot of people came in today.");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110300502_03_040");
MsgDisp("Honda","Oh, you know, the other day how I went to
the beach with the kids and caught a flat
crab, right?");
MsgDisp("主人公","Yeah. 
It's tasty in miso soup, right?");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300502_03_050");
MsgDisp("Honda","Beep beep!");
ChEye(3,0);
ChMouth(3,1);
ChMotion(3,0);
VoicePlay("G110300502_03_060");
MsgDisp("Honda","Those kids brought an aquarium.
They're keeping it as a pet now.");
MsgDisp("主人公","You're all good friends now, aren't you?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,2);
VoicePlay("G110300502_03_070");
MsgDisp("Honda","Yeah, 
but keep the aquarium thing secret 
from the manager, okay?");
MsgDisp("主人公","(Hehe, it seems like it's tough being
popular?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
