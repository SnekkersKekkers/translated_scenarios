MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
ChMotion(5,4);
VoicePlay("G020520301_05_000");
MsgDisp("Hiiragi","Ah, please have a look.
A lot of fireflies are gathering around a
single one..");
ChEye(5,4);
VoicePlay("G020520301_05_010");
MsgDisp("Hiiragi","Even in the firefly world, there are
popular ones, huh?");
MsgDisp("主人公","Hehe, is it the ｛柊＊＊＊｝ of
the firefly world?");
ChEye(5,3);
VoicePlay("G020520301_05_020");
MsgDisp("Hiiragi","The poster boy of firefly theatre,
perhaps?");
MsgDisp("主人公","Hehe, something like that.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020520301_05_030");
MsgDisp("Hiiragi","...No, that's incorrect.
As it's a female firefly.");
ChEye(5,3);
VoiceEVSPlay(5);
VoicePlay("G020520301_05_040");
MsgDisp("Hiiragi","｛主人公｝, it's you.
It's you of the firefly world.");
MsgDisp("主人公","Eh, me?");
ChEye(5,4);
VoicePlay("G020520301_05_050");
MsgDisp("Hiiragi","And those around it are us, shining
brightly so as to be chosen by you.");
ChEye(5,0);
ChMotion(5,4);
VoicePlay("G020520301_05_060");
MsgDisp("Hiiragi","Make sure you pick me, okay?");
MsgDisp("主人公","Ehhhh∋");
ChEye(5,4);
VoicePlay("G020520301_05_070");
MsgDisp("Hiiragi","Hehe, it's a joke.");
MsgDisp("主人公","(Sometimes I don't understand whether
｛柊＊＊＊｝ is being genuine
or joking...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
