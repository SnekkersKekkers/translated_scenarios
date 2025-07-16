BGMStop();
MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, seems like I performed well!)");
MsgClose();
SEPlay("EV_SE_544",0,0.6);
ChOpen(5,254,0,3,4,#1,#1,0,0);
ChMotion(5,3);
Wait(25,1);
ChMouth(5,3);
VoiceEVSPlay(5);
VoicePlay("P540500004_05_000");
MsgDisp("Hiiragi","｛主人公｝.
Congratulations, that was wonderful.");
MsgDisp("主人公","Ah, ｛柊＊＊＊｝!
Genuinely...?");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,0);
VoicePlay("P540500004_05_010");
MsgDisp("Hiiragi","It was the best performance.
I'm not exaggerating, it was truly
touching.");
MsgDisp("主人公","Hehe, thank you.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("P540500004_05_020");
MsgDisp("Hiiragi","When I close my eyes, I can feel your
sound, and when I open my eyes, I see you
in all your glory.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("P540500004_05_030");
MsgDisp("Hiiragi","I feel a bit lonely now that the
performance has ended.
Thank you for a spectacular time.");
MsgDisp("主人公","(I'm happy that ｛柊＊＊＊｝ is
that delighted. I'm glad I gave it my all
for the last three years!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
