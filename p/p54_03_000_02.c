BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Yeah, I might have been able to play
better than last year!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(3,254,0,0,0,#1,#1,0,0);
VoiceEVSPlay(3);
VoicePlay("P540300002_03_000");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","Ah, ｛本多＊＊｝. How was it?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("P540300002_03_010");
MsgDisp("Honda","It was super good!
I was getting excited just listening to
it!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P540300002_03_020");
MsgDisp("Honda","More than anything, you looked like you
were having a great time playing, didn't
you? I was totally taken in.");
MsgDisp("主人公","I'm so glad, thank you!");
ChFace(3,3);
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
VoicePlay("P540300002_03_030");
MsgDisp("Honda","Yep yep.
More than anything, seeing your face of
satisfaction, I'm also satisfied!");
MsgDisp("主人公","(Yay!
My performance was a huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
