BGMStop();
BGOpen("ho000",2);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("K020601100_06_000");
MsgDisp("Himuro","I had fun today.");
MsgDisp("主人公","Me too!
Thanks for walking me back.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("K020601100_06_010");
MsgDisp("Himuro","Don't mention it.
......And, here.");
SEPlay("EV_SE_665");
SEWait();
MsgDisp("主人公","Hm?
This is......");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("K020601100_06_020");
MsgDisp("Himuro","It's your birthday today, right?
So here's your present.");
MsgDisp("主人公","!
You remembered?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("K020601100_06_030");
MsgDisp("Himuro","Nonsense.
Of course I wouldn't forget.");
MsgDisp("主人公","Thank you.
I'm really happy.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
ChCheek(6,5);
VoicePlay("K020601100_06_040");
MsgDisp("Himuro","I see.
I'm happy to see your reaction, too.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ChCheek(6,0);
VoicePlay("K020601100_06_050");
VoiceEVSPlay(6);
MsgDisp("Himuro","Well, I'm going home.
......Happy birthday, ｛主人公｝.");
MsgDisp("主人公","Thanks, ｛氷室＊＊｝. See you soon?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("K020601100_06_060");
MsgDisp("Himuro","......Yeah.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(6);
Wait(30);
MsgDisp("主人公","(Today was a wonderful birthday......)");
MsgClose();
ScrFadeOut(0,0);
