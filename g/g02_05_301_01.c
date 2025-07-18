MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
ChMotion(5,4);
VoicePlay("G020530101_05_000");
MsgDisp("Hiiragi","PLease take a look.
That firefly is accompanied by an
entourage.");
MsgDisp("主人公","Oh it is actually.");
ChEye(5,3);
VoicePlay("G020530101_05_010");
MsgDisp("Hiiragi","Is it a queen firefly?
Do such things exist?");
MsgDisp("主人公","Hehe.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020530101_05_020");
MsgDisp("Hiiragi","It is similar to you.");
MsgDisp("主人公","Ehh?");
ChEye(5,0);
VoicePlay("G020530101_05_030");
MsgDisp("Hiiragi","Lately, there are always a lot of people
around you.
Girls, boys, even teachers?");
ChEye(5,3);
ChMotion(5,4);
VoicePlay("G020530101_05_040");
MsgDisp("Hiiragi","I have to work hard and shine brightly,
too.
I'd be sad if you didn't notice me.");
MsgDisp("主人公","｛柊＊＊＊｝?");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020530101_05_050");
MsgDisp("Hiiragi","Your charm is undeniable.
It's only going to increase more and more,
you know?");
MsgDisp("主人公","(Recently I've made more friends and more
acquaintances...｛柊＊＊＊｝, you're
exaggerating.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
