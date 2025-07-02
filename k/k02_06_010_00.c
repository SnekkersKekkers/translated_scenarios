BGMStop();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.
Well, seeー");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("K020601000_06_000");
MsgDisp("Himuro","Wait.");
MsgDisp("主人公","Hm?");
SEPlay("EV_SE_665");
SEWait();
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("K020601000_06_010");
MsgDisp("Himuro","It's your birthday today, right?
......Happy birthday.");
MsgDisp("主人公","This is...... a present?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("K020601000_06_020");
MsgDisp("Himuro","It's nothing much.");
MsgDisp("主人公","Thank you, ｛氷室＊＊｝.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("K020601000_06_030");
MsgDisp("Himuro","Don't mention it.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("K020601000_06_040");
MsgDisp("Himuro","Still,
today was doubly as happy, right?");
MsgDisp("主人公","Hehe, well said.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("K020601000_06_050");
MsgDisp("Himuro","Was that arrogant of me to say?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,1);
VoicePlay("K020601000_06_060");
MsgDisp("Himuro","Well, I'm going home.
Be careful not to catch a cold.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
Wait(30);
MsgDisp("主人公","(I got to celebrate with ｛氷室＊＊｝......
This year looks to be a great one!)");
MsgClose();
ScrFadeOut(0,0);
