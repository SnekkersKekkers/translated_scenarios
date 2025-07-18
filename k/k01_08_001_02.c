ChEye(8,4);
ChMouth(8,4);
ChMotion(8,0);
SEPlay("EV_SE_668");
SEWait();
VoicePlay("K010800102_08_000");
MsgDisp("Shirahane","Ah, it's this?");
MsgDisp("主人公","Oh...you don't like it?");
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,2,1);
VoicePlay("K010800102_08_010");
MsgDisp("Shirahane","Hm?
Nah, that isn't it.");
ChEye(8,0);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("K010800102_08_020");
MsgDisp("Shirahane","Your feelings make me happy already.
I'll cherish it.");
MsgDisp("主人公","(Yeah, seems like he liked it.)");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
