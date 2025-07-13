ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0,1);
ChCheek(1,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
ChCheek(4,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
ChEyeOpenLevel(1,0);
ChMouthOpenLevel(1,0);
VoicePlay("D140B04001_01_010");
MsgDisp("Kazama","............");
ChMouthOpenLevel(4,0);
VoicePlay("D140B04001_04_010");
MsgDisp("Nanatsumori","............");
MsgDisp("主人公","...What's up with you two?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("D140B04001_01_020");
MsgDisp("Kazama","What is it?");
MsgDisp("主人公","You're eating in complete
silence...");
ChEye(4,3);
ChMouth(4,0);
ChMotion(4,2,1);
VoicePlay("D140B04001_04_020");
MsgDisp("Nanatsumori","Ah—
I guess it's because Dahon's not here.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D140B04001_01_030");
MsgDisp("Kazama","Right.");
MsgDisp("主人公","｛本多＊＊｝?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,4);
VoicePlay("D140B04001_01_040");
MsgDisp("Kazama","It wasn't until the first time
there was a situation like this
that I realized how grateful I was 
to have Honda around.");
ChMotion(1,0);
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("D140B04001_04_030");
MsgDisp("Nanatsumori","Yeah.
Dahon comes up with all 
the conversation topics.");
MsgDisp("主人公","I see...");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
VoiceEVSPlay(1);
VoicePlay("D140B04001_01_050");
MsgDisp("Kazama","｛主人公｝,
please offer a topic of 
conversation for today.");
MsgDisp("主人公","(Ehh∋
You can't dump it on me so suddenly...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
ChClose(4,0,0);
