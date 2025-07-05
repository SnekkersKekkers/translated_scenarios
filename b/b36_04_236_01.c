MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("tr470",2);
BGMPlay("BGM_PLACE_AMUSE_NIGHT",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
ScrFadeIn(0);
MsgDisp("主人公","It's a good thing we made it in
time for the night parade, isn't it?");
VoicePlay("B360423601_04_000");
MsgDisp("Nanatsumori","Yeah, we made it just 
in the nick of time.");
MsgDisp("主人公","Hehe!
It's pretty.");
ChMotion(4,0,1);
VoicePlay("B360423601_04_010");
MsgDisp("Nanatsumori","Yeah.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("B360423601_04_020");
MsgDisp("Nanatsumori","I feel bad for those guys but...
I wanted to come here no matter 
what today.");
MsgDisp("主人公","It would have been good if we
could've come with everyone though?");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("B360423601_04_030");
MsgDisp("Nanatsumori","No.
I wanted to come with you.");
MsgDisp("主人公","I-I see.");
ChMotion(4,1,1);
VoicePlay("B360423601_04_040");
MsgDisp("Nanatsumori","It's not that I don't want
them there or anything.");
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B360423601_04_050");
MsgDisp("Nanatsumori","It's just that I wanted to make
some beautiful memories just between you
and me during this summer vacation.");
MsgDisp("主人公","I see...");
ChEye(4,0);
ChMotion(4,1,1);
VoicePlay("B360423601_04_060");
MsgDisp("Nanatsumori","With this, I can be satisfied.
what about you?");
MsgDisp("主人公","I think we made 
some good memories?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B360423601_04_070");
MsgDisp("Nanatsumori","There's no need for 
the question mark.");
ChEye(4,0);
VoicePlay("B360423601_04_080");
MsgDisp("Nanatsumori","I think we both made
some good memories.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(4);
MsgDisp("主人公","(｛七ツ森＊｝……)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChNanaType(0);
ChOpen(4,255,7,0,0,-1,-1,0,0);
