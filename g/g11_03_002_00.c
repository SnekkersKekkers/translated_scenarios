BGOpen("sc130",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Alright, I'll do my best on the next test
too! Maybe I'll buy a reference book and
head home.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
MsgClose();
BGOpen("ar600",0);
BGMPlay("BGM_C03_HONDA_A");
ChOpen(3,35,1,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("G110300200_03_000");
MsgDisp("Honda","｛主人公｝, welcome.");
MsgDisp("主人公","Ah, ｛本多＊＊｝. You had a shift today,
huh?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("G110300200_03_010");
MsgDisp("Honda","Yep yep, Are you here......
to buy a reference book?");
MsgDisp("主人公","Yeah, you guessed it.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("G110300200_03_020");
MsgDisp("Honda","In that case, I have a recommendation for
you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgClose();
ScrFadeOut(0);
ChClose(3,0,0);
SEWait();
BGOpen("ev003",0);
ChOpen(3,100,1,0,1,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("G110300200_03_030");
MsgDisp("Honda","This one.
It has really interesting explanations.");
MsgDisp("主人公","Hee, thank you.
If it's ｛本多＊＊｝'s recommendation, it
must be good right?");
ChEye(3,2);
ChMouth(3,1);
ChMotion(3,2);
VoicePlay("G110300200_03_040");
MsgDisp("Honda","I wonder about that......?");
MsgDisp("主人公","Eh?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("G110300200_03_050");
MsgDisp("Honda","After all, I lost to you in the
end-of-term test last time......");
ChEye(3,1);
ChMouth(3,1);
ChMotion(3,1);
VoicePlay("G110300200_03_060");
MsgDisp("Honda","This might be a tactic to throw you off?");
MsgDisp("主人公","Ehhhh∋");
MsgDisp("主人公","(But I'm kind of happy that ｛本多＊＊｝
sees me as a rival?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
