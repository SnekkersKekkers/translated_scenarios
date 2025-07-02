SEPlay("EV_SE_668");
SEWait();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("K010200102_02_000");
MsgDisp("Sassa","Hm, this is great!
Thanks.");
MsgDisp("主人公","How is it?");
ChEye(2,3);
ChMouth(2,3);
ChMotion(2,4);
ChEyeOpenLevel(2,0);
VoicePlay("K010200102_02_010");
MsgDisp("Sassa","How?
You chose it for me.
It's great.");
MsgDisp("主人公","(Hm, seems like
he liked it.)");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
