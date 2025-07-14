BGOpen("sc000",1);
ScrFadeIn(0);
MsgDisp("主人公","(It's almost time for the new fashion
items to be revealed...)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ScrFadeOut(0);
SEWait();
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf100",1);
ScrFadeIn(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ScrFadeOut(0);
MsgDisp("主人公","(Phew... I guess it's too early to tell...
I'll just have some tea and go home.)");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
SEWait();
MsgClose();
SEPlay("EV_SE_DOOR_014");
BGOpen("ar100",0);
ScrFadeIn(0);
MsgDisp("主人公","Ah...");
MsgClose();
ScrFadeOut(0);
MsgClose();
BGMPlay("BGM_C04_NANA_A");
BGOpen("ev004",0);
ChNanaType(1);
ChOpen(4,100,1,0,0,#1,#1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("G110400200_04_000");
MsgDisp("Nanatsumori","｛主人公｝. Yo.");
MsgDisp("主人公","｛七ツ森＊｝, are you taking a break?");
VoicePlay("G110400200_04_010");
MsgDisp("Nanatsumori","Yeah.
Shooting some new accessories today.");
MsgDisp("主人公","I see.
It was still early after all...");
ChEye(4,0);
ChMouth(4,2);
VoicePlay("G110400200_04_020");
MsgDisp("Nanatsumori","Ah...
Are you interested in a new product?");
MsgDisp("主人公","Yeah.
But I couldn't find anything.");
ChEye(4,2);
ChMouth(4,2);
VoicePlay("G110400200_04_030");
MsgDisp("Nanatsumori","Didn't I tell you?
I'm about to be in a new shoot.");
MsgDisp("主人公","Hehe.
I guess I was being too hasty?");
ChEye(4,0);
ChMouth(4,2);
ChMotion(4,2);
VoicePlay("G110400200_04_040");
MsgDisp("Nanatsumori","Yeah, but it can be a good thing.
You're always on the lookout.");
VoicePlay("G110400200_04_050");
MsgDisp("Nanatsumori","You seem to do this a lot.
Are you gonna brag about it later?");
MsgDisp("主人公","Absolutely!");
MsgDisp("主人公","(Talking with ｛七ツ森＊｝ about
fashion is such a luxury!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
