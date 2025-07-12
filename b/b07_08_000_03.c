MsgDisp("主人公","Do you do any sports?");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,3,1);
ChEyeOpenLevel(8,10);
VoicePlay("B070800000_08_110");
MsgDisp("Shirahane","I'm good at any sport!");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,0,1);
VoicePlay("B070800000_08_120");
MsgDisp("Shirahane","I help out the sports clubs. Track and
field club, soccer club, basketball club,
volleyball club, swimming club — bring it
on.");
MsgDisp("主人公","Amazing!");
ChEye(8,3);
ChMouth(8,0);
ChMotion(8,2,1);
ChEyeOpenLevel(8,0);
VoicePlay("B070800000_08_130");
MsgDisp("Shirahane","Hehe!");
MsgDisp("主人公","Then, out of those 
which do you like most?");
ChEye(8,0);
ChMouth(8,0);
ChMotion(8,0,1);
VoicePlay("B070800000_08_140");
MsgDisp("Shirahane","Hmmm...
I like all of them but...");
ChEye(8,3);
ChMouth(8,3);
ChMotion(8,3,1);
VoicePlay("B070800000_08_150");
MsgDisp("Shirahane","That's right.
Overall, I think I like running.
At Hane school, running is the best!");
MsgDisp("主人公","(｛大地＊＊｝ is good at running.)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChEyeOpenLevel(8,#1);
ChMouthOpenLevel(8,#1);
ChCheek(8,0);
