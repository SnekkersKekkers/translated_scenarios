BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(Yes, I think I was able to perform 
better than last year!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(1,254,3,3,3,#1,#1,0,0);
VoicePlay("P540100002_01_000");
MsgDisp("Kazama","Wasn't it a huge success?
Congratulations.");
MsgDisp("主人公","Ah, ｛風真＊＊｝!
Thank you.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P540100002_01_010");
MsgDisp("Kazama","You were able to smile at everyone and
perform. It was a game song, huh. I'm a
little interested now.");
MsgDisp("主人公","Really?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P540100002_01_020");
MsgDisp("Kazama","Yes,
let me hear it again sometime soon.");
MsgDisp("主人公","(Since ｛風真＊＊｝ is that happy, 
I'm so glad I practiced so carefully!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
