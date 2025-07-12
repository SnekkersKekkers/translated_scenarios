MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(2,0,0);
BGOpen("tr320",1);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B360222101_02_000");
MsgDisp("Sassa","Phewー...
Somehow we managed to make it 
in time for the sunset.");
MsgDisp("主人公","Haa... yeah.");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(2,255,4,0,0,#1,#1,0,0);
VoicePlay("B360222101_02_010");
MsgDisp("Sassa","Ah, I ended up making you run. 
Are you alright?");
MsgDisp("主人公","I'm fine.
｛颯砂＊＊｝, thank you for inviting me.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B360222101_02_020");
MsgDisp("Sassa","I thank you too.
I was able to see you dyed 
in the red of the sunset.");
MsgDisp("主人公","Ehh? I was red?
It's somewhat embarasssing...");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("B360222101_02_030");
MsgDisp("Sassa","Why? 
I thought it was cute.");
ChClose(2,0,30);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChLayout(0);
MsgClose();
ChOpen(2,255,4,0,4,#1,#1,10,0);
VoicePlay("B360222101_02_040");
MsgDisp("Sassa","Hey, your cheeks are red...");
MsgDisp("主人公","(It seems like ｛颯砂＊＊｝'s face
is getting red too...?)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
ChCheek(2,0);
