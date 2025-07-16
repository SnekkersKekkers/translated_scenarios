BGOpen("sc624",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_C03_HONDA_A",0.01);
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
ScrFadeIn(0);
VoiceEVSPlay(3);
VoicePlay("H2A0300000_03_000");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","Ah, ｛本多＊＊｝!
I did it!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1);
ChEyeOpenLevel(3,0);
VoicePlay("H2A0300000_03_010");
MsgDisp("Honda","Yeah, you did∈ We set a lot of new
records, and Haba High even won the
championship!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,0);
VoicePlay("H2A0300000_03_020");
MsgDisp("Honda","This is the best possible result for you
as manager, right?");
MsgDisp("主人公","Yes, I think so!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,4);
ChEyeOpenLevel(3,0);
VoicePlay("H2A0300000_03_030");
MsgDisp("Honda","Yeah, yeah, right.
This result was thanks to your support.
You worked hard these past three years!");
MsgDisp("主人公","(I'm glad that I stayed as the track and
field club manager......!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
