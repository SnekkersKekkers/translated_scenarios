ChEyeOpenLevel(2,#1);
ChMouthOpenLevel(2,#1);
ChCheek(2,0);
BGMStop();
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
MsgDisp("主人公","I'm sorry......");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020211030_02_000");
MsgDisp("Sassa","I see...
I'm the one who should apologize.
I have nothing but gratitude for you.");
MsgDisp("主人公","｛颯砂＊＊｝......");
BGMPlay("BGM_C02_SASSA_C",0.01);
Wait(40,0);
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("T020211030_02_010");
MsgDisp("Sassa","Thanks to you, I was able to become
friends with everyone in the track and
field club.");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("T020211030_02_020");
MsgDisp("Sassa","Finally, I can start working towards my
dream.");
MsgDisp("主人公","............");
ChEye(2,4);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("T020211030_02_030");
MsgDisp("Sassa","I can't run with you, but... it's okay.
I'm not just a track and field fanatic
anymore.");
MsgDisp("主人公","｛颯砂＊＊｝......");
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,1);
VoicePlay("T020211030_02_040");
MsgDisp("Sassa","Well, I'm going to go running.");
BGMStop(3.6);
MsgClose();
ScrFadeOut(0,1,120);
ChClose(2,0,0);
Wait(120);
