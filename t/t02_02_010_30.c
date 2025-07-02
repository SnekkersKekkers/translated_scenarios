ChEyeOpenLevel(2,-1);
ChMouthOpenLevel(2,-1);
ChCheek(2,0);
BGMStop();
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
MsgDisp("主人公","I'm sorry. I......");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020201030_02_000");
MsgDisp("Sassa","I see......
Why are you apologizing?");
BGMPlay("BGM_C02_SASSA_C",0.01);
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020201030_02_010");
MsgDisp("Sassa","......I can only be grateful to you.");
MsgDisp("主人公","｛颯砂＊＊｝……");
ChMotion(2,4);
VoicePlay("T020201030_02_020");
MsgDisp("Sassa","Thanks to you,
I can now think about why I run.");
VoicePlay("T020201030_02_030");
MsgDisp("Sassa","It's a big change for me.");
MsgDisp("主人公","…………");
ChEye(2,4);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("T020201030_02_040");
MsgDisp("Sassa","I can't run with you, but... it's okay.
I can run alone.");
MsgDisp("主人公","｛颯砂＊＊｝……");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("T020201030_02_050");
MsgDisp("Sassa","I'd be happy if you were watching
somewhere. Phew... See you then.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(2,0,0);
Wait(120);
