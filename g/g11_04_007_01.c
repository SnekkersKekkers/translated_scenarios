BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","Sorry if I kept you waiting.
Heres some assorted sandwiches and
vegetable juice.");
SEPlay("EV_SE_827");
SEWait();
MsgDisp("主人公","(Whew... it's a busy day today.)");
VoicePlay("G110400701_04_000");
MsgDisp("Nanatsumori","Excuse me.");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for waiting.");
ChMouth(4,2);
VoicePlay("G110400701_04_010");
MsgDisp("Nanatsumori","I wasn't waiting.");
MsgDisp("主人公","Hehe, I guess you didn't then.
Just for the time being then?");
VoicePlay("G110400701_04_020");
MsgDisp("Nanatsumori","You've really grown up.
A waitress at a coffee shop.");
MsgDisp("主人公","Thank you.
｛七ツ森＊｝, thank you
for always visiting me.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2);
VoicePlay("G110400701_04_030");
MsgDisp("Nanatsumori","Well... it's mostly for business though.");
MsgDisp("主人公","But you're a valued customer.
Thank you for your continued patronage▼");
ChEye(4,1);
ChMouth(4,0);
ChMotion(4,0);
ChCheek(4,7);
VoicePlay("G110400701_04_040");
MsgDisp("Nanatsumori","...I'd like another cup of joe then.");
MsgDisp("主人公","(Hehe!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
