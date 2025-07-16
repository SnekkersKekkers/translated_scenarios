MsgClose();
ChClose(1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","From now on, please be careful.");
VoicePlay("P840100004_39_000");
MsgDisp("Male Student A","I apologize for the inconvenience...");
VoicePlay("P840100004_41_010");
MsgDisp("Male Student B","We're very sorry...");
MsgDisp("主人公","Haa, I'm glad that was resolved without
incidence.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,0,3,#1,#1,0,0);
ChMotion(1,3);
VoicePlay("P840100004_01_000");
MsgDisp("Kazama","Amazing.
You're like a magistrate.");
MsgDisp("主人公","｛風真＊＊｝.
Hey, don't tease me.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P840100004_01_010");
MsgDisp("Kazama","My bad.
But I thought your firm attitude and quick
response was very impressive.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,4);
ChEyeOpenLevel(1,8);
VoicePlay("P840100004_01_020");
MsgDisp("Kazama","Well, I didn't have a role to play.");
ChMotion(1,0);
ChEyeOpenLevel(1,#1);
MsgDisp("主人公","That's not true.
I was relieved because
｛風真＊＊｝ was there with me.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P840100004_01_030");
MsgDisp("Kazama","If I was of help to you, then I'm also
happy.");
MsgDisp("主人公","(Hehe, I was praised!
I'm glad I was able to show the results of
my hard work over the past three years!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
