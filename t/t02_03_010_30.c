BGMStop();
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
MsgDisp("主人公","......I'm sorry.");
ChEye(3,2);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020301000_03_300");
MsgDisp("Honda","......I see.");
MsgDisp("主人公","But, I......");
BGMPlay("BGM_C03_HONDA_C",0.01);
Wait(40,0);
ChMouth(3,0);
ChMouth(3,0);
ChMotion(3,1,1);
VoicePlay("T020301000_03_310");
MsgDisp("Honda","Don't worry about it.");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("T020301000_03_320");
MsgDisp("Honda","If you look at me like that I'll regret
having confessed my feelings for you.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020301000_03_330");
MsgDisp("Honda","Not in a book, but I'll always love the
world in which you exist.");
MsgDisp("主人公","｛本多＊＊｝......");
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("T020301000_03_340");
MsgDisp("Honda","Meeting you has made me look forward to my
future. Thank you so much.");
ChSet(3,3);
ChEyeOpenLevel(3,0);
VoicePlay("T020301000_03_350");
MsgDisp("Honda","Phew......
That's all!");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(3,0,0);
Wait(120);
