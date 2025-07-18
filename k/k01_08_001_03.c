ChEye(8,2);
ChMouth(8,4);
ChMotion(8,0);
SEPlay("EV_SE_668");
SEWait();
VoicePlay("K010800103_08_000");
MsgDisp("Shirahane","...Hey, could I ask ya something?
Why didya choose this?");
MsgDisp("主人公","Hm?");
ChMotion(8,4,1);
VoicePlay("K010800103_08_010");
MsgDisp("Shirahane","Hm...
This gift is really makin' me think.");
MsgDisp("主人公","(Ugh...
I don't think he liked it.)");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
