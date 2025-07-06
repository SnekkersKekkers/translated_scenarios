BGOpen("sc710",0);
MsgClose();
ChOpen(3,254,3,3,3,-1,-1,0,0);
ScrFadeIn(0);
VoicePlay("F110310001_03_000");
MsgDisp("Honda","Welcome, welcome.");
MsgDisp("主人公","Oh, it's ｛本多＊＊｝.
You're doing it again this year∋");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F110310001_03_010");
MsgDisp("Honda","Correct, we're doing it again.
The Quiz Haircut Battle. 
After all, no one could beat me last year.");
MsgDisp("主人公","R-Right...");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("F110310001_39_000");
MsgDisp("Male Student A","Woah, so they did it this year, too?");
VoicePlay("F110310001_40_010");
MsgDisp("Male Student B","That's the quiz haircut deathmatch
from the rumors, right?");
ChMouth(3,0);
VoicePlay("F110310001_39_020");
MsgDisp("Male Student A","Yeah, another year of competition.
I know I won't win the quiz, 
but I'm scared anyway.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,5,1);
ChEyeOpenLevel(3,0);
VoicePlay("F110310001_03_020");
MsgDisp("Honda","Yes, yes!
Welcome!");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("F110310001_03_030");
MsgDisp("Honda","Someone came, so I'll see you later!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(3);
MsgDisp("主人公","(Well, I guess it's getting a little
popular.)");
MsgClose();
ScrFadeOut(0,0);
