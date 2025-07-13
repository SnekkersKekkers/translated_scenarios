BGMStop();
MsgDisp("主人公","......I'm sorry.");
ChEye(3,2);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020320000_03_360");
MsgDisp("Honda","......I see.");
MsgDisp("主人公","Um, I......");
BGMPlay("BGM_C03_HONDA_C",0.01);
Wait(40,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("T020320000_03_370");
MsgDisp("Honda","Don't worry about it.");
ChEye(3,2);
ChMouth(3,3);
ChMotion(3,4,1);
VoicePlay("T020320000_03_380");
MsgDisp("Honda","If you look at me like that, I'll regret
having confessed my feelings to you.");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020320000_03_390");
MsgDisp("Honda","Ryou-kun and Mii-kun will get mad at me
too. They'll be like 'what did you do to
her?!'.");
MsgDisp("主人公","Ugh, I'm sorry......");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("T020320000_03_400");
MsgDisp("Honda","So, don't apologize.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
VoicePlay("T020320000_03_410");
MsgDisp("Honda","I'm so glad I got to step out of the world
of books and meet you, Ryou-kun, and
Mii-kun.");
MsgDisp("主人公","｛本多＊＊｝......");
ChEye(3,4);
ChMotion(3,4,1);
VoicePlay("T020320000_03_420");
MsgDisp("Honda","Meeting you has made me excited for my
future. Thank you so much.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,0,1);
ChEyeOpenLevel(3,0);
VoicePlay("T020320000_03_430");
MsgDisp("Honda","Huu......
That's all!");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(3,0,0);
Wait(120);
