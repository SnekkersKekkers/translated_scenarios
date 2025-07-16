BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(｛大地＊＊｝ still isn't here...)");
MsgClose();
SEPlay("EV_SE_544");
ChOpen(35,254,0,1,0,#1,#1,0,0);
VoicePlay("B110800002_35_000");
MsgDisp("Guy","Ah～ , damn, damn, no good.
If you frown, it becomes a habit.
Come on, smile!");
MsgDisp("主人公","∋");
ChEye(35,0);
ChMouth(35,0);
VoicePlay("B110800002_35_010");
MsgDisp("Guy","Nice, nice, that's good～!");
ChEye(35,2);
ChMouth(35,0);
VoicePlay("B110800002_35_020");
MsgDisp("Guy","Alright, here we go! We've discovered a
golden egg of a great actress! Let's head
to the agency——");
ChPosition(35,2);
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
BGMPlay("BGM_C08_DAICHI_A",0.01);
MsgClose();
ChOpen(8,253,0,2,4,#1,#1,0,1);
ScrFadeIn(0);
VoicePlay("B110800002_08_000");
MsgDisp("Shirahane","what an impatient person...
It's all gibberish to me.");
MsgDisp("主人公","Ah, ｛大地＊＊｝.");
ChEye(35,0);
ChMouth(35,0);
VoicePlay("B110800002_35_030");
MsgDisp("Guy","Oh!
A baby faced guy has arrived!");
MsgDispSksp(1,5);
ChEye(8,2);
ChMouth(8,2);
ChMotion(8,2,1);
VoicePlay("B110800002_08_010");
MsgDisp("Shirahane","It's no good, I don't understand.
Can you translate?");
MsgDispSksp(0);
MsgDisp("主人公","Ah... sorry.
I also wasn't really listening to him
properly either.");
MsgDispSksp(1,5);
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B110800002_08_020");
MsgDisp("Shirahane","That's fine.
Let's go now.");
MsgDispSksp(0);
ChEye(35,2);
ChMouth(35,2);
VoicePlay("B110800002_35_040");
MsgDisp("Guy","Eh?
Wait a second you guys～!");
MsgDispSksp(1,5);
ChEye(8,2);
ChMouth(8,0);
ChMotion(8,4,1);
VoicePlay("B110800002_08_030");
MsgDisp("Shirahane","I'm sorry uncle.
We're going on a date now.
See youー.");
MsgDispSksp(0);
ChEye(35,0);
ChMouth(35,0);
VoicePlay("B110800002_35_050");
MsgDisp("Guy","See you again!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(35,0,30);
ChEye(8,3);
ChMouth(8,3);
ChPosition(8,0);
VoicePlay("B110800002_08_040");
MsgDisp("Shirahane","Oh, I can understand that!
But we don't need to meet again! ー.");
