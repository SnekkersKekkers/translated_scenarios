BGOpen("sc620",0);
ChLayout(1);
MsgClose();
ScrFadeIn(0);
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoiceEVSPlay(3);
VoicePlay("H180300000_03_000");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","Ah, ｛本多＊＊｝!
You came to cheer us on?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("H180300000_03_010");
MsgDisp("Honda","This is the club you've been devoting
yourself to for three years, right?
Of course I'd come and lend my support.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("H180300000_03_020");
MsgDisp("Honda","You know, I was so excited that I stayed
up all night to make a spectator's guide
to watch this game.");
MsgDisp("主人公","Wow, this looks just like a roster of
players!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("H180300000_03_030");
MsgDisp("Honda","If I'm going to be cheering for them, I
want to know more about the players.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("H180300000_03_040");
MsgDisp("Honda","But the person I'd like to support the
most is you. Supporting the players must
be hard, so leave supporting you to me,
okay?");
MsgDisp("主人公","Hehe, okay!
Thanks ｛本多＊＊｝!");
MsgDisp("主人公","(Alright, let's do our best!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(3);
