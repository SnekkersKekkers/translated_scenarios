MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf110",1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChLayout(1);
ChNanaType(0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ScrFadeIn(0);
MsgDisp("主人公","Hmm, I can see so far into the distance...
It feels good!");
ChMotion(4,1,1);
VoicePlay("B360401100_04_000");
MsgDisp("Nanatsumori","Right.
Ah, you can see Haba High.");
MsgDisp("主人公","Eh, where?");
ChMotion(4,0,1);
VoicePlay("B360401100_04_010");
MsgDisp("Nanatsumori","There/
Hey, come closer this way.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChClose(4,0,30);
ChLayout(0);
ChNanaType(0);
ChOpen(4,255,0,0,3,#1,#1,0,0,0,60);
VoicePlay("B360401100_04_020");
MsgDisp("Nanatsumori","Follow where my finger is pointing.
From that red-roofed house, up the hill
road...");
MsgDisp("主人公","Yeah.");
VoicePlay("B360401100_04_030");
MsgDisp("Nanatsumori","After that forest...");
ChEye(4,5);
ChMouth(4,4);
ChMotion(4,5,1);
ChCheek(4,8);
MsgDisp("主人公","Ah!");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("B360401100_04_040");
MsgDisp("Nanatsumori","Ah...sorry.
I got too close.");
MsgDisp("主人公","N-No.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
MsgClose();
ChClose(4,0,30);
ChLayout(1);
ChNanaType(0);
ChOpen(4,255,0,4,4,#1,#1,0,0,0,60);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("B360401100_04_050");
MsgDisp("Nanatsumori","When it's suddenly just the two of us,
it's hard to keep a distance, isn't it?");
MsgDisp("主人公","Ah...hehe!");
ChMotion(4,0,1);
VoicePlay("B360401100_04_060");
MsgDisp("Nanatsumori","Well, I wonder what we'll find next
timeー.");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ChCheek(4,0);
