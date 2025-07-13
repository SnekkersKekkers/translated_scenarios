BGMStop();
MsgDisp("主人公","......I'm sorry");
ChEye(5,4);
ChMouth(5,4);
ChEyeOpenLevel(5,0);
ChCheek(5,0);
VoicePlay("T020520030_05_000");
MsgDisp("Hiiragi","Please don't apologize.");
BGMPlay("BGM_C05_HIIRAGI_C",0.01);
ChEye(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,4);
VoicePlay("T020520030_05_010");
MsgDisp("Hiiragi","It'll be alright.
I have you as my light, and Inori-kun and
Mikage-sensei walking alongside me——");
ChMotion(5,2);
VoicePlay("T020520030_05_020");
MsgDisp("Hiiragi","Now I know the way.
I can walk by myself.");
MsgDisp("主人公","｛柊＊＊＊｝......");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,3);
ChMouth(5,4);
VoicePlay("T020520030_05_030");
MsgDisp("Hiiragi","Hey, don't make that face. It's alright,
I'm the chairman who graduated from the
prestigious Haba High, you know?");
VoicePlay("T020520030_05_040");
MsgDisp("Hiiragi","......My grades were just barely passing,
though.");
MsgDisp("主人公","Hehe, yeah......");
ChEye(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChMouth(5,4);
VoicePlay("T020520030_05_050");
MsgDisp("Hiiragi","Thank you.
In the end, I got to see you smile.
Now everything will be okay.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(5,0,0);
Wait(120);
