MsgClose();
ChClose(1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","...Huh?
My wallet isn't there!
W-What should I do?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(1,254,0,0,0,10,#1,0,0);
ChMouth(1,3);
ChEyeOpenLevel(1,0);
Wait(10,0);
ChEyeOpenLevel(1,8);
VoicePlay("P840100001_01_000");
MsgDisp("Kazama","I have the \"lost and found\"-san's 
lost item.");
MsgDisp("主人公","That's my wallet!
Thank you for finding it, ｛風真＊＊｝...");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("P840100001_01_010");
MsgDisp("Kazama","It's good to worry about others, 
but you should care about yourself too.");
MsgDisp("主人公","(Uuugh, I don't even have anything to say
in response. I should have concentrated
more on preparations for the student
council...)");
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
