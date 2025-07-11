ChLayout(1);
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
ChOpen(5,254,0,0,4,-1,-1,0,1,0,30);
ChOpen(7,254,0,0,0,-1,-1,0,2,0,30);
VoiceEVSPlay(5);
VoicePlay("Q090C00000_05_000");
MsgDisp("Hiiragi","｛主人公｝, good morning.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,5);
VoicePlay("Q090C00000_07_000");
MsgDisp("Mikage","Oh, here you are.");
MsgDisp("主人公","｛柊＊＊＊｝, ｛御影＊＊｝,
Good morning.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("Q090C00000_07_010");
MsgDisp("Mikage","Good morning.
We're all in great shape, aren't we?");
MsgDisp("主人公","All?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("Q090C00000_05_010");
MsgDisp("Hiiragi","I just received a message from 
Inori-kun. He also seems to know the d
departure time.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("Q090C00000_07_020");
MsgDisp("Mikage","
\"Don't forget the report and 
souvenirs.\" it says.");
MsgDisp("主人公","Hehe, he'll surely get angry if we 
forget.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("Q090C00000_07_030");
MsgDisp("Mikage","Isn't it the classic to
pretend to forget for a moment?");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("Q090C00000_05_020");
MsgDisp("Hiiragi","Inori kun's gonna be angry～");
MsgDisp("主人公","(Hehe!
What should I buy ｛氷室＊＊｝?)");
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(7,0,0);
