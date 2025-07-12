ChClose(4);
BGMStop();
BGOpen("ho000",2);
ChLayout(1);
MsgClose();
ChNanaType(#1);
ChOpen(4,255,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for walking me home.
Well, see youー");
ChMotion(4,1,1);
VoicePlay("K020401100_04_000");
MsgDisp("Nanatsumori","Wait.");
MsgDisp("主人公","Hm?");
ChMotion(4,0,1);
VoicePlay("K020401100_04_010");
MsgDisp("Nanatsumori","I still need you for something.
Hang out with me just a little longer.");
MsgDisp("主人公","Oh, okay.
......What?");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("K020401100_04_020");
MsgDisp("Nanatsumori","What are you scared of?");
SEPlay("EV_SE_665");
SEWait();
ChMotion(4,0,1);
VoicePlay("K020401100_04_030");
MsgDisp("Nanatsumori","Here.
Your present.");
MsgDisp("主人公","Hm?");
ChEye(4,4);
ChMouth(4,3);
VoicePlay("K020401100_04_040");
VoiceEVSPlay(4);
MsgDisp("Nanatsumori","Happy birthday, ｛主人公｝.");
MsgDisp("主人公","Wah...... Thank you!
You remembered.");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("K020401100_04_050");
MsgDisp("Nanatsumori","Well, yeah.
I didn't think it'd overlap with our date.");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("K020401100_04_060");
MsgDisp("Nanatsumori","Thanks to that, my heart's
been pounding even more than it
usually does......");
MsgDisp("主人公","Hehe!");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("K020401100_04_070");
MsgDisp("Nanatsumori","Take your time and look at it later.
Well, see you.");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(4,0,30);
Wait(30);
MsgDisp("主人公","(Hehe,
Today was a lovely birthday......)");
MsgClose();
ScrFadeOut(0,0);
