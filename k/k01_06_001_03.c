SEPlay("EV_SE_668");
SEWait();
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
VoicePlay("K010600103_06_000");
MsgDisp("Himuro","This...");
MsgDisp("主人公","How is it?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("K010600103_06_010");
MsgDisp("Himuro","Are you sure it's for me?
If you want to take it back, now's the
time.");
MsgDisp("主人公","Hm?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("K010600103_06_020");
MsgDisp("Himuro","...From the looks of it, I guess it
really was for me.
Ha...thanks.");
MsgDisp("主人公","(I don't think he liked it that much...)");
MsgClose();
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
