BGOpen("ne100",1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("D010400600_46_000");
MsgDisp("Woman","Really?
The way you lie so easily worries me.");
VoicePlay("D010400600_04_000");
MsgDisp("Nanatsumori?","Okay.
I'll make sure I eat properly.");
MsgDisp("主人公","(Huh?
That voice......)");
MsgClose();
ScrFadeOut(0);
BGMPlay("BGM_C04_NANA_C",0.01);
StlOpen("ev_04_08");
StlEye(4,1);
StlMouth(4,1);
ScrFadeIn(0);
VoicePlay("D010400600_46_010");
MsgDisp("Woman","Have you been attending school
properly?");
StlEye(4,1);
StlMouth(4,1);
StlEyeOpenLevel(4,5);
VoicePlay("D010400600_04_010");
MsgDisp("Nanatsumori","of course.
Geez......What are you worried about?");
MsgDisp("主人公","(｛七ツ森＊｝!
I wonder who that woman is......?)");
VoicePlay("D010400600_46_020");
MsgDisp("Woman","It's because you never call me.");
StlEye(4,1);
StlMouth(4,0);
VoicePlay("D010400600_04_020");
MsgDisp("Nanatsumori","I'm not a little kid anymore.
So don't worry.");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("D010400600_04_030");
MsgDisp("Nanatsumori","See you later then.");
VoicePlay("D010400600_46_030");
MsgDisp("Woman","Sigh......
Make sure to call once in a while!");
MsgDisp("主人公","(How curious......)");
MsgClose();
ScrFadeOut(0);
StlClose();
BGMVol(0.5,2);
BGOpen("ne100",1);
MsgClose();
ChNanaType(1);
ChOpen(4,35,0,2,4,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(4,1,1);
VoicePlay("D010400600_04_040");
MsgDisp("Nanatsumori","Phew......");
ChEye(4,5);
ChMouth(4,5);
ChMotion(4,5,1);
VoicePlay("D010400600_04_050");
MsgDisp("Nanatsumori","Woah∋");
MsgDisp("主人公","S-Sorry.
I didn't mean to eavesdrop......");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0,1);
VoicePlay("D010400600_04_060");
MsgDisp("Nanatsumori","......So you accidentally heard that.");
MsgDisp("主人公","I'm so sorry.
I......");
ChEye(4,4);
ChMouth(4,0);
ChMotion(4,1,1);
VoicePlay("D010400600_04_070");
MsgDisp("Nanatsumori","That was my sister.
You know, the one we talked about
before?");
MsgDisp("主人公","Ah......
The one who's always toying with you——");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,0,1);
VoicePlay("D010400600_04_080");
MsgDisp("Nanatsumori","Hold up!
That way of framing it is no good.
Forget that.");
MsgDisp("主人公","Eh?
Okay. G......Got it.");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("D010400600_04_090");
MsgDisp("Nanatsumori","Sigh......");
ChMouth(4,2);
VoicePlay("D010400600_04_100");
MsgDisp("Nanatsumori","My big sis always treats me like
a little kid.");
ChMouth(4,4);
ChMotion(4,0,1);
VoicePlay("D010400600_04_110");
MsgDisp("Nanatsumori","It's my fault for not contacting
her as much as I should. But isn't it
time for her to let it go?");
MsgDisp("主人公","Hehe.
She's not being a gentle and nice 
older sister.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("D010400600_04_120");
MsgDisp("Nanatsumori","A gentle older sister, huh......
I guess you're right.");
ChMotion(4,2,1);
VoicePlay("D010400600_04_130");
MsgDisp("Nanatsumori","Ahーh.
When will she finally let it go?");
MsgDisp("主人公","(Maybe instead of being bothered by
｛七ツ森＊｝, she's actually really
proud of him?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
ChPrmTblAdd(4,0);
