MsgClose();
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ChMouthOpenLevel(4,0);
VoicePlay("G020420101_04_000");
MsgDisp("Nanatsumori","............");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("G020420101_04_010");
MsgDisp("Nanatsumori","...Oh shoot.");
MsgDisp("主人公","What's wrong?");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,0,1);
VoicePlay("G020420101_04_020");
MsgDisp("Nanatsumori","Haven't you noticed?");
MsgDisp("主人公","?");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,2,1);
VoicePlay("G020420101_04_030");
MsgDisp("Nanatsumori","Sigh...
Did I get the wrong idea?");
MsgDisp("主人公","Um, ｛七ツ森＊｝?");
ChEye(4,1);
ChMouth(4,2);
ChEyeOpenLevel(4,0);
VoicePlay("G020420101_04_040");
MsgDisp("Nanatsumori","Can you be quiet for a second?");
MsgDisp("主人公","............");
ChEye(4,2);
ChMotion(4,0,1);
ChMouthOpenLevel(4,0);
VoicePlay("G020420101_04_050");
MsgDisp("Nanatsumori","............");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("G020420101_04_060");
MsgDisp("Nanatsumori","I'm sorry. I didn't mean to take
it all out on you.");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("G020420101_04_070");
MsgDisp("Nanatsumori","Maybe it's my fault... but whenever
I see you and him laughing together
I——");
MsgDisp("主人公","｛七ツ森＊｝......");
VoicePlay("G020420101_04_080");
MsgDisp("Nanatsumori","It sucks. It makes me
100% jealous.");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0,1);
VoiceEVSPlay(4);
VoicePlay("G020420101_04_090");
MsgDisp("Nanatsumori","I'm sorry ｛主人公｝.");
MsgDisp("主人公","(｛七ツ森＊｝ seems hurt... I wonder
if I did something wrong...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
