ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("P640100002_01_000");
MsgDisp("Kazama","｛主人公｝.");
MsgDisp("主人公","｛風真＊＊｝, what did you think?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P640100002_01_010");
MsgDisp("Kazama","The herb tea was delicious.
And the vegetables are also beautiful.");
MsgDisp("主人公","Really?
I'm happy.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P640100002_01_020");
MsgDisp("Kazama","The vegetables you grew, not only look
good but must taste good too?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P640100002_01_030");
MsgDisp("Kazama","I'll eat them at home with Grandpa.");
MsgDisp("主人公","(I was praised by ｛風真＊＊｝!
YAy, it was a huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
BGMStop();
