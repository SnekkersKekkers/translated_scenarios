ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ScrFadeIn(0);
VoiceEVSPlay(1);
VoicePlay("P640100001_01_000");
MsgDisp("Kazama","｛主人公｝.");
MsgDisp("主人公","Ah, ｛風真＊＊｝.
Did you drink the herbal tea?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("P640100001_01_010");
MsgDisp("Kazama","Yeah, I thought it was a punishment game.");
MsgDisp("主人公","Umm...
The herbs are good for the body...");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P640100001_01_020");
MsgDisp("Kazama","They say good medicine is bitter, I guess?
Even so, can't it be just a little easier
to swallow?");
MsgDisp("主人公","(I should have worked harder
researching...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
BGMStop();
