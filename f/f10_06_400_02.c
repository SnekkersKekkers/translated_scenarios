BGOpen("sc500",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Ah, that's right.
Before I head home, I have to deliver 
the notebook ｛御影＊＊｝ asked me 
to deliver to the staff room!)");
VoiceEVSPlay(1);
VoicePlay("F100640002_01_000");
MsgDisp("Kazama?","｛主人公｝.");
VoiceEVSPlay(6);
VoicePlay("F100640002_06_000");
MsgDisp("Himuro?","｛主人公｝.");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(6,254,0,0,0,-1,-1,0,1,0,30);
ChOpen(1,254,0,4,0,-1,-1,0,2,0,30);
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F100640002_01_010");
MsgDisp("Kazama","Eh...Inori? ");
ChEye(6,3);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("F100640002_06_010");
MsgDisp("Himuro","Eh, Ryota-senpai...?");
MsgDisp("主人公","Are the two of you...
going home together?");
ChEye(1,2);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("F100640002_01_020");
MsgDisp("Kazama","Why?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100640002_06_020");
MsgDisp("Himuro","Yeah, why...
so, what are you doing?");
ChEye(1,4);
MsgDisp("主人公","I forgot to do something for
｛御影＊＊｝, so I'm heading back 
to the classroom now.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0,1);
VoicePlay("F100640002_01_030");
MsgDisp("Kazama","I'll help.
Listen, you should've said that before.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("F100640002_06_030");
MsgDisp("Himuro","Ah, I'll help instead.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("F100640002_01_040");
MsgDisp("Kazama","Why?
You're in a different class 
and school year.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,1);
VoicePlay("F100640002_06_040");
MsgDisp("Himuro","Even so, it's still okay 
for me to help, right?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("F100640002_01_050");
MsgDisp("Kazama","...Geez.
Go quickly.");
ChEye(6,1);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("F100640002_06_050");
MsgDisp("Himuro","Got it.");
MsgClose();
SEPlay("EV_SE_856");
MsgClose();
ChClose(6,0,30);
ChClose(1,0,30);
MsgDisp("主人公","(Umm... so are both of
you going to help me...?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
