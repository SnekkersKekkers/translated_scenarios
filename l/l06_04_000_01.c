MsgClose();
BGOpen("sc310",0);
ChLayout(1);
BGMPlay("BGM_C04_NANA_A");
ChNanaType(0);
ChOpen(4,254,0,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("L060400001_04_000");
MsgDisp("Nanatsumori","｛主人公｝.");
MsgDisp("主人公","Ah, ｛七ツ森＊｝.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("L060400001_04_010");
MsgDisp("Nanatsumori","What's today?");
MsgDisp("主人公","Um, White Day?");
ChEye(4,0);
ChMouth(4,3);
VoicePlay("L060400001_04_020");
MsgDisp("Nanatsumori","You got it.
Your chocolate was good.");
ChMotion(4,0);
VoicePlay("L060400001_04_030");
MsgDisp("Nanatsumori","Here, in return.");
SEPlay("EV_SE_664");
SEWait();
MsgDisp("主人公","Hm?
A present...?");
ChMotion(4,1);
VoicePlay("L060400001_04_040");
MsgDisp("Nanatsumori","Yeah.
This is the triple return.");
MsgDisp("主人公","Thanks so much!");
ChMotion(4,0);
VoicePlay("L060400001_04_050");
MsgDisp("Nanatsumori","Not sure if you'll like it, but that's all
my feelings right now.
See you.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
MsgClose();
ChClose(4);
MsgDisp("主人公","(I got a White Day present from
｛七ツ森＊｝!
I'm so happy.)");
