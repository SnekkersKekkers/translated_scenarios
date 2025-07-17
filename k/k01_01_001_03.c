SEPlay("EV_SE_668");
SEWait();
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,4);
VoicePlay("K010100103_01_000");
MsgDisp("Kazama","Is this for me?");
MsgDisp("主人公","Hm?
That's right.
It's your birthday present.");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,2);
ChEyeOpenLevel(1,8);
VoicePlay("K010100103_01_010");
MsgDisp("Kazama","I guess it's my fault.
You'll have to get to know me better...");
MsgDisp("主人公","(Ugh...
I don't think he liked it.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
