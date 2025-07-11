ChEye(5,2);
ChMouth(5,0);
ChMotion(5,0,1);
ChEyeOpenLevel(5,0);
ScrFadeIn(0);
VoicePlay("P640500001_05_000");
MsgDisp("Hiiragi","Ugh...");
MsgDisp("主人公","｛柊＊＊＊｝, what's wrong?");
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("P640500001_05_010");
MsgDisp("Hiiragi","Yes, somethings wrong.
The bitterness and acridity...");
MsgDisp("主人公","It might just be due to it being herbal,
so it's a little bit peculiar.");
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("P640500001_05_020");
MsgDisp("Hiiragi","Might be?
That means, you haven't tried it yourself?");
MsgDisp("主人公","Ummm...");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P640500001_05_030");
MsgDisp("Hiiragi","It can't be dismissed as a peculiar taste.
My mouth has been...");
ChEyeOpenLevel(5,9);
VoicePlay("P640500001_05_040");
MsgDisp("Hiiragi","Excuse me,
Could I get a bit of water?");
MsgDisp("主人公","(Haa..
I should have sampled a little bit.
A huge failure...)");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
