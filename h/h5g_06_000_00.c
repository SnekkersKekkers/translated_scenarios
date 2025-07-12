BGOpen("ho000",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(6,255,0,0,0,#1,#1,0,0);
VoicePlay("H6G0600000_06_000");
MsgDisp("Himuro","......Hello.");
MsgDisp("主人公","Hm, ｛氷室＊＊｝?
What is it?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("H6G0600000_06_010");
MsgDisp("Himuro","I heard that the brass band won
an award at the competition.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("H6G0600000_06_020");
MsgDisp("Himuro","You really did it.
Congrats.");
MsgDisp("主人公","Thanks!
......Did you come all this way to
congratulate me?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,0);
VoicePlay("H6G0600000_06_030");
MsgDisp("Himuro","Can't I?
Stuff like this needs to be said early
or there's no point.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("H6G0600000_06_040");
MsgDisp("Himuro","I'm sure Reiichi-san is proud as well.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,0);
VoicePlay("H6G0600000_06_050");
MsgDisp("Himuro","I want to hear a performance too.
Next time, play a solo concert for me.");
MsgDisp("主人公","(Hehe.
I'm glad I practiced so hard
for brass band!)");
MsgClose();
ScrFadeOut(0,0);
