SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
ChLayout(1);
ChNanaType(1);
ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
VoicePlay("G110400600_04_000");
MsgDisp("Nanatsumori","Hey.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.
Welcome!");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,4);
VoicePlay("G110400600_04_010");
MsgDisp("Nanatsumori","1 cup of joe.");
MsgDisp("主人公","Coming right up.");
MsgClose();
ScrFadeOut(0);
ChClose(4);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thank you for waiting.
Here's your hot coffee.");
VoicePlay("G110400600_04_020");
MsgDisp("Nanatsumori","Thanks.");
MsgDisp("主人公","…………");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1);
VoicePlay("G110400600_04_030");
MsgDisp("Nanatsumori","...What?");
MsgDisp("主人公","Ah, sorry, was I staring?
But......");
VoicePlay("G110400600_04_040");
MsgDisp("Nanatsumori","But?");
MsgDisp("主人公","You were modeling without glasses,
and when you did bungee jumping you
had different hair and no glasses...");
MsgDisp("主人公","Doesn't that completely
change your aura?");
ChEye(4,1);
ChMouth(4,1);
ChMouthOpenLevel(4,0);
VoicePlay("G110400600_04_050");
MsgDisp("Nanatsumori","…………");
ChMotion(4,0);
ChMouthOpenLevel(4,#1);
VoicePlay("G110400600_04_060");
MsgDisp("Nanatsumori","Well, I only wear glasses when I go
to school and don't take them off there.");
MsgDisp("主人公","Do you have poor eyesight?");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("G110400600_04_070");
MsgDisp("Nanatsumori","I can't even walk down the street
alone without my glasses.");
MsgDisp("主人公","I-I see.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,1);
VoicePlay("G110400600_04_080");
MsgDisp("Nanatsumori","You're very lucky to see me
because it's rare I look like that.");
MsgDisp("主人公","(I guess it is pretty rare. I got to
see the amazing model ｛七ツ森＊｝?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
