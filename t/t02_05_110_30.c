BGMStop();
MsgDisp("主人公","......I'm sorry.");
ChEye(5,4);
ChMouth(5,4);
ChEyeOpenLevel(5,0);
ChCheek(5,0);
VoicePlay("T020511030_05_000");
MsgDisp("Hiiragi","Please don't apologize");
BGMPlay("BGM_C05_HIIRAGI_C",0.01);
ChEye(5,4);
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(16,0);
ChEye(5,0);
VoicePlay("T020511030_05_010");
MsgDisp("Hiiragi","It's alright. Thanks to you, I was able to
graduate from the prestigious Haba
Academy.");
ChMotion(5,4);
ChEyeOpenLevel(5,0);
Wait(10,0);
ChEye(5,3);
ChMouth(5,3);
ChEyeOpenLevel(5,10);
VoicePlay("T020511030_05_020");
MsgDisp("Hiiragi","To me it's a miracle.
If I can do this,
I feel like I can do anything.");
MsgDisp("主人公","｛柊＊＊＊｝......");
ChMotion(5,0);
ChEyeOpenLevel(5,0);
Wait(12,0);
ChEye(5,0);
ChMouth(5,4);
VoicePlay("T020511030_05_030");
MsgDisp("Hiiragi","Don't make that face, 
show me a smile.");
MsgDisp("主人公","......Yes.");
ChEyeOpenLevel(5,0);
Wait(8,0);
ChEye(5,4);
ChEyeOpenLevel(5,10);
VoicePlay("T020511030_05_040");
MsgDisp("Hiiragi","Thank you......");
ChMotion(5,0,1);
Wait(16,0);
ChEyeOpenLevel(5,0);
VoicePlay("T020511030_05_050");
MsgDisp("Hiiragi","Thank you.
In the end, I got to see you smile.
Now everything will be okay.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(5,0,0);
Wait(120);
