ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
BGMStop();
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
MsgDisp("主人公","I'm sorry.
I...");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020220030_02_000");
MsgDisp("Sassa","I see...
Don't apologize.");
BGMPlay("BGM_C02_SASSA_C",0.01);
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020220030_02_010");
MsgDisp("Sassa","Ryota and Inori would yell at me if I made
you apologize.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020220030_02_020");
MsgDisp("Sassa","...I can only be grateful to you.");
MsgDisp("主人公","......");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020220030_02_030");
MsgDisp("Sassa","I can't run with you, but...It's okay.
I'm not just a track and field fanatic
anymore.");
MsgDisp("主人公","｛颯砂＊＊｝...");
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("T020220030_02_040");
MsgDisp("Sassa","It would make me happy if you watched me
run sometime. Phew...See you then.");
ChEye(2,4);
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(2,0,0);
Wait(120);
