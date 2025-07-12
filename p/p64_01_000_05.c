ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
ScrFadeIn(0);
MsgDisp("主人公","Ah, ｛風真＊＊｝ how was it?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("P640100005_01_000");
MsgDisp("Kazama","I could tell that these vegetables
were grown with freedom.");
MsgDisp("主人公","Umm, it's because it's organically grown.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,3);
VoicePlay("P640100005_01_010");
MsgDisp("Kazama","That's not what I mean. There are things
like adjusting fertilizers to concentrate
the flavor and pruning, right?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("P640100005_01_020");
MsgDisp("Kazama","The vegetables are too big
and the taste is bland.");
ChEyeOpenLevel(1,#1);
MsgDisp("主人公","(Ugh... I should have participated
in the clubmore and researched 
how to grow them to be tastier...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
BGMStop();
