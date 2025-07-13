BGOpen("sc823",0);
MsgClose();
ChOpen(2,254,0,0,4,#1,#1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","The buildings are all so charming.");
ChEye(2,2);
ChMouth(2,4);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("Q070A00200_02_000");
MsgDisp("Sassa","Ryota really gets fired up.");
MsgDisp("主人公","Hehe, he's obsessed.");
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
ChPosition(2,2);
MsgClose();
ChOpen(1,254,0,0,3,#1,#1,0,1);
SEWait();
VoicePlay("Q070A00200_01_000");
MsgDisp("Kazama","There's even things here from over 150 years ago.
Looking at them never gets old.");
MsgDisp("主人公","Since ｛風真＊＊｝ is so into them, I'm sure 
that means they're important.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("Q070A00200_01_010");
MsgDisp("Kazama","These are timeless pieces, and
you can sense the history they carry.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0,1);
VoicePlay("Q070A00200_02_010");
MsgDisp("Sassa","Feel free to take your time,
I can just wait here.");
ChMotion(1,1);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("Q070A00200_01_020");
MsgDisp("Kazama","Well since you're offering——");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("Q070A00200_01_030");
MsgDisp("Kazama","No.");
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
MsgDisp("Kazama","We're sticking together.
I'll tell you guys all about them.
......Okay?");
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
