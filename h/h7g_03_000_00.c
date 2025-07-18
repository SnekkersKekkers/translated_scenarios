BGOpen("ho000",0);
ChLayout(1);
MsgClose();
ChOpen(3,255,0,0,0,#1,#1,0,0);
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("H8G0300000_03_000");
MsgDisp("Honda","｛主人公｝, congrats!");
MsgDisp("主人公","Huh, ｛本多＊＊｝∋
Is this about...");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("H8G0300000_03_010");
MsgDisp("Honda","Yeah, yeah! About the handicrafts club.
Your work won a prize in a contest, right?
So, what award was it?");
MsgDisp("主人公","Um, it was the grand prize.");
ChEye(3,5);
ChMouth(3,4);
ChMotion(3,5);
VoicePlay("H8G0300000_03_020");
MsgDisp("Honda","T...the grand prize∋");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4);
ChEyeOpenLevel(3,0);
VoicePlay("H8G0300000_03_030");
MsgDisp("Honda","Wow, you really are amazing.
To get results like that, your work must
have been extraordinary.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("H8G0300000_03_040");
MsgDisp("Honda","To you, it might seem like any other
result, but to me, I think it's a really
big accomplishment.");
MsgDisp("主人公","｛本多＊＊｝...
Thank you.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("H8G0300000_03_050");
MsgDisp("Honda","Your skills are amazing, but you should
take pride in your consistent efforts,
too! Really, congratulations!");
MsgDisp("主人公","(I'm so happy...
I'm really glad I stayed in the
handicrafts club!)");
MsgClose();
ScrFadeOut(0,0);
