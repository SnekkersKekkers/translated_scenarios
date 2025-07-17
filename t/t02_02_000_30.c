ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
BGMStop();
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
MsgDisp("主人公","I'm sorry.
I...");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020200030_02_000");
MsgDisp("Sassa","I see...
Why are you apologizing?");
BGMPlay("BGM_C02_SASSA_C",0.01);
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020200030_02_010");
MsgDisp("Sassa","...I can only be grateful to you.");
MsgDisp("主人公","｛颯砂＊＊｝...");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("T020200030_02_020");
MsgDisp("Sassa","Thanks to you, I can now think about why I
run.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020200030_02_030");
MsgDisp("Sassa","I'm definitely stronger now than I was
when I was just running.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020200030_02_040");
MsgDisp("Sassa","I owe it to you");
MsgDisp("主人公","......");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("T020200030_02_050");
MsgDisp("Sassa","I can't run with you but ...
It's okay.");
ChEye(2,3);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("T020200030_02_060");
MsgDisp("Sassa","Surprisingly, I like thinking too.
Did you know that?");
ChEye(2,4);
ChEyeOpenLevel(2,10);
MsgDisp("主人公","｛颯砂＊＊｝...");
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("T020200030_02_070");
MsgDisp("Sassa","I'll think it through, but I'll run as
hard as I can.
See you, manager.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(2,0,0);
Wait(120);
