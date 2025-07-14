ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1,1);
ChEyeOpenLevel(1,8);
ChCheek(1,0);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
ChCheek(3,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChCheek(4,0);
VoicePlay("D140B05001_03_000");
MsgDisp("Honda","Today's meal is delicious too today!");
MsgDisp("主人公","Yeah!");
VoicePlay("D140B05001_01_000");
MsgDisp("Kazama","Suddenly, I don't feel 
like eating.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("D140B05001_04_000");
MsgDisp("Nanatsumori","Kazama.
Your jealousy is showing.");
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("D140B05001_01_010");
MsgDisp("Kazama","Shut up.");
ChEye(1,3);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,4,1);
VoiceEVSPlay(3);
VoicePlay("D140B05001_03_010");
MsgDisp("Honda","｛主人公｝, you have something on your
mouth.
Here, I'll get it for you.");
ChEye(1,0);
ChMouth(1,2);
MsgDisp("主人公","Eh, where?");
ChEye(4,5);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("D140B05001_04_010");
MsgDisp("Nanatsumori","This is quite... something.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D140B05001_01_020");
MsgDisp("Kazama","We've become nothing.
We're like air.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("D140B05001_04_020");
MsgDisp("Nanatsumori","Kazama... I'll join you.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,1,1);
VoicePlay("D140B05001_03_020");
MsgDisp("Honda","Hey hey. It's sneaky for you guys to be
having secret conversations. Tell me too.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("D140B05001_01_030");
MsgDisp("Kazama","Sneaky?
I've lost to your sneakiness.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("D140B05001_04_030");
MsgDisp("Nanatsumori","Dahon, this, 
is jealousy.");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("D140B05001_03_030");
MsgDisp("Honda","Why?
Who are you jealous of?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D140B05001_01_040");
MsgDisp("Kazama","Hey, that's enough.");
MsgDisp("主人公","(｛風真＊＊｝ feels jealousy of
｛本多＊＊｝...? )");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(3,0,0);
ChClose(4,0,0);
