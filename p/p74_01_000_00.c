MsgClose();
ScrFadeOut(0);
BGOpen("sc740",0);
ScrFadeIn(0);
MsgDisp("主人公","(I'm glad, seems like it was somewhat of a
success!)");
VoicePlay("P740100000_01_000");
MsgDisp("Kazama?","Good work.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,0,3,#1,#1,0,0);
MsgDisp("主人公","Ah, ｛風真＊＊｝!
How was it?");
ChEye(1,3);
ChMouth(1,3);
ChMotion(1,3);
VoicePlay("P740100000_01_010");
MsgDisp("Kazama","You were dignified.
You looked great.");
MsgDisp("主人公","Yay, I'm happy.
Thank you!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P740100000_01_020");
MsgDisp("Kazama","... Geez, I was trying to think of a way
on how to comfort you.
But it was for nothing.");
MsgDisp("主人公","(Yay, a huge success!)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
