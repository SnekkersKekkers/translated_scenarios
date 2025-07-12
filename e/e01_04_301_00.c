BGOpen("fp000",1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("E010430100_03_000");
MsgDisp("Honda?","Let's go, Mii-kun!");
VoicePlay("E010430100_04_000");
MsgDisp("Nanatsumori?","Absolutely not!");
MsgDisp("主人公","(Hm? That voice just now was......)");
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChNanaType(0);
ChOpen(4,255,0,1,1,#1,#1,0,1);
ChOpen(3,255,0,0,4,#1,#1,0,2);
MsgDisp("主人公","Just as I thought.
｛七ツ森＊｝, ｛本多＊＊｝!");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,1,1);
VoiceEVSPlay(4);
VoicePlay("E010430100_04_010");
MsgDisp("Nanatsumori","｛主人公｝, thank goodness......");
ChSet(3,3,1);
VoicePlay("E010430100_03_010");
MsgDisp("Honda","Oh yeah!
The three of us should go together.
Come along now.");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,0,1);
VoicePlay("E010430100_04_020");
MsgDisp("Nanatsumori","Ehhh ∋");
MsgDisp("主人公","Huh, where to?");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("E010430100_03_020");
MsgDisp("Honda","The botanical garden.
There are night shows being held
for a limited time.");
MsgDisp("主人公","Wow, really?
It's fine with me but......
｛七ツ森＊｝ looks annoyed.");
ChEye(4,1);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("E010430100_04_030");
MsgDisp("Nanatsumori","Obviously.");
MsgDisp("主人公","Eh?");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,1,1);
VoicePlay("E010430100_04_040");
MsgDisp("Nanatsumori","......Bugs!
The nighttime rainforest section
has way too many bugs!");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,3,1);
VoicePlay("E010430100_03_030");
MsgDisp("Honda","Yeah, tropical plants attract loads of
insects at night.");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,0,1);
VoiceEVSPlay(4);
VoicePlay("E010430100_04_050");
MsgDisp("Nanatsumori","Sorry, ｛主人公｝
I'm leaving the rest to you!");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
ChClose(4,0,30);
ChPosition(3,0);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoicePlay("E010430100_03_040");
MsgDisp("Honda","Mii-kun?
......It is what it is.");
ChEye(3,3);
ChMouth(3,3);
ChMotion(3,1,1);
VoicePlay("E010430100_03_050");
MsgDisp("Honda","Shall we go together?");
MsgDisp("主人公","Ehh? ∋");
MsgDisp("主人公","(｛七ツ森＊｝, how could you run away
after seeing those puppy dog eyes......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
