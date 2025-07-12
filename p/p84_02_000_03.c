ScrFadeIn(0);
VoicePlay("P840200003_48_000");
MsgDisp("School Girl","It's almost time to start cleaning
up, so please give us more trash bags.");
MsgDisp("主人公","Sure!
Ah wait, there's only a few left......");
MsgClose();
SEPlay("EV_SE_DOOR_019");
SEWait();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(2,254,0,0,0,#1,#1,0,0);
VoicePlay("P840200003_02_000");
MsgDisp("Sassa","Excuse me!
Could you please provide some trash bags
for my class?");
MsgDisp("主人公","Ah, ｛颯砂＊＊｝......
What should I do? There aren't
anymore trash bags left......");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("P840200003_02_010");
MsgDisp("Sassa","Seriously∋");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("P840200003_02_020");
MsgDisp("Sassa","ＯＫ.
I'll go and buy some then.");
MsgDisp("主人公","Eh, is that really okay...?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("P840200003_02_030");
MsgDisp("Sassa","Of course it's okay.
The job of the student council
is to help the students, right?");
MsgClose();
ChClose(2);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgDisp("主人公","(Sigh... I should have checked the stock
beforehand. I caused trouble for
｛颯砂＊＊｝...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
