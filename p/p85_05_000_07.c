BGMPlay("BGM_FESTIVAL",0.01);
BGOpen("sc710",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,4,4,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","｛柊＊＊＊｝, good work.
I'm very sorry for causing trouble.");
VoicePlay("P850500007_05_000");
MsgDisp("Hiiragi","Thank you for your hard work.
Causing trouble...
Please don't say that.");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P850500007_05_010");
MsgDisp("Hiiragi","You didn't just care about yourself, you
cared about me and the people around us.
Thank you.");
MsgDisp("主人公","｛柊＊＊＊｝...");
ChEye(5,2);
ChMotion(5,0);
ChEyeOpenLevel(5,9);
VoicePlay("P850500007_05_020");
MsgDisp("Hiiragi","So, if you failed, 
then it was also my liability.");
ChEyeOpenLevel(5,0);
VoicePlay("P850500007_05_030");
MsgDisp("Hiiragi","I wanted to end this last cultural
festival with you smiling.
It's a shame");
MsgDisp("主人公","(Uugh, a huge fail.
If ony I had prepared more carefully.)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
