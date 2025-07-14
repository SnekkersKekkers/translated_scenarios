ChLayout(1);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,4,1);
ChEyeOpenLevel(3,0);
ScrFadeIn(0);
VoicePlay("P640300002_03_000");
MsgDisp("Honda","Haa...It was deliciousー.");
MsgDisp("主人公","Really, that's good.
You should also check out the vegetable
sales, okay?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("P640300002_03_010");
MsgDisp("Honda","Yeah, of course!");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("P640300002_03_020");
MsgDisp("Honda","...Hm? Look at the vegetables over there.
Hey, the caterpillar-kun seems like it's
savouring it.");
MsgDisp("主人公","Eh, a bug∋
W-Where?");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("P640300002_03_030");
MsgDisp("Honda","Ah, that way. Looks like it's got
caterpillar kun's seal of approval. It
must be delicious. I'll buy it!");
MsgDisp("主人公","(Yay! I got praised by ｛本多＊＊｝ )");
MsgClose();
ScrFadeOut(0,0);
ChClose(3,0,0);
BGMStop();
