BGOpen("sc823",0);
MsgClose();
ChOpen(2,254,0,0,4,-1,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","All the buildings have style.");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("Q070A00200_02_000");
MsgDisp("Sassa","Which makes Ryota like that all the time.");
MsgDisp("主人公","Hehe, he's hooked.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChPosition(2,2);
MsgClose();
ChOpen(1,254,0,0,3,-1,-1,0,1);
SEWait();
VoicePlay("Q070A00200_01_000");
MsgDisp("Kazama","There are even stuff here still used since
150 years. Looking at it doesn't get
boring.");
MsgDisp("主人公","If ｛風真＊＊｝ is so hooked, I'm sure 
They're all important stuff.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q070A00200_01_010");
MsgDisp("Kazama","They're furniture of those times, so I can
feel the weight of time.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
VoicePlay("Q070A00200_02_010");
MsgDisp("Sassa","Don't mind me,
Look around till you guys are fulfilled. ");
ChMotion(1,1);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("Q070A00200_01_020");
MsgDisp("Kazama","Well then, as you saidｰｰ");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("Q070A00200_01_030");
MsgDisp("Kazama","Not.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("Q070A00200_02_020");
MsgDisp("Sassa","Hm?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("Q070A00200_01_040");
MsgDisp("Kazama","Were coming together.
I'll tell you all about it.
......am I right?");
MsgDisp("主人公","Yay! Thanks.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
VoicePlay("Q070A00200_02_030");
MsgDisp("Sassa","Well, thank you.");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChClose(1,0,0);
ChClose(2,0,0);
