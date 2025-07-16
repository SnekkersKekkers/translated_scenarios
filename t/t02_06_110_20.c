ChEyeOpenLevel(6,#1);
ChCheek(6,0);
MsgDisp("主人公","Me too......
I like ｛氷室＊＊｝.");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("T020611000_06_110");
MsgDisp("Himuro","Eh......really?");
MsgDisp("主人公","Yes, really.");
VoicePlay("T020611000_06_120");
ChEye(6,4);
ChMouth(6,0);
ChMotion(6,0);
ChCheek(6,5);
MsgDisp("Himuro","...... What is this?
This is so unexpected.");
VoicePlay("T020611000_06_130");
ChEye(6,4);
ChMouth(6,0);
ChMotion(6,0);
MsgDisp("Himuro","I thought I'd never see you again.
That this was the last time.");
MsgDisp("主人公","No.
Let's stay together forever from now on,
okay?");
VoicePlay("T020611000_06_140");
ChEye(6,4);
ChMouth(6,3);
ChMotion(6,3);
ChCheek(6,8);
MsgDisp("Himuro","...... Yeah, absolutely.
I'll never let you go again.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(6,0,0);
Wait(120,0);
StlOpen("ev_06_17");
ScrFadeIn(0);
VoiceEVSPlay(6);
VoicePlay("T020611000_06_150");
MsgDisp("Himuro","｛主人公｝, I love
you......");
MsgClear();
StlEffect(1,1,60);
Wait(300,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(300,0);
