ChEyeOpenLevel(6,-1);
ChCheek(6,0);
MsgDisp("主人公","I...... like you too.");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("T020621000_06_130");
MsgDisp("Himuro","…………");
VoicePlay("T020621000_06_140");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ChCheek(6,5);
MsgDisp("Himuro","My bravery to confess paid off.");
VoicePlay("T020621000_06_150");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ChCheek(6,0);
MsgDisp("Himuro","
I have to thank those two as well,
for giving me a push on the back.");
MsgDisp("主人公","Hehe, is that so?");
VoicePlay("T020621000_06_160");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
MsgDisp("Himuro","I should go thank them soon......
but for just a bit longer, I want to be
here with you.");
VoicePlay("T020621000_06_170");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChCheek(6,10);
MsgDisp("Himuro","
I...... haven't really grasped these
feelings yet.");
MsgDisp("主人公","It's fine...... 
I think I feel the same way too.");
VoicePlay("T020621000_06_180");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
MsgDisp("Himuro","You too?
......Then close your eyes.");
BGMStop(2.8);
MsgClear();
ScrFadeOut(0,1);
ChClose(6,0,0);
Wait(120,0);
StlOpen("ev_06_16");
ScrFadeIn(0);
VoiceEVSPlay(6);
VoicePlay("T020621000_06_190");
MsgDisp("Himuro","｛主人公｝, I love you.");
StlEffect(1,1,60);
Wait(60,0);
SEPlay("EV_SE_695");
Wait(120,0);
MsgClose();
ScrFadeOut(0,1,120);
StlClose();
Wait(160,0);
SEStop("EV_SE_695",3.5);
Wait(220,0);
