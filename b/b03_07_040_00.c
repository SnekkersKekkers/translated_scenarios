BGOpen("wf400",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B030704000_07_000");
MsgDisp("Mikage","Hey, all of you.
Have your tickets at the ready?");
VoicePlay("B030704000_38_000");
MsgDisp("Students","Yes!");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,2);
VoicePlay("B030704000_07_010");
MsgDisp("Mikage","Will you be quiet during the performance!");
VoicePlay("B030704000_38_010");
MsgDisp("Students","Yes!");
MsgDisp("主人公","Yes!");
ChEye(7,2);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("B030704000_07_020");
MsgDisp("Mikage","Good reply.");
MsgClose();
ScrFadeOut(0,0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
Wait(40,0);
BGOpen("wf410",0);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
MsgDispSksp(1,0);
VoicePlay("B030704000_07_030");
MsgDisp("Mikage","This extra credit was a hit, huh?
Lucky us, getting to see it for free. ♪");
MsgDispSksp(0);
SEPlay("EV_SE_038");
SEWait();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
