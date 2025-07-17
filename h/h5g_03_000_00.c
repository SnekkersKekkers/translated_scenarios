BGOpen("ho000",0);
ChLayout(1);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("H6G0300000_03_000")
MsgDisp("Honda","｛主人公｝!");
MsgDisp("主人公","Huh, ｛本多＊＊｝∋");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("H6G0300000_03_010")
MsgDisp("Honda","I heard that the brass band won an award
in the competition!
That's amazing, congrats!");
MsgDisp("主人公","Thanks!
... Did you come all this way just to
congratulate me?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("H6G0300000_03_020")
MsgDisp("Honda","All this way?
My feet just started coming here before I
realized, though?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("H6G0300000_03_030")
MsgDisp("Honda","I know just how hard you've worked these
past three years, so I wanted to
congratulate you before anyone else.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("H6G0300000_03_040")
MsgDisp("Honda","I'm looking forward to seeing our vice
principal looking all satisfied too!");
MsgDisp("主人公","(Hehe.
I'm glad I practiced so hard for brass
band!)");
MsgClose();
ScrFadeOut(0,0);
