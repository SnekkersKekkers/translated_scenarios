ChLayout(2);
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
MsgClose();
ChOpen(1,254,0,0,0,-1,-1,0,0,0,30);
ChOpen(3,254,0,0,0,-1,-1,0,1,0,30);
SEPlay("EV_SE_544");
ChNanaType(0);
ChOpen(4,254,0,0,0,-1,-1,0,2,0,30);
MsgDisp("主人公","Good morning!
You're all early, aren't you?");
VoicePlay("Q090B00000_04_000");
MsgDisp("Nanatsumori","Mornin.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("Q090B00000_03_000");
MsgDisp("Honda","Good morning!");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("Q090B00000_01_000");
MsgDisp("Kazama","Good morning.
Did you sleep well?");
MsgDisp("主人公","Yes, perfect.
I'm really looking forward to today!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("Q090B00000_01_010");
MsgDisp("Kazama","Anyways,
Listen to what I say for today.");
MsgDisp("主人公","Hm?");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("Q090B00000_04_010");
MsgDisp("Nanatsumori","Wait ......
You're taking that thing seriously, 
aren't you?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("Q090B00000_03_010");
MsgDisp("Honda","That thing?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,1);
VoicePlay("Q090B00000_01_020");
MsgDisp("Kazama","So you guys forgot.");
ChEye(4,3);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("Q090B00000_04_020");
MsgDisp("Nanatsumori","As expected of Dahon.
You're good at this.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("Q090B00000_01_030");
MsgDisp("Kazama","...... Oh well.
Let's go normally.");
ChEye(4,0);
VoicePlay("Q090B00000_04_030");
MsgDisp("Nanatsumori","Well, that's that. 
Agreed.");
ChEye(3,0);
ChEye(3,4);
ChMotion(3,3,1);
VoicePlay("Q090B00000_03_020");
MsgDisp("Honda","Normally?
Nonono, let's enjoy it fully!");
ChEye(1,2);
ChMouth(1,3);
MsgDisp("主人公","Hehe.
Let's go enjoy it all!");
MsgClose();
ScrFadeOut(0,0);
MsgClose();
ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
