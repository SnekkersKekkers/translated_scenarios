BGMStop();
ChLayout(1);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("ho000",0);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020101000_01_000");
MsgDisp("Kazama","You should thank me for everything at
once.");
MsgDisp("主人公","Huh?
All at once?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("K020101000_01_010");
MsgDisp("Kazama","Happy birthday.
Were you happy today?");
MsgDisp("主人公","Ah...you remembered?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
ChEyeOpenLevel(1,0);
VoicePlay("K020101000_01_020");
MsgDisp("Kazama","I would forget New Year's before I forget
your birthday.");
MsgDisp("主人公","Hehe.
｛風真＊＊｝, thank you.");
SEPlay("EV_SE_665");
SEWait();
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020101000_01_030");
MsgDisp("Kazama","Here's your present. Sorry. I've been
holding onto it for a while, so the ribbon
got crushed.");
MsgDisp("主人公","Okay.
Thank you...!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020101000_01_040");
MsgDisp("Kazama","That's why you should thank me for
everything at once.");
MsgDisp("主人公","Yeah.
Thank you.
Please treat me well this year too.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("K020101000_01_050");
MsgDisp("Kazama","Come on, you're thanking me again.
See you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
MsgDisp("主人公","(I went to the shrine with (｛風真＊＊｝,
and even celebrated my birthday with him.
It's a great start to the new year.)");
MsgClose();
ScrFadeOut(0,0);
