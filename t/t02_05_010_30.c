BGMStop();
MsgDisp("主人公","......I'm sorry");
ChEye(5,4);
ChMouth(5,4);
ChEyeOpenLevel(5,0);
ChCheek(5,0);
VoicePlay("T020501030_05_000");
MsgDisp("Hiiragi","Please don't apologise.");
BGMPlay("BGM_C05_HIIRAGI_C",0.01);
ChEye(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,4);
VoicePlay("T020501030_05_010");
MsgDisp("Hiiragi","It's okay.
Thanks to your light,
I can clearly see the way.");
ChEyeOpenLevel(5,0);
Wait(8,0);
ChEye(5,0);
ChMouth(5,3);
VoicePlay("T020501030_05_020");
MsgDisp("Hiiragi","After that I can walk by myself.");
MsgDisp("主人公","｛柊＊＊＊｝……");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,3);
ChMouth(5,3);
VoicePlay("T020501030_05_030");
MsgDisp("Hiiragi","It's okay. I'm the chairman who graduated
from the prestigious Haba School, you
know?");
ChEye(5,4);
ChMouth(5,4);
VoicePlay("T020501030_05_040");
MsgDisp("Hiiragi","......I barely passed with my grades
though.");
MsgDisp("主人公","Hehe, yes......");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(16,0);
VoicePlay("T020501030_05_050");
MsgDisp("Hiiragi","Thank you.
In the end, I got to see you smile.
Now everything will be okay.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(5,0,0);
Wait(120);
