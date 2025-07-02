BGOpen("ho000",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
ChOpen(2,255,3,0,3,-1,-1,0,0);
VoiceEVSPlay(2);
VoicePlay("H5G0200000_02_000");
MsgDisp("Sassa","｛主人公｝,
congrats!");
MsgDisp("主人公","｛颯砂＊＊｝?
What is it?");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("H5G0200000_02_010");
MsgDisp("Sassa","I heard.
The brass band won the gold award.
Congrats on the gold medal!");
MsgDisp("主人公","Thanks.
Though, it's not a medal.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("H5G0200000_02_020");
MsgDisp("Sassa","Why not? If you place first, you get
a gold medal. I wanted to put it around
your neck.");
MsgDisp("主人公","Hehe, okay.
｛颯砂＊＊｝, thanks.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("H5G0200000_02_030");
MsgDisp("Sassa","To be honest, I really liked to
train while listening to the sounds of
your practices.");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,3);
ChEyeOpenLevel(2,0);
VoicePlay("H5G0200000_02_040");
MsgDisp("Sassa","Let me thank you again.
Thanks!　See you.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(2);
SEWait();
MsgDisp("主人公","Thank you, ｛颯砂＊＊｝.");
MsgDisp("主人公","(That makes me happy......
I'm glad I practiced so hard
for brass band!)");
MsgClose();
ScrFadeOut(0,0);
