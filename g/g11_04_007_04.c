BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","(Oh yeah, ｛七ツ森＊｝ is
almost done with a shoot...)");
MsgClose();
SEPlay("EV_SE_DOOR_014");
Wait(20,0);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
Wait(90,0);
BGMPlay("BGM_C04_NANA_A");
ChLayout(1);
ChNanaType(1);
ChOpen(4,35,0,0,0,#1,#1,0,0,0,60);
VoicePlay("G110400704_04_000");
MsgDisp("Nanatsumori","Hey.");
MsgDisp("主人公","Ah, welcome back.");
ChEye(4,4);
ChMouth(4,4);
ChCheek(4,5);
VoicePlay("G110400704_04_010");
MsgDisp("Nanatsumori","Ah... yeah.
I'm back.");
MsgDisp("主人公","We have a special seat waiting for you.");
MsgClose();
ScrFadeOut(0);
ChClose(4);
MsgClose();
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Let me take your empty plates away.");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("G110400704_04_020");
MsgDisp("Nanatsumori","Thank you.");
ChMotion(4,1);
VoicePlay("G110400704_04_030");
MsgDisp("Nanatsumori","...Hey.");
MsgDisp("主人公","Yes?");
VoicePlay("G110400704_04_040");
MsgDisp("Nanatsumori","Do you do this to the other customers
earlier?");
MsgDisp("主人公","Earlier...");
ChEye(4,0);
ChMouth(4,1);
VoicePlay("G110400704_04_050");
MsgDisp("Nanatsumori","You know, saying that they should come
back once they are out of work.");
MsgDisp("主人公","Not particularly.
Do you not like when I do that?");
ChEye(4,1);
ChMouth(4,1);
VoicePlay("G110400704_04_060");
MsgDisp("Nanatsumori","Huh∋");
ChMotion(4,0);
VoicePlay("G110400704_04_070");
MsgDisp("Nanatsumori","I don't mind at all.
I don't have an issue with it.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2);
VoicePlay("G110400704_04_080");
MsgDisp("Nanatsumori","... Yeah.
In any case, I'm fine with it...");
MsgDisp("主人公","?");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0);
VoicePlay("G110400704_04_090");
MsgDisp("Nanatsumori","Phew!
Today was a good day.");
MsgDisp("主人公","(Hehe, ｛七ツ森＊｝ is in
a good mood.
Thank you for your hard work today.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
