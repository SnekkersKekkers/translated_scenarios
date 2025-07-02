BGMStop();
BGDateAfterOpen();
ChLayout(2);
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
ScrFadeIn(0);
MsgDisp("主人公","Thanks for inviting me today.
It was fun!");
ChEye(1,4);
ChMouth(1,3);
ChEyeOpenLevel(1,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,3);
VoicePlay("B340A00000_02_000");
MsgDisp("Sassa","That's right.
This kind of curveball is nice.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,1);
VoicePlay("B340A00000_06_000");
MsgDisp("Himuro","Nozomu-senpai, don't you like 
it straight up more?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("B340A00000_01_000");
MsgDisp("Kazama","Well, maybe it's fine once in a while?
I'll invite you again. 
Then, see you all.");
MsgClose();
