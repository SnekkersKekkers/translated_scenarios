MsgClose();
ChOpen(5,255,0,0,4,#1,#1,0,0);
VoicePlay("G020510301_05_000");
MsgDisp("Hiiragi","Thank you for coming to my house the other
day.");
MsgDisp("主人公","I should be the one saying that.
Thank you for having me.");
ChEye(5,4);
VoicePlay("G020510301_05_010");
MsgDisp("Hiiragi","It was rather troubling after you left to
go home, you know?");
VoicePlay("G020510301_05_020");
MsgDisp("Hiiragi","The troupe members saw you... and
bombarded me with questions");
MsgDisp("主人公","Eh, what kind of questions?");
ChEye(5,2);
ChMotion(5,4);
VoicePlay("G020510301_05_030");
MsgDisp("Hiiragi","What's your name? How old are you? What
are your hobbies? Do you have any acting
experience? And even, when are you joining
the troupe?");
MsgDisp("主人公","Ehhhh∋");
ChEye(5,3);
ChMotion(5,0);
VoicePlay("G020510301_05_040");
MsgDisp("Hiiragi","Troubling, right?");
ChEye(5,4);
VoicePlay("G020510301_05_050");
MsgDisp("Hiiragi","I wasn't even able to answer the last
question adequately.");
MsgDisp("主人公","The last...question?");
ChEye(5,3);
ChMotion(5,4);
VoicePlay("G020510301_05_060");
MsgDisp("Hiiragi","Yes, I was going to ask how you would
answer that.");
ChMotion(5,0);
VoicePlay("G020510301_05_070");
MsgDisp("Hiiragi","Well, what is your answer?");
MsgDisp("主人公","(Ummm...
If you say it like that, I'll be
troubled!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(5,#1);
ChMouthOpenLevel(5,#1);
ChCheek(5,0);
