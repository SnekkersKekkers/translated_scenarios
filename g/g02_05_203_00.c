MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("G020520300_05_000");
MsgDisp("Hiiragi","The fireflies here come in a variety of
colors and glow in different ways, don't
they?");
MsgDisp("主人公","Yeah. 
It's fun to watch them.");
ChEye(5,4);
VoicePlay("G020520300_05_010");
MsgDisp("Hiiragi","It's much like your fashion. It's varied
each time and very much enjoyable to see.");
ChEye(5,2);
ChMotion(5,4);
VoicePlay("G020520300_05_020");
MsgDisp("Hiiragi","As for me......I'm always dressed like
this?");
MsgDisp("主人公","｛柊＊＊＊｝'s fashion suits him.");
ChEye(5,4);
ChMotion(5,0);
VoicePlay("G020520300_05_030");
MsgDisp("Hiiragi","Thank you.
It is befitting, huh......");
ChEye(5,0);
ChMouth(5,4);
VoicePlay("G020520300_05_040");
MsgDisp("Hiiragi","I want to be able to make you enjoy
it even more. What kind of style 
would you like to see?");
MsgDisp("主人公","Hehe, let's see......
You normally go for quite a chic feel, 
so how about something more wild?");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,4);
VoicePlay("G020520300_05_050");
MsgDisp("Hiiragi","Wild......
specifically, 
what kind of fashion would that be?");
MsgDisp("主人公","Hmmm,
Kind of like ｛御影＊＊｝?");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,3);
VoicePlay("G020520300_05_060");
MsgDisp("Hiiragi","I see, there's a role model close to
myself. I'll give it a try.");
ChEye(5,4);
ChMotion(5,2);
VoicePlay("G020520300_05_070");
MsgDisp("Hiiragi","If we're talking about Mikage-sensei......
something like his grey work outfit.");
MsgDisp("主人公","(Hm? Just now, did I hear something about
a work outfit......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
