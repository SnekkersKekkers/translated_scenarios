MsgDisp("主人公","Do you do any sports besides surfing?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B070600000_06_150");
MsgDisp("Himuro","There's nothing of interest at the moment.");
MsgDisp("主人公","Are you not interested in sports?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B070600000_06_160");
MsgDisp("Himuro","Well...
I'm not bad at them.");
MsgDisp("主人公","Yeah, I knew that?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("B070600000_06_170");
MsgDisp("Himuro","That's good, then.
I don't like people making assumptions.");
MsgDisp("主人公","Assumptions?");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B070600000_06_180");
MsgDisp("Himuro","Because of my surname, people think I'm a
serious person who only studies.");
MsgDisp("主人公","(He seems to be worried about the Himuro
family name...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(6,#1);
ChMouthOpenLevel(6,#1);
ChCheek(6,0);
