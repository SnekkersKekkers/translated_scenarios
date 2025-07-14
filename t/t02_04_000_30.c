ChEye(4,4);
ChMouth(4,4);
BGMStop();
MsgDisp("主人公","I'm sorry......
I......");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("T020400000_04_370");
MsgDisp("Nanatsumori","......I see.");
BGMPlay("BGM_C04_NANA_B",0.01);
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("T020400000_04_380");
MsgDisp("Nanatsumori","I'm sorry.
I never wanted to make you look so sad.");
MsgDisp("主人公","But......");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("T020400000_04_390");
MsgDisp("Nanatsumori","It's alright.
You've already helped me enough.");
ChEye(4,2);
ChMotion(4,2,1);
VoicePlay("T020400000_04_400");
MsgDisp("Nanatsumori","There's no need to wish for anything more
now.");
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("T020400000_04_410");
MsgDisp("Nanatsumori","So, look up. Smile.");
MsgDisp("主人公","｛七ツ森＊｝......");
ChMouth(4,3);
ChMotion(4,3,1);
VoicePlay("T020400000_04_420");
MsgDisp("Nanatsumori","Hmm. I hope you will become happier and
happier from now on.");
ChMouth(4,4);
ChEyeOpenLevel(4,8);
VoicePlay("T020400000_04_430");
MsgDisp("Nanatsumori","Right now, that's all I wish for.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(4,0,0);
Wait(120);
