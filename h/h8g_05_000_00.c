BGOpen("sc605",0);
ChLayout(1);
MsgClose();
ChOpen(5,254,0,4,4,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(5);
VoicePlay("H8G0500000_05_000");
MsgDisp("Hiiragi","｛主人公｝.
......No, perhaps I should address you as
model student?");
MsgDisp("主人公","Um......
That makes me feel a little shy.");
ChEye(5,0);
VoicePlay("H8G0500000_05_010");
MsgDisp("Hiiragi","Not at all.
As it's you, I'm sure there would be
no objections from anyone.");
ChMotion(5,4);
Wait(12,0);
ChEye(5,4);
ChEyeOpenLevel(5,0);
VoicePlay("H8G0500000_05_020");
MsgDisp("Hiiragi","As part of the student council myself, I'm
glad your efforts are being recognized,
but to be honored as an individual......");
ChEyeOpenLevel(5,#1);
MsgDisp("主人公","I wouldn't have been able to do
anything on my own. It's thanks to you
and everyone else, ｛柊＊＊＊｝.");
ChEye(5,3);
ChMotion(5,0);
VoicePlay("H8G0500000_05_030");
MsgDisp("Hiiragi","Thank you. But today, it is your
award ceremony. You're the star of
today's show, so have fun.");
MsgClose();
ChClose(5);
MsgDisp("主人公","(I'm so happy.
I'm glad I worked so hard
in the student council!)");
MsgClose();
ScrFadeOut(0,0);
